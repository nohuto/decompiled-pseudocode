/*
 * XREFs of CcPostDeferredWrites @ 0x140220050
 * Callers:
 *     CcLazyWriteScan @ 0x140042058 (CcLazyWriteScan.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400D0618 (CcNotifyOfMappedWriteComplete.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x14015B120 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x14021FEA0 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 *     CcExitPartition @ 0x140221098 (CcExitPartition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     CcCanIWriteStream @ 0x140133A34 (CcCanIWriteStream.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcPostDeferredWrites(__int64 a1)
{
  KSPIN_LOCK *v2; // rbp
  unsigned int v3; // r15d
  _QWORD **v4; // r14
  _QWORD *v5; // rdi
  KIRQL v6; // al
  _QWORD *v7; // rbx
  KIRQL v8; // r13
  unsigned int v9; // r8d
  unsigned int v10; // r12d
  bool CanIWriteStream; // al
  _QWORD **v12; // rcx
  _QWORD *v13; // rax
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  __int64 result; // rax
  struct _KEVENT *v17; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 768);
  v3 = 0;
  v4 = (_QWORD **)(a1 + 744);
  while ( 1 )
  {
    v5 = 0LL;
    v6 = KeAcquireSpinLockRaiseToDpc(v2);
    v7 = *v4;
    v8 = v6;
    if ( *v4 != v4 )
    {
      while ( 1 )
      {
        v5 = v7 - 3;
        if ( *(_BYTE *)(a1 + 902) > 1u )
          break;
        v9 = *((_DWORD *)v5 + 4);
        v10 = v9 + v3;
        CanIWriteStream = CcCanIWriteStream((KSPIN_LOCK *)a1, v5[1], v9, v3, 2);
        v12 = (_QWORD **)*v7;
        if ( CanIWriteStream )
        {
          if ( v12[1] != v7 || (v13 = (_QWORD *)v7[1], (_QWORD *)*v13 != v7) )
            __fastfail(3u);
          *v13 = v12;
          v3 = v10;
          v12[1] = v13;
          goto LABEL_13;
        }
        v5 = 0LL;
        v7 = (_QWORD *)*v7;
        if ( v12 == v4 )
          goto LABEL_13;
      }
      v14 = (_QWORD **)*v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v15 = (_QWORD *)v7[1], (_QWORD *)*v15 != v7) )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
    }
LABEL_13:
    KxReleaseSpinLock(v2);
    result = v8;
    __writecr8(v8);
    if ( !v5 )
      return result;
    v17 = (struct _KEVENT *)v5[5];
    if ( v17 )
    {
      KeSetEvent(v17, 0, 0);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD))v5[6])(v5[7], v5[8]);
      ExFreePoolWithTag(v5, 0x77446343u);
      CcDereferencePartition(a1);
    }
  }
}
