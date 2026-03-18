/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C00A9BD4
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C009FB10 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(__int64 a1)
{
  char v1; // si
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 CurrentProcessSessionId; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  DXGPUSHLOCK *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // r9d
  DXGFASTMUTEX *v18; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  v1 = a1;
  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 74);
  if ( v3 )
  {
    v19 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v2);
    v18 = (DXGFASTMUTEX *)(v3 + 80);
    if ( v3 == -80 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v12 + 24) = 508LL;
      WdLogEvent5_WdAssertion(v12);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v18 + 1) == CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v13 + 24) = 515LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( v19 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
      v14[5] = &v18;
      v14[3] = 275LL;
      v14[4] = 4LL;
      v14[6] = 0LL;
      v14[7] = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    DXGFASTMUTEX::Acquire(v18);
    v19 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v3 + 72) )
    {
      _mm_lfence();
      v7 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8 * CurrentProcessSessionId);
      v19 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v18);
      goto LABEL_10;
    }
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v18);
  }
  v7 = 0LL;
LABEL_10:
  if ( v7 )
  {
    v8 = (DXGPUSHLOCK *)(v7 + 18520);
    if ( v1 )
    {
      DXGPUSHLOCK::AcquireExclusive(v8);
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v17 = *((_DWORD *)v8 + 4);
          if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v9, &EventBlockThread, v10, v17);
        }
        ExAcquirePushLockSharedEx(v8, 0LL);
      }
    }
    return 0LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v16);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
}
