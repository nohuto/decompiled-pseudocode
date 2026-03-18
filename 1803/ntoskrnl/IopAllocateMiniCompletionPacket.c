/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x14052EBDC
 * Callers:
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     IoAllocateMiniCompletionPacket @ 0x14052E9C0 (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 */

_BYTE *__fastcall IopAllocateMiniCompletionPacket(char a1, char a2)
{
  char v3; // bl
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  _BYTE *result; // rax
  _GENERAL_LOOKASIDE *L; // rdi
  SIZE_T v8; // rdx

  v3 = a1;
  if ( a1 == 4 )
  {
    v8 = 80LL;
LABEL_6:
    result = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v8, 0x20706349u, LowPoolPriority);
    goto LABEL_7;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[7].P;
  ++P->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( result )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[7].L;
  ++L->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( result )
    goto LABEL_4;
  ++L->AllocateMisses;
  if ( !a2 )
  {
    v8 = 56LL;
    goto LABEL_6;
  }
  v3 = 3;
  result = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 0x38uLL, 0x20706349u);
LABEL_7:
  if ( result )
LABEL_4:
    result[16] = v3;
  return result;
}
