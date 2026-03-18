/*
 * XREFs of ViErrorFinishReport @ 0x140773998
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
 *     DbgPrompt @ 0x14023B0A0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1407738F4 (VfErrorStoreTriageInformation.c)
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
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
        __debugbreak();
      }
    }
    return VerifierBugCheckIfAppropriate(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
