/*
 * XREFs of HvlEnableVsmCalls @ 0x140858168
 * Callers:
 *     KiInitializeBootStructures @ 0x1404270C0 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x140134808 (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x1402947CC (HvlpGetVtlCallVa.c)
 */

_DWORD *__fastcall HvlEnableVsmCalls(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a1 + 240);
  if ( (result[29] & 0x100) != 0 )
  {
    result = (_DWORD *)HvlpTryConfigureInterface(a1);
    if ( (int)result >= 0 )
      return HvlpGetVtlCallVa();
  }
  return result;
}
