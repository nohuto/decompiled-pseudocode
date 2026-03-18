/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x14055C888
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1405D2774 (ExpGetSystemPlatformBinary.c)
 *     ExGetSystemFirmwareTable @ 0x1405D3420 (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x140714B90 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(unsigned int *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  unsigned int *v8; // rbx
  unsigned int *v9; // rsi
  unsigned int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 (__fastcall *v12)(unsigned int *); // r14
  __int64 v13; // rax
  __int64 *v14; // rcx
  unsigned int v15; // eax
  unsigned int *PoolWithQuotaTag; // rax

  v7 = 0;
  v8 = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
    goto LABEL_14;
  }
  v9 = Src;
  v10 = a3 - 16;
  if ( a2 )
  {
    PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x54465241u);
    v8 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      v7 = -1073741670;
      goto LABEL_14;
    }
    memmove(PoolWithQuotaTag, Src, a3);
    v9 = v8;
  }
  v9[3] = v10;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
  v12 = 0LL;
  v13 = ExpFirmwareTableProviderListHead - 24;
  v14 = (__int64 *)ExpFirmwareTableProviderListHead;
  if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
  {
    while ( *(_DWORD *)v13 != *v9 )
    {
      v13 = *v14 - 24;
      v14 = (__int64 *)*v14;
      if ( &ExpFirmwareTableProviderListHead == v14 )
        goto LABEL_8;
    }
    v12 = *(__int64 (__fastcall **)(unsigned int *))(v13 + 8);
  }
LABEL_8:
  if ( v12 )
    v7 = v12(v9);
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v12 )
  {
    if ( a2 )
    {
      if ( v7 >= 0 )
        memmove(Src + 4, v8 + 4, v8[3]);
      if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
        Src[3] = v8[3];
      v15 = v8[3];
    }
    else
    {
      v15 = v9[3];
    }
    *a4 = v15 + 16;
  }
  else
  {
    v7 = -1073741822;
  }
LABEL_14:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
