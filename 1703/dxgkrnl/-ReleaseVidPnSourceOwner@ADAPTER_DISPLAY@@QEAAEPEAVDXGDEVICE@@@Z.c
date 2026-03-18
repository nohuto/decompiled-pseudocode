/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0101970
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C017458C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B680 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B734 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00CA428 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E8F9C (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01016C0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  PERESOURCE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r14
  unsigned int v19; // esi
  unsigned int v20; // esi
  __int64 v21; // rbp
  PERESOURCE *v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v24 + 24) = 2287LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v25 + 24) = 2288LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v12, v26, v27, v28);
    *(_QWORD *)(v29 + 24) = 2289LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v13 = WdLogNewEntry5_WdEvent(v12);
  *(_QWORD *)(v13 + 24) = a2;
  WdLogEvent5_WdEvent(v13);
  v18 = 0;
  v19 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v14 = (PERESOURCE *)*((_QWORD *)a2 + 225);
      if ( v14 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v15 = 3208LL * v19;
        if ( a2 == (struct DXGDEVICE *)this[14][(unsigned __int64)v15 / 8 + 86] )
        {
          if ( this[2] != v14 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
            *(_QWORD *)(v30 + 24) = 2307LL;
            WdLogEvent5_WdAssertion(v30);
          }
          if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v19) )
            break;
        }
      }
      if ( ++v19 >= *((_DWORD *)this + 20) )
        goto LABEL_13;
    }
    v18 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice(this, a2, 4294967293LL, v17);
  }
LABEL_13:
  v20 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v21 = 401LL * v20;
      v22 = this[14];
      if ( a2 == (struct DXGDEVICE *)v22[v21 + 88] )
        break;
      if ( a2 == (struct DXGDEVICE *)v22[v21 + 86] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 225) )
        {
          v32 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
          *(_QWORD *)(v32 + 24) = 2340LL;
          WdLogEvent5_WdAssertion(v32);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((OUTPUTDUPL_CONTEXT ***)this, v20, v16, v17);
LABEL_19:
        ADAPTER_DISPLAY::SetGammaRamp(this, v20, 0LL);
      }
      if ( ++v20 >= *((_DWORD *)this + 20) )
        return v18;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 225) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      *(_QWORD *)(v31 + 24) = 2333LL;
      WdLogEvent5_WdAssertion(v31);
    }
    this[14][v21 + 88] = 0LL;
    goto LABEL_19;
  }
  return v18;
}
