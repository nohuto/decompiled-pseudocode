/*
 * XREFs of MiProcessDeleteOnClose @ 0x14024F838
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiUnlinkUnusedControlArea @ 0x1400E4144 (MiUnlinkUnusedControlArea.c)
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDestroySection @ 0x14015E144 (MiDestroySection.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiProcessDeleteOnClose(__int64 a1)
{
  int v1; // r15d
  volatile LONG *v2; // rbp
  unsigned int v3; // r13d
  _QWORD *v4; // r14
  KIRQL v6; // si
  _QWORD *v7; // rax
  __int64 v8; // rdi
  volatile LONG *v9; // r12
  __int64 inserted; // rdi
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (volatile LONG *)(a1 + 1280);
  v3 = -1;
  v4 = (_QWORD *)(a1 + 1536);
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(v2);
    v7 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (++v1 & 0x3F) == 0 && *(_DWORD *)(a1 + 1284) >= v3 )
    {
      if ( v7 != v4 )
      {
        *(_BYTE *)(a1 + 1616) = 1;
        KiSetTimerEx(a1 + 1552, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
        goto LABEL_19;
      }
      break;
    }
    v3 = *(_DWORD *)(a1 + 1284);
    v8 = (__int64)(v7 - 1);
    v9 = (volatile LONG *)(v7 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9) )
    {
      MiUnlinkUnusedControlArea(v8);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
      {
        MiDestroySection(v8, v6, 0LL);
      }
      else if ( *(_DWORD *)(v8 + 76) )
      {
        inserted = MiInsertUnusedSegment(v8);
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
        __writecr8(v6);
        if ( inserted )
          MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      }
      else
      {
        v12 = 0LL;
        if ( (unsigned int)MiFlushControlArea((char *)v8, v6, &v13, &v12) == 1 )
          MiDestroySection(v8, v6, v12);
        if ( v13 )
          MiReleaseControlAreaWaiters(v13);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      __writecr8(v6);
    }
  }
  *(_BYTE *)(a1 + 1616) = 0;
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = v6;
  __writecr8(v6);
  return result;
}
