/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00FE870
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C017811C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007804 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00078B8 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C009E074 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AEBD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // r14
  unsigned int v13; // esi
  PERESOURCE *v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rbp
  PERESOURCE *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v19 + 24) = 2749LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v20 + 24) = 2750LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v21 + 24) = 2751LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v10 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = a2;
  WdLogEvent5_WdEvent(v10);
  v12 = 0;
  v13 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v14 = (PERESOURCE *)*((_QWORD *)a2 + 209);
      if ( v14 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v11 = 3760LL * v13;
        if ( a2 == (struct DXGDEVICE *)this[14][(unsigned __int64)v11 / 8 + 86] )
        {
          if ( this[2] != v14 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v11);
            *(_QWORD *)(v22 + 24) = 2769LL;
            WdLogEvent5_WdAssertion(v22);
          }
          if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v13) )
            break;
        }
      }
      if ( ++v13 >= *((_DWORD *)this + 20) )
        goto LABEL_12;
    }
    v12 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, 0xFFFFFFFD, 0);
  }
LABEL_12:
  v15 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v16 = 470LL * v15;
      v17 = this[14];
      if ( a2 == (struct DXGDEVICE *)v17[v16 + 88] )
        break;
      if ( a2 == (struct DXGDEVICE *)v17[v16 + 86] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 209) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v24 + 24) = 2802LL;
          WdLogEvent5_WdAssertion(v24);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v15);
LABEL_20:
        ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v15);
      }
      if ( ++v15 >= *((_DWORD *)this + 20) )
        return v12;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 209) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v23 + 24) = 2795LL;
      WdLogEvent5_WdAssertion(v23);
    }
    this[14][v16 + 88] = 0LL;
    goto LABEL_20;
  }
  return v12;
}
