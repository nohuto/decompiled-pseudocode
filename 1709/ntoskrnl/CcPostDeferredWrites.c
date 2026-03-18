/*
 * XREFs of CcPostDeferredWrites @ 0x1401E0A50
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x14000DA50 (CcNotifyOfMappedWriteComplete.c)
 *     CcLazyWriteScan @ 0x140021D88 (CcLazyWriteScan.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x14014B1D0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x1401E08A0 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 *     CcExitPartition @ 0x1401E2488 (CcExitPartition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     CcCanIWriteStream @ 0x140064730 (CcCanIWriteStream.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcPostDeferredWrites(__int64 a1)
{
  _QWORD *v2; // r14
  unsigned int v3; // r15d
  KSPIN_LOCK *v4; // r12
  _QWORD *v5; // rdi
  KIRQL v6; // al
  _QWORD *v7; // rsi
  KIRQL v8; // r13
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 result; // rax
  struct _KEVENT *v16; // rcx

  v2 = (_QWORD *)(a1 + 744);
  v3 = 0;
  v4 = (KSPIN_LOCK *)(a1 + 768);
  while ( 2 )
  {
    v5 = 0LL;
    v6 = KeAcquireSpinLockRaiseToDpc(v4);
    v7 = (_QWORD *)*v2;
    v8 = v6;
    while ( v7 != v2 )
    {
      v5 = v7 - 3;
      if ( *(_BYTE *)(a1 + 901) )
      {
        v13 = *v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v14 = (_QWORD *)v5[4], (_QWORD *)*v14 != v7) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        break;
      }
      v9 = *((_DWORD *)v5 + 4);
      v10 = v9 + v3;
      if ( CcCanIWriteStream((KSPIN_LOCK *)a1, v5[1], v9, v3, 2) )
      {
        v3 = v10;
        v11 = *v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v12 = (_QWORD *)v5[4], (_QWORD *)*v12 != v7) )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        break;
      }
      v7 = (_QWORD *)*v7;
      v5 = 0LL;
    }
    KxReleaseSpinLock(v4);
    result = v8;
    __writecr8(v8);
    if ( v5 )
    {
      v16 = (struct _KEVENT *)v5[5];
      if ( v16 )
      {
        KeSetEvent(v16, 0, 0);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD))v5[6])(v5[7], v5[8]);
        ExFreePoolWithTag(v5, 0x77446343u);
        CcDereferencePartition(a1);
      }
      continue;
    }
    break;
  }
  return result;
}
