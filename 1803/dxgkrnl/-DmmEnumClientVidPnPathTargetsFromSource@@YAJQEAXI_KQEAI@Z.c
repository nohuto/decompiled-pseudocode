/*
 * XREFs of ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00D6A90
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C009FEC4 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C7A64 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00D6750 (DxgkIsSourceInHardwareClone.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00D6860 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D6910 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0108FF0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *const a4)
{
  __int64 v4; // r14
  DXGADAPTER *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-28h] BYREF
  __int64 v29[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v7 = a1;
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v25 + 24) = 0LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v26 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)v7 + 307);
  if ( !v9 )
  {
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = v7;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v29, v10);
    v11 = *(_QWORD *)(v10 + 88);
    v30 = -1;
    v28 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, v12);
    if ( v28 )
    {
      v17 = v28 + 96;
      v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v28 + 96), v4, a3, &v30);
      v7 = (DXGADAPTER *)v18;
      if ( v18 >= 0 )
      {
        auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
        LODWORD(v7) = 0;
        *a4 = v30;
LABEL_10:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29[0] + 40));
        return (unsigned int)v7;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
      v24[3] = a3;
      v24[4] = v4;
      v24[5] = v17;
      v24[6] = v7;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v7;
      LODWORD(v7) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
    goto LABEL_10;
  }
  v27 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v27 + 24) = v7;
  WdLogEvent5_WdError(v27);
  return 3223192373LL;
}
