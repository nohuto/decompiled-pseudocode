/*
 * XREFs of MiGetSubsectionCharges @ 0x140268104
 * Callers:
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MiUpdateLastSubsectionSize @ 0x1400CD7A0 (MiUpdateLastSubsectionSize.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x14026F274 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14026FC54 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  BOOL v4; // ebp
  ULONG_PTR *v5; // rdi
  __int64 result; // rax
  __int64 v7; // r9
  unsigned int v8; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges(v5, 0LL, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((__int64)v5, a2, 0) )
    {
      v8 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges(v5, 0LL, v4, a2);
      return v8;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL, v7) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v5, a2);
      v8 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
