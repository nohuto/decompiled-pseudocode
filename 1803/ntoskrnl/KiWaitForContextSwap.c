/*
 * XREFs of KiWaitForContextSwap @ 0x1400EB990
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1400B29D4 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x1400B2DAC (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
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
