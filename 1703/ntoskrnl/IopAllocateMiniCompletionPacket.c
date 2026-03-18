/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x14055DE1C
 * Callers:
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1400E30E0 (IoSetIoCompletionEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400E3860 (NtReleaseWorkerFactoryWorker.c)
 *     IoAllocateMiniCompletionPacket @ 0x14055DDE0 (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
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
LABEL_7:
    result = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v8, 0x20706349u, LowPoolPriority);
    goto LABEL_8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[7].P;
  ++P->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( result )
    goto LABEL_3;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[7].L;
  ++L->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( result )
    goto LABEL_3;
  ++L->AllocateMisses;
  if ( !a2 )
  {
    v8 = 56LL;
    goto LABEL_7;
  }
  v3 = 3;
  result = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 0x38uLL, 0x20706349u);
LABEL_8:
  if ( result )
LABEL_3:
    result[16] = v3;
  return result;
}
