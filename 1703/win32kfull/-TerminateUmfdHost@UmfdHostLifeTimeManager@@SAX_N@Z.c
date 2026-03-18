/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C013FE28
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C013F454 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00D47EC (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00D5C64 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C011C2FC (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C011C320 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C029D2CC (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::TerminateUmfdHost(char a1)
{
  void *v2; // rax
  void *v3; // rbx
  char v4; // [rsp+48h] [rbp+10h] BYREF
  char v5; // [rsp+50h] [rbp+18h] BYREF

  KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
  v2 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
  v3 = v2;
  if ( v2 )
  {
    ZwWaitForSingleObject(v2, 0, 0LL);
    ZwClose(v3);
  }
  if ( a1 )
  {
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 0;
    KeClearEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent);
  }
  AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&v5);
  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v4);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  KeSetEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v4);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
}
