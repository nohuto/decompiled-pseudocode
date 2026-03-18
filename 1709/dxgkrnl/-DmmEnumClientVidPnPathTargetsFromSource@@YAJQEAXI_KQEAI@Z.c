/*
 * XREFs of ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00B25D4
 * Callers:
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00B85E8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00E243C (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00E4D80 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E5E50 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00E89D0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00F9490 (DxgkIsSourceInHardwareClone.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *const a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdi
  unsigned int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v27 + 24) = 0LL;
LABEL_30:
    WdLogEvent5_WdError(v27);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v10 = *((_QWORD *)a1 + 288);
  if ( !v10 )
  {
    v27 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v27 + 24) = a1;
    goto LABEL_30;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 40));
    v14 = *(_QWORD *)(v11 + 88);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v11 + 88);
      v29 = v15;
      if ( v15 )
      {
        v16 = v15 + 96;
        v17 = -1;
        v18 = 0LL;
        v19 = *(_QWORD *)(v15 + 120);
        if ( v19 != v15 + 120 )
        {
          v12 = (_QWORD *)(v19 - 8);
          while ( v12 )
          {
            if ( *(_DWORD *)(v12[11] + 24LL) == (_DWORD)v5 )
            {
              if ( v18 == a3 )
              {
                v17 = *(_DWORD *)(v12[12] + 24LL);
                goto LABEL_13;
              }
              ++v18;
            }
            v13 = v12[1];
            v12 = (_QWORD *)(v13 - 8);
            if ( v13 == v15 + 120 )
              v12 = 0LL;
          }
        }
        if ( v19 == v15 + 120 || *(_QWORD *)(v15 + 120) == 8LL )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = v16;
        }
        else
        {
          if ( v18 )
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
            v21[3] = v16;
            v21[4] = v5;
            v21[5] = a3;
LABEL_13:
            ReferenceCounted::Release((ReferenceCounted *)(v15 + 24));
            *a4 = v17;
            goto LABEL_14;
          }
          v22 = WdLogNewEntry5_WdTrace(v13, v12);
          *(_QWORD *)(v22 + 24) = v5;
          *(_QWORD *)(v22 + 32) = v16;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
        v4 = -1071774919;
        v25[3] = a3;
        v25[4] = v5;
        v25[5] = v16;
        v25[6] = -1071774919LL;
LABEL_25:
        auto_rc<DMMVIDPN const>::reset(&v29, 0LL);
LABEL_14:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 40));
        return v4;
      }
    }
    else
    {
      v29 = 0LL;
    }
    v4 = -1071774884;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = a1;
    goto LABEL_25;
  }
  v28 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v28 + 24) = a1;
  WdLogEvent5_WdError(v28);
  return 3223192373LL;
}
