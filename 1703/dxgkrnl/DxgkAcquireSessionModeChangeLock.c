/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C00F7D14
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9E90 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r9d
  DXGFASTMUTEX *v33; // [rsp+20h] [rbp-18h] BYREF
  char v34; // [rsp+28h] [rbp-10h]

  v4 = a1;
  v7 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + 73);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
    v14 = v7 + 80;
    v34 = 0;
    v15 = CurrentProcessSessionId;
    v33 = (DXGFASTMUTEX *)(v7 + 80);
    if ( v7 == -80 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v11, v14, v12, v13);
      *(_QWORD *)(v24 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v24);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v33 + 1) == CurrentThread )
    {
      v25 = WdLogNewEntry5_WdAssertion(CurrentThread, v14, v12, v13);
      *(_QWORD *)(v25 + 24) = 460LL;
      WdLogEvent5_WdAssertion(v25);
    }
    if ( v34 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v14, v12);
      v26[5] = &v33;
      v26[3] = 275LL;
      v26[4] = 4LL;
      v26[6] = 0LL;
      v26[7] = 0LL;
      WdLogEvent5_WdCriticalError(v26);
    }
    DXGFASTMUTEX::Acquire(v33);
    v34 = 1;
    if ( (unsigned int)v15 < *(_DWORD *)(v7 + 72) )
    {
      _mm_lfence();
      v20 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 8 * v15);
      v34 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v33, v17, v18, v19);
      goto LABEL_10;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v33, v17, v18, v19);
  }
  v20 = 0LL;
LABEL_10:
  if ( v20 )
  {
    if ( v4 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v20 + 18512));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v20 + 18512, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v32 = *(_DWORD *)(v20 + 18528);
          if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v21, &EventBlockThread, v22, v32);
        }
        ExAcquirePushLockSharedEx(v20 + 18512, 0LL);
      }
    }
    return 0LL;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v27 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v29, v28, v30, v31);
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
}
