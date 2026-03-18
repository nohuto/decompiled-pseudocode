/*
 * XREFs of ViErrorDisplayDescription @ 0x140773940
 * Callers:
 *     ViErrorReport1 @ 0x140251260 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402512E4 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140251378 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14025141C (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140765E40 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140766110 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140772498 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140772608 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1407737D4 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x14077386C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140782C80 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140782E30 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140782F80 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 */

__int64 __fastcall ViErrorDisplayDescription(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  LODWORD(result) = 0;
  for ( i = &ViErrorDescriptions; *i != a1; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * (unsigned int)result + 1));
}
