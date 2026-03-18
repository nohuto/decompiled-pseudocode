/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C00DFF30
 * Callers:
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00AF6C4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DF324 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EF8B8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F00F4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E0148 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(__int64 a1, __int64 a2, bool *a3, bool *a4)
{
  __int64 v4; // rbp
  bool *v6; // rdi
  __int64 v8; // r12
  int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  bool v43; // [rsp+60h] [rbp+8h]

  v4 = (unsigned int)a2;
  v6 = a3;
  if ( !a1 || (_DWORD)a2 == -1 || !a3 || !a4 )
    return 3221225485LL;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v33 + 24) = 7084LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v8 = *(_QWORD *)(a1 + 2280);
  if ( !v8 )
  {
    v34 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v34 + 24) = 7089LL;
    WdLogEvent5_WdError(v34);
    return 3221225485LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !*(_QWORD *)(a1 + 2280) )
  {
    v36 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v36);
  }
  v9 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 2280) + 96LL);
  if ( v10 )
  {
    if ( v10 == -168 )
    {
      v38 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v38);
    }
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v10 + 168));
    v15 = *(__int64 **)(v10 + 128);
    if ( v15 != (__int64 *)(v10 + 128) && v15 )
    {
      while ( *((_DWORD *)v15 + 7) != (_DWORD)v4 )
      {
        v15 = (__int64 *)*v15;
        if ( v15 == (__int64 *)(v10 + 128) || !v15 )
          goto LABEL_35;
      }
      if ( *((_DWORD *)v15 + 94) != 1 )
        v15 = (__int64 *)v15[48];
      if ( v15 )
      {
        if ( v10 == -168 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
          WdLogEvent5_WdAssertion(v39);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 168));
        if ( *((_DWORD *)v15 + 94) != 1 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          WdLogEvent5_WdAssertion(v40);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(v15 + 30), 1u);
        v20 = (*((_DWORD *)v15 + 6) & 0x80u) != 0;
        ExReleaseResourceLite((PERESOURCE)(v15 + 30));
        KeLeaveCriticalRegion();
        v6 = a3;
        v24 = 0;
        v25 = 0LL;
        goto LABEL_28;
      }
    }
LABEL_35:
    v27 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    *(_QWORD *)(v27 + 24) = v4;
    *(_QWORD *)(v27 + 32) = v10;
    if ( v10 == -168 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
      WdLogEvent5_WdAssertion(v41);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 168));
    v32 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v32 + 24) = v4;
    *(_QWORD *)(v32 + 32) = a1;
    WdLogEvent5_WdDmmEvent(v32);
    v6 = a3;
    v24 = -1073741632;
    v20 = 0;
  }
  else
  {
    v37 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v37 + 24) = a1;
    WdLogEvent5_WdError(v37);
    v20 = v43;
    v24 = -1073741811;
  }
  v25 = v24;
LABEL_28:
  if ( (_DWORD)v25 != -1073741632 )
    v9 = v24;
  if ( v9 < 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v25, v21, v22, v23);
    *(_QWORD *)(v42 + 24) = v9;
    WdLogEvent5_WdAssertion(v42);
  }
  else if ( v20 )
  {
    *v6 = 1;
    *a4 = 1;
  }
  else
  {
    *v6 = *(_BYTE *)(v8 + 133) == 0;
    *a4 = *(_BYTE *)(v8 + 134) == 0;
  }
  return (unsigned int)v9;
}
