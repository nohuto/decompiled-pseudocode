/*
 * XREFs of ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00D457C
 * Callers:
 *     UmfdUninitializeProcess @ 0x1C00D4570 (UmfdUninitializeProcess.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00D465C (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00D47EC (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C00D5140 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00D5C18 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00D5C44 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00D5C64 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

void UmfdHostLifeTimeManager::UninitializeProcess(void)
{
  unsigned int i; // ebx
  void *ServerPort; // rax
  PVOID v2; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent) )
  {
    KeSetEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    if ( gpidLogon )
      PostWinlogonMessage(3LL, 4LL);
  }
  CAutoPushLockEx::CAutoPushLockEx(
    (CAutoPushLockEx *)&v3,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  UmfdHostLifeTimeManager::s_Ready = 0;
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  for ( i = 0; i < 4; ++i )
  {
    ServerPort = (void *)UmfdGetServerPort(i);
    if ( ServerPort )
      UmfdCancelServerOutstandingRequests(ServerPort);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v3);
  if ( UmfdAllocation::s_allocationLookup )
  {
    v2 = UmfdAllocation::s_allocationLookupLock;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    NSInstrumentation::CPointerHashTable::Enumerate(
      UmfdAllocation::s_allocationLookup,
      (void (*)(void *, void *, void *))UmfdAllocation::_RemoveAllocationFromLookup,
      0LL);
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v3, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v3);
  UmfdZombifyAllUmfdFonts();
  UmfdHostLifeTimeManager::s_Launched = 0;
}
