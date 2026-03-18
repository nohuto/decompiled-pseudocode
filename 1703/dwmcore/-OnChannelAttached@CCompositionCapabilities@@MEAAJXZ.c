/*
 * XREFs of ?OnChannelAttached@CCompositionCapabilities@@MEAAJXZ @ 0x1801763B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ @ 0x180176338 (-OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ.c)
 */

__int64 __fastcall CCompositionCapabilities::OnChannelAttached(CCompositionCapabilities *this)
{
  CCompositionCapabilities::OnCapabilitiesChanged(this);
  return 0LL;
}
