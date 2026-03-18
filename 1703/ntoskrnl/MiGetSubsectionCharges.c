/*
 * XREFs of MiGetSubsectionCharges @ 0x14022129C
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x140034330 (MiUpdateLastSubsectionSize.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x14021DFB0 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14021E85C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  char v4; // bp
  ULONG_PTR *v5; // rsi
  unsigned int v7; // ebx

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  if ( !(unsigned int)MiGetCrossPartitionCharges((__int64)v5, 0, v3 != 0, a2) )
    return 3221225773LL;
  if ( v3 && !(unsigned int)MiChargeCommit((unsigned __int64)v5, a2, 0LL) )
  {
    v7 = -1073741523;
LABEL_10:
    MiReturnCrossPartitionCharges((__int64)v5, 0, v4, a2);
    return v7;
  }
  if ( !(unsigned int)MiChargeResident(v5, a2, 0LL) )
  {
    if ( v3 )
      MiReturnCommit((__int64)v5, a2);
    v7 = -1073741801;
    goto LABEL_10;
  }
  return 0LL;
}
