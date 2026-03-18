/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C0017174
 * Callers:
 *     ReadField @ 0x1C0013B20 (ReadField.c)
 *     ParsePackage @ 0x1C00148B0 (ParsePackage.c)
 *     ParseAcquire @ 0x1C00156F0 (ParseAcquire.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ParseIntObj @ 0x1C001B1D0 (ParseIntObj.c)
 *     LNot @ 0x1C001BDC0 (LNot.c)
 *     CondRefOf @ 0x1C001C620 (CondRefOf.c)
 *     LogOp2_32 @ 0x1C001C6CC (LogOp2_32.c)
 *     OSInterface @ 0x1C001C820 (OSInterface.c)
 *     ExprOp1 @ 0x1C001E7A0 (ExprOp1.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 *     Match @ 0x1C0060820 (Match.c)
 *     Match_32 @ 0x1C00608F4 (Match_32.c)
 *     Match_64 @ 0x1C0060A30 (Match_64.c)
 *     ProcessWait @ 0x1C00613C0 (ProcessWait.c)
 *     ToString @ 0x1C0061C00 (ToString.c)
 *     ConvertToBuffer @ 0x1C0061F34 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0062100 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
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
