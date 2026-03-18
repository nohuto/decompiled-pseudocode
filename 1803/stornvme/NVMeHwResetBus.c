/*
 * XREFs of NVMeHwResetBus @ 0x1C00020E0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x1C000559C (NVMeControllerReset.c)
 *     NVMeControllerAsyncReset @ 0x1C0005810 (NVMeControllerAsyncReset.c)
 */

char __fastcall NVMeHwResetBus(__int64 a1)
{
  int v1; // ebx
  char result; // al

  v1 = a1;
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  result = NVMeControllerAsyncReset(a1, 0LL, 0LL, 0LL);
  if ( !result )
    return NVMeControllerReset(v1);
  return result;
}
