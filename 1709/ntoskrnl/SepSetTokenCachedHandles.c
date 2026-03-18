/*
 * XREFs of SepSetTokenCachedHandles @ 0x140563B44
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140101B68 (SepSetTokenBnoIsolation.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     SepReferenceCachedTokenHandles @ 0x140101ED4 (SepReferenceCachedTokenHandles.c)
 *     SepCloseCachedTokenHandles @ 0x140101F64 (SepCloseCachedTokenHandles.c)
 *     RtlCreateHashTable @ 0x140101FE0 (RtlCreateHashTable.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepGetCachedHandlesEntry @ 0x140563D30 (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1405641B4 (SepValidateReferencedCachedHandles.c)
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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
