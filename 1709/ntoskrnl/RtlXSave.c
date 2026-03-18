/*
 * XREFs of RtlXSave @ 0x14012EAA8
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14000A790 (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x1400D9CC0 (KeContextFromKframes.c)
 *     KiSaveNpxState @ 0x14020DC30 (KiSaveNpxState.c)
 *     PspGetContext @ 0x140514840 (PspGetContext.c)
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1406DA088 (KiCaptureUmsThreadContext.c)
 *     ViCtxCaptureInitialIsrState @ 0x1407C177C (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1407C1818 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     XSaveCHelper @ 0x140189C00 (XSaveCHelper.c)
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
