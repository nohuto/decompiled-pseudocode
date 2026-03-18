/*
 * XREFs of MiDeleteCloneDescriptor @ 0x140131B84
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiDeleteInsertedCloneVads @ 0x1406EC594 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneDescriptor(struct _KPROCESS *a1, _QWORD *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // r8

  v4 = *(_QWORD *)(a2[7] + 24LL);
  RtlAvlRemoveNode(&a1[1].Affinity.Bitmap[12], (__int64)a2);
  v5 = a2[7];
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    v7 = a2[4] - a2[3] + 32LL;
    *(_QWORD *)(v6 + 24) = (unsigned int)(v7 >> 12) + ((v7 & 0xFFF) != 0);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 1760), (PSLIST_ENTRY)v6);
    KeSetEvent((PRKEVENT)(v4 + 1728), 0, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  PsReturnProcessNonPagedPoolQuota(a1, a2[8]);
  ExFreePoolWithTag(a2, 0);
}
