/*
 * XREFs of RtlpHpLargeAllocSize @ 0x14029E67C
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x140295F94 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x14029E588 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x14029ED38 (RtlpHpLargeLockAcquireShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  char v6; // bp
  unsigned __int8 v8; // r14
  unsigned __int64 Metadata; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdi
  int v12; // eax
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF

  v6 = a3;
  v8 = RtlpHpLargeLockAcquireShared(a1, a3);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
  v10 = Metadata;
  if ( Metadata )
  {
    if ( a4 )
    {
      v12 = *(_DWORD *)(Metadata + 32) & 1;
      if ( v12 )
        _InterlockedOr(v14, 0);
      *a4 = v12;
    }
    v11 = (*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)*(_DWORD *)(v10 + 24);
  }
  else
  {
    v11 = -1LL;
  }
  if ( (v6 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      __writecr8(v8);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      KeLeaveCriticalRegion();
    }
  }
  return v11;
}
