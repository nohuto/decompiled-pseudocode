/*
 * XREFs of DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380
 * Callers:
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00A701C (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00A72A0 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00A8080 (DxgkIsSourceInHardwareClone.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A9200 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00AA3B8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // r12
  DXGADAPTER *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+78h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  v7 = a1;
  if ( !a4 )
  {
    v28 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v28 + 24) = 0LL;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v29 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v29 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v29);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v10 = *((_QWORD *)v7 + 285);
  if ( !v10 )
  {
    v29 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v29 + 24) = v7;
    goto LABEL_15;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 40));
    v16 = *(_QWORD *)(v11 + 88);
    v32 = -1;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 32));
      v17 = *(_QWORD *)(v11 + 88);
      v31[0] = v17;
      if ( v17 )
      {
        v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v17 + 96), v4, a3, &v32);
        v7 = (DXGADAPTER *)v18;
        if ( v18 >= 0 )
        {
          ReferenceCounted::Release((ReferenceCounted *)(v17 + 24), v19);
          LODWORD(v7) = 0;
          *a4 = v32;
LABEL_9:
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 40), v23, v24, v25);
          return (unsigned int)v7;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        v27[3] = a3;
        v27[4] = v4;
        v27[5] = v17 + 96;
        v27[6] = v7;
LABEL_11:
        auto_rc<DMMVIDPN const>::reset(v31, 0LL);
        goto LABEL_9;
      }
    }
    else
    {
      v31[0] = 0LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v7;
    LODWORD(v7) = -1071774884;
    goto LABEL_11;
  }
  v30 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v30 + 24) = v7;
  WdLogEvent5_WdError(v30);
  return 3223192373LL;
}
