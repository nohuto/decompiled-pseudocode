/*
 * XREFs of MiReleaseSystemCacheView @ 0x1400A8EF8
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     RemoveListEntryPte @ 0x140030F60 (RemoveListEntryPte.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400ABE6C (InsertTailListPte.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWaitForSystemCacheViewFlush @ 0x140147314 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017CE5C (MiGetPteLink.c)
 *     MiDecrementSystemCacheViewCount @ 0x1402122E4 (MiDecrementSystemCacheViewCount.c)
 *     MiSetSystemCacheReverseMap @ 0x140212660 (MiSetSystemCacheReverseMap.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReleaseSystemCacheView(unsigned __int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // r13
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r12
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  void *SystemCacheReverseMap; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-D8h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v16; // [rsp+44h] [rbp-BCh]
  int v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+4Ch] [rbp-B4h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  _QWORD v21[8]; // [rsp+100h] [rbp+0h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = (__int64)(a1 << 25) >> 16;
  v5 = *(_QWORD *)(qword_14036C8F8 + 8LL * ((*(_DWORD *)(MiGetSystemCacheReverseMap(v4) + 32) >> 6) & 0x3FF));
  KeAcquireInStackQueuedSpinLock(&qword_14036C5F8, &LockHandle);
  if ( (unsigned __int8)MiDecrementSystemCacheViewCount(v4) )
  {
    InsertTailListPte(v5 + 1640, a1);
  }
  else
  {
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v6 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFF000uLL);
    v7 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v7 )
    {
      do
      {
        if ( v6 != (_QWORD *)a1 )
        {
          RemoveListEntryPte(v5 + 1640, v6);
          if ( MiGetPteLink(v6[3]) == 1 )
          {
            v21[v2] = v6;
            v2 = (unsigned int)(v2 + 1);
          }
          else
          {
            *v8 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v8) )
              MiWritePteShadow(v9);
          }
        }
        v6 += 64;
      }
      while ( (unsigned __int64)v6 < v7 );
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v3 )
  {
    if ( (_DWORD)v2 )
    {
      v11 = v21;
      do
      {
        MiWaitForSystemCacheViewFlush(*v11++);
        --v2;
      }
      while ( v2 );
    }
    v18 = 0;
    v15 = 0;
    v16 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v12 = v3 << 25;
    v17 = 20;
    MiInsertTbFlushEntry(&v15, v12 >> 16, 512LL, 0LL);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v12 >> 16);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
    MiSetSystemCacheReverseMap(v12 >> 16, 0LL);
    return MiReturnSystemVa(v12 >> 16, (v12 + 0x2000000000LL) >> 16, 8, (__int64)&v15);
  }
  return result;
}
