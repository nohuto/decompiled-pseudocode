/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14023804C
 * Callers:
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140230230 (MiReturnCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140231B2C (MiReturnCrossPartitionCombineCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

__int64 __fastcall MiReturnCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v4; // r14
  __int64 v6; // rsi
  KIRQL v9; // al
  KIRQL v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 i; // r8
  struct _KEVENT *v15; // rcx
  __int64 result; // rax

  v4 = (volatile LONG *)(a1 + 1280);
  v6 = 32LL * a2;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  *(_QWORD *)(v6 + a1 + 1816) -= a4;
  v10 = v9;
  v11 = *(_QWORD *)(v6 + a1 + 1816);
  if ( (a3 & 1) != 0 )
    *(_QWORD *)(v6 + a1 + 1848) -= a4;
  if ( !v11 && (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    v12 = 0;
    v13 = (_QWORD *)(a1 + 1816);
    for ( i = 0LL; i < 5; ++i )
    {
      if ( *v13 )
        break;
      ++v12;
      v13 += 4;
    }
    if ( v12 == 5 )
    {
      v15 = *(struct _KEVENT **)(a1 + 1976);
      if ( v15 )
        KeSetEvent(v15, 1, 0);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = v10;
  __writecr8(v10);
  return result;
}
