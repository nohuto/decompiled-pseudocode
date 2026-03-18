/*
 * XREFs of RtlXSave @ 0x140007620
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x140007450 (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x140008458 (KeContextFromKframes.c)
 *     KiSaveNpxState @ 0x14020729C (KiSaveNpxState.c)
 *     PspGetContext @ 0x140521A80 (PspGetContext.c)
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1406AEC38 (KiCaptureUmsThreadContext.c)
 *     ViCtxCaptureInitialIsrState @ 0x14077F798 (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x14077F838 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlXSave(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // ecx

  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveCHelper(a1, a2, a3, a1);
  result = a2;
  if ( (a2 & 6) == 4 )
  {
    v5 = a1[6];
    v6 = a1[7];
    _xsave(a1, a2);
    a1[6] = v5;
    a1[7] = v6;
  }
  else
  {
    _xsave(a1, a2);
  }
  return result;
}
