/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C001F658
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     OSInterface @ 0x1C0012CB0 (OSInterface.c)
 *     ParsePackage @ 0x1C0019240 (ParsePackage.c)
 *     ParseAcquire @ 0x1C0019550 (ParseAcquire.c)
 *     ParseIntObj @ 0x1C001A1F4 (ParseIntObj.c)
 *     LNot @ 0x1C001E870 (LNot.c)
 *     CondRefOf @ 0x1C0020F30 (CondRefOf.c)
 *     LogOp2_32 @ 0x1C0020FDC (LogOp2_32.c)
 *     ExprOp1 @ 0x1C002A630 (ExprOp1.c)
 *     Concat @ 0x1C0060C70 (Concat.c)
 *     Match @ 0x1C0061A20 (Match.c)
 *     Match_32 @ 0x1C0061AF4 (Match_32.c)
 *     Match_64 @ 0x1C0061C14 (Match_64.c)
 *     ProcessWait @ 0x1C0062590 (ProcessWait.c)
 *     ToString @ 0x1C0062DD0 (ToString.c)
 *     ConvertToBuffer @ 0x1C0063104 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C00632D0 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
