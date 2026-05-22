/*
 * XREFs of ?AddRef@TapProcessor@@WBI@EAAKXZ @ 0x1800075F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::AddRef(__int64 a1)
{
  return MPCSharedWorldInputTarget::AddRef((MPCSharedWorldInputTarget *)(a1 - 24));
}
