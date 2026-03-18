/*
 * XREFs of CcDeleteBcbs @ 0x140136248
 * Callers:
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     CcDeallocateBcb @ 0x14011B160 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14011BDF4 (CcDeductDirtyPages.c)
 *     CcAdjustVacbLevelLockCount @ 0x14011BF6C (CcAdjustVacbLevelLockCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  struct _KEVENT *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 != (_QWORD *)(a1 + 16) )
  {
    do
    {
      v4 = v3 - 2;
      v5 = v3;
      v3 = (_QWORD *)*v3;
      if ( *(_WORD *)v4 == 765 )
      {
        if ( *((_DWORD *)v4 + 16) )
          KeBugCheckEx(0x34u, 0xD50uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v6 = (_QWORD *)v5[1];
        if ( (_QWORD *)v3[1] != v5 || (_QWORD *)*v6 != v5 )
          __fastfail(3u);
        *v6 = v3;
        v3[1] = v6;
        if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
          CcAdjustVacbLevelLockCount(a1, v4[1], -1);
        if ( v4[23] )
        {
          v7 = *(_QWORD *)(v4[7] + 8LL);
          if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v4[7] + 16LL)) )
          {
            v8 = *(struct _KEVENT **)(v7 + 184);
            if ( v8 )
              KeSetEvent(v8, 0, 0);
          }
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 528) + 64LL), &LockHandle);
        if ( *((_BYTE *)v4 + 2) )
          CcDeductDirtyPages(a1, *((_DWORD *)v4 + 1) >> 12);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        CcDeallocateBcb((char *)v4);
      }
    }
    while ( v3 != v1 );
  }
}
