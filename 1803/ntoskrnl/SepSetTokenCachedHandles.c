/*
 * XREFs of SepSetTokenCachedHandles @ 0x14053F3B4
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x14006B930 (SepSetTokenBnoIsolation.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     SepCloseCachedTokenHandles @ 0x14009EFF4 (SepCloseCachedTokenHandles.c)
 *     SepReferenceCachedTokenHandles @ 0x14009F2A4 (SepReferenceCachedTokenHandles.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlCreateHashTable @ 0x140162310 (RtlCreateHashTable.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SepGetCachedHandlesEntry @ 0x14053F570 (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14053FA28 (SepValidateReferencedCachedHandles.c)
 */

__int64 __fastcall SepSetTokenCachedHandles(_QWORD *a1, _DWORD *a2, unsigned int a3, HANDLE *a4)
{
  HANDLE *v4; // rsi
  char v6; // r12
  HANDLE *PoolWithTag; // rax
  int CachedHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rdi
  _BOOL8 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  char v18; // cl
  HANDLE *v19; // rax
  char v20; // bl
  bool v22; // zf
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  char v24; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v6 = 0;
  v24 = 0;
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
        goto LABEL_27;
      }
      CachedHandlesEntry = SepGetCachedHandlesEntry(v13, a2, &v24, v23);
      if ( CachedHandlesEntry )
      {
LABEL_27:
        v22 = (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
        goto LABEL_31;
      }
      LOBYTE(v14) = 0;
      if ( *a2 )
      {
        if ( *a2 != 1 )
        {
LABEL_13:
          v18 = 0;
          if ( !v14 )
            v18 = v6;
          v19 = 0LL;
          v6 = v18;
          if ( !v14 )
            v19 = v4;
          v4 = v19;
          v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v20 & 2) == 0 )
            goto LABEL_18;
          v22 = (v20 & 4) == 0;
LABEL_31:
          if ( v22 )
            ExfTryToWakePushLock((volatile signed __int64 *)v13, v14, v15, v16);
LABEL_18:
          KeAbPostRelease(v13);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_19;
        }
        v15 = 1LL;
        v14 = v24 == 0;
        v17 = v23[0];
        a1[144] = v23[0];
      }
      else
      {
        v17 = v23[0];
        if ( a3 )
        {
          v15 = 1LL;
          v14 = *(_DWORD *)(v23[0] + 56LL) == 0;
        }
        a1[136] = v23[0];
      }
      if ( v14 )
      {
        *(_DWORD *)(v17 + 56) = a3;
        *(_QWORD *)(v17 + 64) = v4;
      }
      goto LABEL_13;
    }
  }
LABEL_19:
  if ( v4 )
  {
    if ( v6 )
      SepCloseCachedTokenHandles(a3, v4);
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)CachedHandlesEntry;
}
