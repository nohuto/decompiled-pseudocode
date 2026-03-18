/*
 * XREFs of ?OnChannelAttached@CCompositionCapabilities@@MEAAJXZ @ 0x1800C6B10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ @ 0x1800C6B20 (-OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ.c)
 */

__int64 __fastcall CCompositionCapabilities::OnChannelAttached(CCompositionCapabilities *this)
{
  CCompositionCapabilities::OnCapabilitiesChanged(this);
  return 0LL;
}
