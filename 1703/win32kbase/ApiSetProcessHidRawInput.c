/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C013D570
 * Callers:
 *     rimProcessHidInput @ 0x1C010CD40 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0110E4C (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetProcessHidRawInput(__int64 a1)
{
  __int64 result; // rax

  result = IsProcessHidRawInputSupported();
  if ( (int)result >= 0 )
    return ProcessHidRawInput(a1);
  return result;
}
