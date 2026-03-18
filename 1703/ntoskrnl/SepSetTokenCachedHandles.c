/*
 * XREFs of SepSetTokenCachedHandles @ 0x140461CB4
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140247A90 (SepSetTokenBnoIsolation.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCreateHashTable @ 0x14003CD10 (RtlCreateHashTable.c)
 *     SepReferenceCachedTokenHandles @ 0x14003DB0C (SepReferenceCachedTokenHandles.c)
 *     SepCloseCachedTokenHandles @ 0x14003DB94 (SepCloseCachedTokenHandles.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepGetCachedHandlesEntry @ 0x140461E70 (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 */

__int64 __fastcall SepSetTokenCachedHandles(_QWORD *a1, _DWORD *a2, unsigned int a3, HANDLE *a4)
{
  HANDLE *v4; // rsi
  char v6; // r12
  HANDLE *PoolWithTag; // rax
  int CachedHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rdi
  bool v14; // dl
  __int64 v15; // rcx
  char v16; // cl
  HANDLE *v17; // rax
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v6 = 0;
  v20 = 0;
  if ( !a3 )
    goto LABEL_5;
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x63486553u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  CachedHandlesEntry = SepReferenceCachedTokenHandles(a3, a4, (__int64)PoolWithTag);
  if ( CachedHandlesEntry >= 0 )
  {
    v6 = 1;
    CachedHandlesEntry = SepValidateReferencedCachedHandles(a1, a2, a3, v4);
    if ( CachedHandlesEntry >= 0 )
    {
LABEL_5:
      CurrentThread = KeGetCurrentThread();
      v13 = a1[27] + 88LL;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      if ( !*(_QWORD *)(v13 + 8) && !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v13 + 8), 0, 0) )
      {
        CachedHandlesEntry = -1073741670;
        goto LABEL_18;
      }
      CachedHandlesEntry = SepGetCachedHandlesEntry(v13, a2, &v20, v19);
      if ( CachedHandlesEntry )
      {
LABEL_18:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v13);
        KeAbPostRelease(v13);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_21;
      }
      v14 = 0;
      if ( *a2 )
      {
        if ( *a2 != 1 )
        {
LABEL_13:
          v16 = 0;
          if ( !v14 )
            v16 = v6;
          v17 = 0LL;
          v6 = v16;
          if ( !v14 )
            v17 = v4;
          v4 = v17;
          goto LABEL_18;
        }
        v14 = v20 == 0;
        v15 = v19[0];
        a1[144] = v19[0];
      }
      else
      {
        v15 = v19[0];
        if ( a3 )
          v14 = *(_DWORD *)(v19[0] + 56LL) == 0;
        a1[136] = v19[0];
      }
      if ( v14 )
      {
        *(_DWORD *)(v15 + 56) = a3;
        *(_QWORD *)(v15 + 64) = v4;
      }
      goto LABEL_13;
    }
  }
LABEL_21:
  if ( v4 )
  {
    if ( v6 )
      SepCloseCachedTokenHandles(a3, v4);
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)CachedHandlesEntry;
}
