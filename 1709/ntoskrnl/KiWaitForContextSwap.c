/*
 * XREFs of KiWaitForContextSwap @ 0x14005B39C
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1400ACF64 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x1400AD33C (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1)
{
  char result; // al
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i) )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
  }
  return result;
}
