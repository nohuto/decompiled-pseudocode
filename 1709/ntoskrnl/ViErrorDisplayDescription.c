/*
 * XREFs of ViErrorDisplayDescription @ 0x1407B56F4
 * Callers:
 *     ViErrorReport1 @ 0x140277AD0 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140277B54 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140277BE8 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140277C8C (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1407A79E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1407A7CB0 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x1407B4248 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x1407B43B8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1407B5588 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1407B5620 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x1407C5010 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1407C51C0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1407C5310 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
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
