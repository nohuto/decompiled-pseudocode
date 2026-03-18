/*
 * XREFs of MiDeleteCloneDescriptor @ 0x1400ADA5C
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400AD8A4 (MiDecrementCloneBlockReference.c)
 *     MiDeleteInsertedCloneVads @ 0x1407560B0 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiDecrementCloneHeaderCount @ 0x1400ADB28 (MiDecrementCloneHeaderCount.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCloneDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a2 + 56);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    v6 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24) + 32LL;
    v7 = *(_QWORD *)(v2 + 16);
    *(_QWORD *)(v7 + 24) = (unsigned int)(v6 >> 12) + ((v6 & 0xFFF) != 0);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1760), (PSLIST_ENTRY)v7);
    KeSetEvent((PRKEVENT)(v5 + 1736), 0, 0);
    MiDecrementCloneHeaderCount(v5);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  PsReturnProcessNonPagedPoolQuota(a1, *(_QWORD *)(a2 + 64));
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1296) + 336LL), (PSLIST_ENTRY)(a2 + 80));
}
