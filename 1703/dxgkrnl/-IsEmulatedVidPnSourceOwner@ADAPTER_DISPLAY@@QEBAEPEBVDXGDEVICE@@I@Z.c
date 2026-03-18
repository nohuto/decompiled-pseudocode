/*
 * XREFs of ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B788
 * Callers:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B734 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00E78D4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     DxgkSetGammaRamp @ 0x1C018BE70 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
        DXGADAPTER **this,
        const struct DXGDEVICE *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool result; // al
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 4870LL;
    WdLogEvent5_WdAssertion(v11);
  }
  result = ((unsigned int)v4 < *((_DWORD *)this + 20)
         || (v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9),
             *(_QWORD *)(v12 + 24) = 4871LL,
             WdLogEvent5_WdAssertion(v12),
             (unsigned int)v4 < *((_DWORD *)this + 20)))
        && a2 == *((const struct DXGDEVICE **)this[14] + 401 * v4 + 88);
  return result;
}
