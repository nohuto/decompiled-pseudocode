/*
 * XREFs of NdisImmediateReadPortUlong @ 0x1C00E46C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00E4B70 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateReadPortUlong(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 1;
  return ndisImmediateReadWritePort(a1, a2, a3, 4LL, v4);
}
