/*
 * XREFs of HvlEnableVsmCalls @ 0x1408269B0
 * Callers:
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x140155CA0 (HvlpTryConfigureInterface.c)
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
