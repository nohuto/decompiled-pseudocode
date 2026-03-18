/*
 * XREFs of ViErrorDisplayDescription @ 0x1408233E8
 * Callers:
 *     ViErrorReport1 @ 0x1402AAC3C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402AACC0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1402AAD54 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1402AADF8 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140814B70 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140814E40 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x1408213F8 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14082156C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14082327C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140823314 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140832570 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140832720 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140832870 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
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
