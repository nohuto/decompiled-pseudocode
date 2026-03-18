/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00AD01C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000790C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C009E074 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AEBD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  char v7; // bp
  __int64 v8; // rcx
  __int64 v9; // rax
  PERESOURCE *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v4 = a3;
  v7 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 2825LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 2826LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 209) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v15 + 24) = 2827LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)this, a2, v4)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)this, a2, v4) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 2828LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v9 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = v4;
  WdLogEvent5_WdEvent(v9);
  v10 = this[14];
  v11 = 470 * v4;
  if ( a2 == (struct DXGDEVICE *)v10[470 * v4 + 88] )
  {
    v10[v11 + 88] = 0LL;
LABEL_14:
    ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v4);
    return v7;
  }
  if ( a2 == (struct DXGDEVICE *)v10[v11 + 86] )
  {
    if ( *((_QWORD *)a2 + 209) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
      && DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v4) )
    {
      v7 = 1;
      ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, v4, 0);
    }
    ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v4);
    goto LABEL_14;
  }
  return 0;
}
