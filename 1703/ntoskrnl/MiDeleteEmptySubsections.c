/*
 * XREFs of MiDeleteEmptySubsections @ 0x140029CD4
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReduceUnusedSubsectionCount @ 0x140097E14 (MiReduceUnusedSubsectionCount.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al
  _QWORD *v4; // r14
  _QWORD *v5; // rdx
  KIRQL v6; // si
  _QWORD *v7; // rdi
  __int64 v8; // r12
  void *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 result; // rax

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v4 = (_QWORD *)(a1 + 1592);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    v6 = v3;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = v5 - 10;
    v8 = *(v5 - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
    {
      if ( (*((_BYTE *)v7 + 34) & 8) != 0 )
      {
        v9 = (void *)v7[1];
        v10 = v7 + 10;
        v7[1] = 0LL;
        v11 = v7[10];
        v12 = (_QWORD *)v7[11];
        if ( *(_QWORD **)(v11 + 8) != v7 + 10 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *((_WORD *)v7 + 17) &= ~8u;
        v7[11] = v7 + 10;
        *v10 = v10;
        MiReduceUnusedSubsectionCount(v7);
      }
      else
      {
        v9 = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
      __writecr8(v6);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      __writecr8(v6);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  *(_QWORD *)(a1 + 1416) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  result = v6;
  __writecr8(v6);
  return result;
}
