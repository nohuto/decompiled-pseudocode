/*
 * XREFs of NdisImmediateWritePortUchar @ 0x1C00E5F80
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00E63D0 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateWritePortUchar(__int64 a1, __int64 a2, char a3)
{
  char v4; // [rsp+20h] [rbp-18h]
  char v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = 0;
  return ndisImmediateReadWritePort(a1, a2, &v5, 1LL, v4);
}
