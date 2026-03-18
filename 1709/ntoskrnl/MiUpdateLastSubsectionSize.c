/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x1401109B8
 * Callers:
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 * Callees:
 *     MiGetSubsectionCrossPartitionReferences @ 0x1400148A8 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400148C4 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140110B40 (ExReleaseSpinLockExclusive.c)
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _WORD *v3; // r14
  __int64 v5; // rsi
  int v7; // edi
  volatile LONG *v8; // rbp
  KIRQL v9; // r8
  __int64 result; // rax
  int v11; // ecx
  __int16 v12; // dx
  __int64 v13; // r10
  __int16 v14; // r9
  __int64 v15; // rax

  v3 = *(_WORD **)a1;
  v5 = a3;
  v7 = 0;
  v8 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  v9 = ExAcquireSpinLockExclusive(v8);
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      MiGetSubsectionHoldingCrossPartitionReferences(a1);
      if ( !(unsigned int)MiGetSubsectionCrossPartitionReferences() )
        break;
      if ( v7 )
        goto LABEL_8;
      ExReleaseSpinLockExclusive(v8, v9);
      result = MiGetSubsectionCharges(a1, v5);
      if ( (int)result < 0 )
        return result;
      v7 = 1;
      ExAcquireSpinLockExclusive(v8);
    }
    if ( v7 == 1 )
      v7 = 2;
LABEL_8:
    v11 = *(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) - v5)) & 0x3FFFFFFF;
    *(_DWORD *)(a1 + 44) += v5;
    *(_DWORD *)(a1 + 52) = v11;
  }
  v12 = *(_WORD *)(a1 + 34) & 0xF;
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - *(_DWORD *)(a1 + 36);
  *(_WORD *)(a1 + 34) = (16 * *(_WORD *)a2) | v12;
  ExReleaseSpinLockExclusive(v8, v9);
  if ( (_DWORD)v5 )
  {
    v13 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL) + (v5 << 12));
    v14 = *(_WORD *)(v13 + 12);
    v15 = *(unsigned int *)(v13 + 8);
    *(_DWORD *)(v13 + 8) = v5 + v15;
    *(_WORD *)(v13 + 12) = v14 ^ (v14 ^ ((v5 + (v15 | ((unsigned __int64)(v14 & 0x3FF) << 32))) >> 32)) & 0x3FF;
    if ( v7 == 2 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140388AF0 + 8LL * (v3[30] & 0x3FF)), 1LL, v5);
  }
  return 0LL;
}
