/*
 * XREFs of PspGetBaseTrapFrame @ 0x140028F98
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 *     PsGetBaseTrapFrame @ 0x140238D74 (PsGetBaseTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1404F8B04 (PspInitializeThunkContext.c)
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
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
