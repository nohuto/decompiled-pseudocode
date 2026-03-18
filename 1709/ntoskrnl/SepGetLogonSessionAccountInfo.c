/*
 * XREFs of SepGetLogonSessionAccountInfo @ 0x1405D0F44
 * Callers:
 *     AdtpBuildLogonIdStrings @ 0x1405D0E98 (AdtpBuildLogonIdStrings.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepGetLogonSessionAccountInfo(_DWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // r10d
  int v10; // edi
  __int64 v11; // rbx
  struct _ERESOURCE *v12; // r13
  __int64 *v13; // rbx
  PVOID v14; // rsi
  __int64 v15; // r14
  PVOID v17; // rax
  PVOID PoolWithTag; // rax
  void *v19; // rcx
  void *v20; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = *a1 & 0xF;
  v10 = 0;
  --CurrentThread->KernelApcDisable;
  v11 = v5;
  v12 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceSharedLite(v12, 1u);
  v13 = *(__int64 **)(SepLogonSessions + 8 * v11);
  if ( v13 )
  {
    while ( *a1 != *((_DWORD *)v13 + 2) || a1[1] != *((_DWORD *)v13 + 3) )
    {
      v13 = (__int64 *)*v13;
      if ( !v13 )
        goto LABEL_13;
    }
    v14 = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)(v13 + 7);
    *(_OWORD *)a3 = *(_OWORD *)(v13 + 9);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    if ( !v13[8]
      || (v17 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v13 + 29), 0x6B416553u),
          (*(_QWORD *)(a2 + 8) = v17) != 0LL) )
    {
      if ( v13[10] )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v13 + 37), 0x6B416553u);
        *(_QWORD *)(a3 + 8) = PoolWithTag;
        if ( !PoolWithTag )
          v10 = -1073741670;
      }
    }
    else
    {
      v10 = -1073741670;
    }
    v15 = v13[6];
    if ( v10 < 0 )
      goto LABEL_23;
    if ( a4 )
    {
      if ( v15 )
      {
        v14 = ExAllocatePoolWithTag(
                PagedPool,
                4 * (unsigned int)*(unsigned __int8 *)(**(_QWORD **)(v15 + 152) + 1LL) + 8,
                0x69536553u);
        if ( !v14 )
          v10 = -1073741670;
      }
    }
    if ( v10 < 0 )
    {
LABEL_23:
      v19 = *(void **)(a2 + 8);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      v20 = *(void **)(a3 + 8);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
    else
    {
      memmove(*(void **)(a2 + 8), (const void *)v13[8], *((unsigned __int16 *)v13 + 29));
      memmove(*(void **)(a3 + 8), (const void *)v13[10], *((unsigned __int16 *)v13 + 37));
      if ( v14 )
      {
        memmove(
          v14,
          **(const void ***)(v15 + 152),
          4 * (unsigned int)*(unsigned __int8 *)(**(_QWORD **)(v15 + 152) + 1LL) + 8);
        *a4 = v14;
      }
    }
  }
  else
  {
LABEL_13:
    v10 = -1073741729;
  }
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
