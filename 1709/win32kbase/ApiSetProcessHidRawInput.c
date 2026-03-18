/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C013CA40
 * Callers:
 *     rimProcessHidInput @ 0x1C010BC90 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C010F8F4 (RIMProcessAnyPointerDeviceInput.c)
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
