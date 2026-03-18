/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C0046E34
 * Callers:
 *     ReadField @ 0x1C004D4C0 (ReadField.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     CondRefOf @ 0x1C00504A0 (CondRefOf.c)
 *     ExprOp1 @ 0x1C00507A0 (ExprOp1.c)
 *     ExprOp2 @ 0x1C0050A80 (ExprOp2.c)
 *     LNot @ 0x1C0051040 (LNot.c)
 *     LogOp2 @ 0x1C0051510 (LogOp2.c)
 *     LogOp2_32 @ 0x1C0051564 (LogOp2_32.c)
 *     LogOp2_64 @ 0x1C005190C (LogOp2_64.c)
 *     Match @ 0x1C0051A30 (Match.c)
 *     Match_32 @ 0x1C0051B04 (Match_32.c)
 *     Match_64 @ 0x1C0051C24 (Match_64.c)
 *     OSInterface @ 0x1C0051FC0 (OSInterface.c)
 *     ProcessWait @ 0x1C0052D60 (ProcessWait.c)
 *     ToString @ 0x1C00536D0 (ToString.c)
 *     ConvertToBuffer @ 0x1C0053A14 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 *     ParseAcquire @ 0x1C0054260 (ParseAcquire.c)
 *     ParseIntObj @ 0x1C00554A0 (ParseIntObj.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

bool IsCompatableDSDTRevision()
{
  char v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v2);
    return v2 >= 2;
  }
  return v0;
}
