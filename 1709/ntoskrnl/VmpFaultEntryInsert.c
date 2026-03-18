/*
 * XREFs of VmpFaultEntryInsert @ 0x140278B6C
 * Callers:
 *     VmpAccessFaultBatch @ 0x1402786D8 (VmpAccessFaultBatch.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  bool v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 result; // rax

  v3 = a2;
  v5 = a2 + 32LL * a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( v3 >= v5 )
    goto LABEL_16;
  do
  {
    v7 = 0;
    v8 = *(_QWORD *)(a1 + 48);
    if ( !v8 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( (*(_QWORD *)(v3 + 24) & 0xFFFFFFFFFFFFFuLL) < (*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFuLL) )
      {
        v9 = *(_QWORD *)v8;
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_8;
          v9 ^= v8;
        }
        if ( !v9 )
        {
LABEL_8:
          v7 = 0;
          goto LABEL_15;
        }
        goto LABEL_13;
      }
      v9 = *(_QWORD *)(v8 + 8);
      if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
      {
        if ( !v9 )
          break;
        v9 ^= v8;
      }
      if ( !v9 )
        break;
LABEL_13:
      v8 = v9;
    }
    v7 = 1;
LABEL_15:
    RtlRbInsertNodeEx(a1 + 48, v8, v7, v3);
    v3 += 32LL;
  }
  while ( v3 < v5 );
LABEL_16:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
