/*
 * XREFs of KiWaitForContextSwap @ 0x14004080C
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14002B858 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x14003FA70 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
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
