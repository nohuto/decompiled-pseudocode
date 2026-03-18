/*
 * XREFs of ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x1800753AC
 * Callers:
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x18001A0A0 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180191118 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDXGIAdapterLimited::IsXboxAdapter(const wchar_t *this)
{
  return wcsstr(this + 20, L"SraKmd") != 0LL;
}
