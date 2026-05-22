/*
 * XREFs of ?AddRef@ControllerProcessor@@WCI@EAAKXZ @ 0x180036880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::AddRef(__int64 a1)
{
  return ComboButtonProcessor::AddRef((ComboButtonProcessor *)(a1 - 40));
}
