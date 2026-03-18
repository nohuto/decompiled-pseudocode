/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14021E85C
 * Callers:
 *     MiAllocateCombineProto @ 0x140078CA0 (MiAllocateCombineProto.c)
 *     MiFreeCombineBlock @ 0x140079210 (MiFreeCombineBlock.c)
 *     MiGetSubsectionCharges @ 0x14022129C (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     MiChargeSegmentCommit @ 0x14054A0F0 (MiChargeSegmentCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
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

  v4 = (volatile LONG *)(a1 + 1344);
  v6 = 32LL * a2;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  *(_QWORD *)(v6 + a1 + 1720) -= a4;
  v10 = v9;
  v11 = *(_QWORD *)(v6 + a1 + 1720);
  if ( (a3 & 1) != 0 )
    *(_QWORD *)(v6 + a1 + 1752) -= a4;
  if ( !v11 && (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    v12 = 0;
    v13 = (_QWORD *)(a1 + 1720);
    for ( i = 0LL; i < 4; ++i )
    {
      if ( *v13 )
        break;
      ++v12;
      v13 += 4;
    }
    if ( v12 == 4 )
    {
      v15 = *(struct _KEVENT **)(a1 + 1848);
      if ( v15 )
        KeSetEvent(v15, 1, 0);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = v10;
  __writecr8(v10);
  return result;
}
