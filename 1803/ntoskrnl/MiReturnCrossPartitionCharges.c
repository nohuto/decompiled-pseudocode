/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14026FC54
 * Callers:
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeLargePages @ 0x140268BB8 (MiFreeLargePages.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14026B568 (MiReturnCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14026BE44 (MiReturnCrossPartitionCombineCharges.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

LONG __fastcall MiReturnCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v4; // r15
  __int64 v6; // rbp
  struct _KEVENT *v9; // rsi
  KIRQL v10; // r12
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rdx
  __int64 i; // r8
  LONG result; // eax

  v4 = (volatile LONG *)(a1 + 1280);
  v6 = 32LL * a2;
  v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v11 = *(_QWORD *)(a1 + v6 + 1816) - a4;
  *(_QWORD *)(a1 + v6 + 1816) = v11;
  if ( (a3 & 1) != 0 )
    *(_QWORD *)(a1 + v6 + 1848) -= a4;
  if ( !v11 && (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    v12 = 0;
    v13 = (_QWORD *)(a1 + 1816);
    for ( i = 0LL; i < 7; ++i )
    {
      if ( *v13 )
        break;
      ++v12;
      v13 += 4;
    }
    if ( v12 == 7 )
      v9 = *(struct _KEVENT **)(a1 + 2040);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = v10;
  __writecr8(v10);
  if ( v9 )
    return KeSetEvent(v9, 1, 0);
  return result;
}
