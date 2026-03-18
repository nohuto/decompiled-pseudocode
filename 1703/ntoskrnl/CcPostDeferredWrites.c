/*
 * XREFs of CcPostDeferredWrites @ 0x1401DDA60
 * Callers:
 *     CcCanIWrite @ 0x14000D980 (CcCanIWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140015578 (CcNotifyOfMappedWriteComplete.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x140150AD0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x1401DD930 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401DDCA0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcCanIWriteStream @ 0x1400AE444 (CcCanIWriteStream.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcPostDeferredWrites(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v2; // r14
  KSPIN_LOCK *v3; // r15
  _QWORD *v4; // rdi
  KIRQL v5; // al
  _QWORD *v6; // rsi
  KIRQL v7; // r12
  unsigned int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 result; // rax
  struct _KEVENT *v13; // rcx

  v1 = 0;
  v2 = (_QWORD *)(a1 + 816);
  v3 = (KSPIN_LOCK *)(a1 + 832);
  while ( 2 )
  {
    v4 = 0LL;
    v5 = KeAcquireSpinLockRaiseToDpc(v3);
    v6 = (_QWORD *)*v2;
    v7 = v5;
    while ( v6 != v2 )
    {
      v4 = v6 - 3;
      v8 = *((_DWORD *)v6 - 2);
      v9 = v8 + v1;
      if ( CcCanIWriteStream(*(v6 - 2), v8, v1, 2) )
      {
        v1 = v9;
        v10 = *v6;
        v11 = (_QWORD *)v4[4];
        if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v11 != v6 )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        break;
      }
      v6 = (_QWORD *)*v6;
      v4 = 0LL;
    }
    KxReleaseSpinLock(v3);
    result = v7;
    __writecr8(v7);
    if ( v4 )
    {
      v13 = (struct _KEVENT *)v4[5];
      if ( v13 )
      {
        KeSetEvent(v13, 0, 0);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD))v4[6])(v4[7], v4[8]);
        ExFreePoolWithTag(v4, 0);
      }
      continue;
    }
    break;
  }
  return result;
}
