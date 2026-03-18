/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C00B7570
 * Callers:
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00AC358 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromTarget(DXGADAPTER *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *i; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax

  v3 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 288) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 288) + 96LL);
  if ( !v7 )
  {
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  if ( v7 == -168 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v14);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v7 + 168));
  for ( i = *(__int64 **)(v7 + 128); i != (__int64 *)(v7 + 128) && i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 7) == (_DWORD)v3 )
    {
      if ( *((_DWORD *)i + 104) != 1 )
        i = (__int64 *)i[53];
      if ( i )
      {
        if ( v7 == -168 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v15);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 168));
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(i + 35), 1u);
        if ( a3 )
          *a3 = *((_DWORD *)i + 109);
        ExReleaseResourceLite((PERESOURCE)(i + 35));
        KeLeaveCriticalRegion();
        return 0LL;
      }
      break;
    }
  }
  v16 = WdLogNewEntry5_WdTrace(v9, v8);
  *(_QWORD *)(v16 + 24) = v3;
  *(_QWORD *)(v16 + 32) = v7;
  if ( v7 == -168 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v18);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 168));
  return 3221226021LL;
}
