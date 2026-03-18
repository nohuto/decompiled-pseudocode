/*
 * XREFs of RtlXSave @ 0x1400C59E4
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x1400C5810 (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x140131360 (KeContextFromKframes.c)
 *     KiSaveNpxState @ 0x14024BE38 (KiSaveNpxState.c)
 *     PspGetContext @ 0x1405B8B34 (PspGetContext.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140744154 (KiCaptureUmsThreadContext.c)
 *     ViCtxCaptureInitialIsrState @ 0x14082ECBC (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x14082ED58 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     XSaveCHelper @ 0x1401B3870 (XSaveCHelper.c)
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
