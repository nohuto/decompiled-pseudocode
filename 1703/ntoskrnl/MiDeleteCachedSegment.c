/*
 * XREFs of MiDeleteCachedSegment @ 0x140209CC8
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140161338 (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x1401490F8 (MiDestroySection.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiDeleteCachedSegment(__int64 a1)
{
  volatile LONG *v1; // r15
  unsigned int v3; // esi
  __int64 v4; // rdi
  volatile signed __int32 **v5; // r14
  KIRQL v6; // bp
  volatile signed __int32 *i; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 inserted; // rbx
  _QWORD *v14; // rbx
  struct _FILE_OBJECT *v15; // r8
  int v16; // eax
  _QWORD *v18; // [rsp+50h] [rbp+8h] BYREF
  struct _FILE_OBJECT *v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = 1;
  v4 = 1LL;
  v5 = (volatile signed __int32 **)(a1 + 1560);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  for ( i = *v5; i != (volatile signed __int32 *)v5; i = *(volatile signed __int32 **)i )
  {
    v4 = (__int64)(i - 2);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      break;
  }
  if ( i == (volatile signed __int32 *)v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    __writecr8(v6);
    return 0;
  }
  v8 = (_QWORD *)(v4 + 8);
  v9 = *(_QWORD *)(v4 + 8);
  v10 = *(_QWORD **)(v4 + 16);
  if ( *(_QWORD *)(v9 + 8) != v4 + 8 || (_QWORD *)*v10 != v8 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *(_DWORD *)(v4 + 56) &= ~0x8000000u;
  *(_QWORD *)(v4 + 16) = v4 + 8;
  *v8 = v8;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v12 = *(_DWORD *)(v4 + 56) & 0x20;
  if ( !v12 && *(_DWORD *)(v4 + 76) )
  {
    inserted = MiInsertUnusedSegment(v4, v11);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v6);
    MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    return 0;
  }
  v14 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !v12 )
  {
    LOBYTE(v11) = v6;
    v16 = MiFlushControlArea(v4, v11, &v18, &v19);
    v14 = v18;
    if ( v16 != 1 )
    {
      v3 = 0;
      goto LABEL_18;
    }
    v15 = v19;
  }
  MiDestroySection(v4, v6, v15);
LABEL_18:
  if ( v14 )
    MiReleaseControlAreaWaiters(v14);
  return v3;
}
