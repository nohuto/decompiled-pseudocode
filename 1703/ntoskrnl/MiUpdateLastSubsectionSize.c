/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x140034330
 * Callers:
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiGetSubsectionCharges @ 0x14022129C (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _WORD *v3; // r15
  __int64 v5; // rsi
  int v7; // edi
  volatile LONG *v8; // rbp
  KIRQL v9; // r14
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  __int16 v13; // cx
  __int64 v14; // r10
  __int16 v15; // r9
  __int64 v16; // rax
  __int64 result; // rax

  v3 = *(_WORD **)a1;
  v5 = a3;
  v7 = 0;
  v8 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( !(_DWORD)v5 )
      break;
    v10 = MiControlAreaRequiresCharge(v3, 0LL);
    if ( !v10 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      __writecr8(v9);
      return 3221225556LL;
    }
    if ( v10 != v11 + 2 )
    {
      if ( v7 == 1 )
        v7 = v11 + 2;
LABEL_7:
      v12 = *(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) - v5)) & 0x3FFFFFFF;
      *(_DWORD *)(a1 + 44) += v5;
      *(_DWORD *)(a1 + 52) = v12;
      break;
    }
    if ( v7 )
      goto LABEL_7;
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    __writecr8(v9);
    result = MiGetSubsectionCharges(a1, v5);
    if ( (int)result < 0 )
      return result;
    v7 = 1;
  }
  v13 = *(_WORD *)(a1 + 34) & 0xF;
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - *(_DWORD *)(a1 + 36);
  *(_WORD *)(a1 + 34) = (16 * *(_WORD *)a2) | v13;
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  __writecr8(v9);
  if ( (_DWORD)v5 )
  {
    v14 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL) + (v5 << 12));
    v15 = *(_WORD *)(v14 + 12);
    v16 = *(unsigned int *)(v14 + 8);
    *(_DWORD *)(v14 + 8) = v5 + v16;
    *(_WORD *)(v14 + 12) = v15 ^ (v15 ^ ((v5 + (v16 | ((unsigned __int64)(v15 & 0x3FF) << 32))) >> 32)) & 0x3FF;
    if ( v7 == 2 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14036C8F8 + 8LL * (v3[30] & 0x3FF)), 1LL, v5);
  }
  return 0LL;
}
