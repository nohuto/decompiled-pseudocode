/*
 * XREFs of ceilf_0 @ 0x18004DE66
 * Callers:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001307C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030A10 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180033BB4 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800700A4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf_0(float X)
{
  return ceilf(X);
}
