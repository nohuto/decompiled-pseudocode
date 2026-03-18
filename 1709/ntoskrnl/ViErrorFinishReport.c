/*
 * XREFs of ViErrorFinishReport @ 0x1407B5748
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
 *     DbgPrompt @ 0x140250930 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1407B56A8 (VfErrorStoreTriageInformation.c)
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
