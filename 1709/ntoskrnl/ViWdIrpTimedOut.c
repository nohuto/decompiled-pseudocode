/*
 * XREFs of ViWdIrpTimedOut @ 0x1407BE688
 * Callers:
 *     ViWdIrpTimerDpcRoutine @ 0x1407BE730 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1407B56A8 (VfErrorStoreTriageInformation.c)
 */

__int64 __fastcall ViWdIrpTimedOut(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v2; // r8
  unsigned int v3; // ecx
  const void *v4; // r8

  result = (unsigned int)ViWdBreaksEnabled;
  if ( ViWdBreaksEnabled )
  {
    result = *(unsigned __int16 *)(a1 + 30);
    v2 = *(_QWORD *)(a1 + 16);
    v3 = 1000 * result;
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      VfErrorStoreTriageInformation(196LL, 309LL, v2, v3, 0LL);
      VfUtilDbgPrint("Cancelled IRP %p didn't complete in due time.\n", v4);
      __debugbreak();
    }
    if ( (MmVerifierData & 0x800) != 0 )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x135uLL, v2, v3, 0LL);
  }
  return result;
}
