/*
 * XREFs of XilRegister_ReadUlong64 @ 0x1C0019748
 * Callers:
 *     XilCoreCommand_AbortCommandRing @ 0x1C003E49C (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C003E73C (XilCoreCommand_QueryIsRingRunning.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C005AEA0 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUlong64(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL) )
    return *(_QWORD *)a2;
  Register_ReadSecureMmio(a1, a2, 3, 1, &v3);
  return v3;
}
