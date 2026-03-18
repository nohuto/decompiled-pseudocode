/*
 * XREFs of ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104CEC
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0096610 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0104760 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C016DE50 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C017317C (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E8F9C (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104BA4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(PERESOURCE **this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  struct ADAPTER_RENDER *v15; // rcx
  unsigned int i; // edi
  __int64 v17; // rax
  __int64 v18; // rax

  if ( a2 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v17 + 24) = 2484LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v18 + 24) = 2485LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v12 = WdLogNewEntry5_WdEvent(v9);
  *(_QWORD *)(v12 + 24) = this;
  WdLogEvent5_WdEvent(v12);
  v15 = (struct ADAPTER_RENDER *)this[2][286];
  if ( v15 && v15 == (struct ADAPTER_RENDER *)a2 )
    ADAPTER_DISPLAY::DisableAllPrimaries(this, (struct ADAPTER_RENDER *)a2, v13, v14);
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( this[14][401 * i + 86] )
    {
      ADAPTER_DISPLAY::RemoveVidPnOwnership((OUTPUTDUPL_CONTEXT ***)this, i, v13, v14);
      ADAPTER_DISPLAY::SetGammaRamp(this, i, 0LL);
    }
  }
}
