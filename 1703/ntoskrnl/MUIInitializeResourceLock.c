/*
 * XREFs of MUIInitializeResourceLock @ 0x1405692A8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140568580 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     NtFlushInstallUILanguage @ 0x1405D41F4 (NtFlushInstallUILanguage.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MUIInitializeResourceLock(volatile signed __int64 *a1)
{
  unsigned int v2; // ebx
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v5; // rdi

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6D756950u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        v2 = ExInitializeResourceLite(PoolWithTag);
        if ( (v2 & 0xC0000000) != 0xC0000000 )
        {
          if ( _InterlockedCompareExchange64(a1, (signed __int64)v5, 0LL) )
            ExDeleteResourceLite(v5);
          else
            v5 = 0LL;
          v2 = 0;
        }
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
