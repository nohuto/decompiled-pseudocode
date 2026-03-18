/*
 * XREFs of PspGetBaseTrapFrame @ 0x1400D9BC4
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 *     PsGetBaseTrapFrame @ 0x14024DE88 (PsGetBaseTrapFrame.c)
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 *     PspInitializeThunkContext @ 0x14053F16C (PspInitializeThunkContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetBaseTrapFrame(__int64 a1)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  return i - 400;
}
