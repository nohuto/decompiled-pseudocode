/*
 * XREFs of ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00FE8A0
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C00FDF44 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?Create@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00FE988 (-Create@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00FEA28 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00FEA68 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(HANDLE Handle)
{
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
  CAutoPushLockEx::CAutoPushLockEx(
    (CAutoPushLockEx *)&v6,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  if ( Handle )
  {
    UmfdFileviewLookup = (PVOID)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Create();
    if ( UmfdFileviewLookup )
    {
      v3 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
      UmfdHostLifeTimeManager::s_UmfdHostProcess = (PRKPROCESS)Object;
      if ( v3 < 0 )
      {
        UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
        UmfdHostLifeTimeManager::s_UmfdHostProcess = 0LL;
      }
      else
      {
        ++UmfdHostLifeTimeManager::s_UmfdHostGenerationId;
        v2 = 1;
        UmfdHostLifeTimeManager::s_Launched = 1;
        UmfdHostLifeTimeManager::s_Ready = 1;
      }
    }
  }
  else if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    if ( gpidLogon )
      PostWinlogonMessage(3LL, 4LL);
  }
  KeSetEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  return v2;
}
