/*
 * XREFs of NdisImmediateWritePortUshort @ 0x1C00DA760
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00DAB60 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateWritePortUshort(__int64 a1, __int64 a2, __int16 a3)
{
  char v4; // [rsp+20h] [rbp-18h]
  __int16 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = 0;
  return ndisImmediateReadWritePort(a1, a2, &v5, 2LL, v4);
}
