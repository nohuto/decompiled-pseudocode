/*
 * XREFs of ViErrorFinishReport @ 0x14082343C
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
 *     DbgPrompt @ 0x140286390 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x14082339C (VfErrorStoreTriageInformation.c)
 */

__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  _DWORD *i; // r10

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  result = 0LL;
  for ( i = &ViErrorDescriptions; *i != (_DWORD)v4; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  result = *((unsigned int *)&ViErrorDescriptions + 4 * result + 1);
  if ( (result & 1) == 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
      __debugbreak();
    }
    result = (unsigned int)MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VerifierBugCheckIfAppropriate(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
