/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C029D2CC
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdQueryFontData @ 0x1C0090830 (UmfdQueryFontData.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C013FE28 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00227D8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00227F8 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

HANDLE UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(void)
{
  __int64 v0; // rcx
  NTSTATUS v1; // eax
  HANDLE v2; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v5,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v0)
    || !UmfdHostLifeTimeManager::s_UmfdHostProcess
    || ObOpenObjectByPointer(
         UmfdHostLifeTimeManager::s_UmfdHostProcess,
         0x200u,
         0LL,
         1u,
         (POBJECT_TYPE)PsProcessType,
         0,
         &ProcessHandle) < 0 )
  {
    v2 = 0LL;
  }
  else
  {
    v1 = ZwTerminateProcess(ProcessHandle, 258);
    if ( (int)(v1 + 0x80000000) < 0 || v1 == -1073741558 )
    {
      v2 = ProcessHandle;
    }
    else
    {
      ZwClose(ProcessHandle);
      v2 = 0LL;
      ProcessHandle = 0LL;
    }
  }
  if ( v5 )
  {
    GreReleasePushLockShared(v5);
    KeLeaveCriticalRegion();
  }
  return v2;
}
