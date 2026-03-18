/*
 * XREFs of PnpBusTypeGuidGetIndex @ 0x1405E52F4
 * Callers:
 *     PnpQueryBusInformation @ 0x1405E521C (PnpQueryBusInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpBusTypeGuidGetIndex(__int128 *Source1)
{
  unsigned int v2; // ebx
  char *v3; // rdx
  __int128 v5; // xmm0
  __int64 v6; // r8
  PVOID PoolWithTag; // rax
  void *v8; // rsi
  PVOID v9; // rdi

  ExAcquireFastMutex(&PnpBusTypeGuidLock);
  v2 = 0;
  if ( !PnpBusTypeGuidCount )
    goto LABEL_7;
  do
  {
    v3 = (char *)PnpBusTypeGuidArray + 16 * v2;
    if ( Source1 == (__int128 *)v3 )
      break;
    if ( RtlCompareMemory(Source1, v3, 0x10uLL) == 16 )
      break;
    ++v2;
  }
  while ( v2 < PnpBusTypeGuidCount );
  if ( v2 == PnpBusTypeGuidCount )
  {
LABEL_7:
    if ( v2 == PnpBusTypeGuidCountMax )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (v2 + 1), 0x75737050u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        v9 = PnpBusTypeGuidArray;
        memmove(PoolWithTag, PnpBusTypeGuidArray, 16LL * (unsigned int)PnpBusTypeGuidCount);
        ++PnpBusTypeGuidCountMax;
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        PnpBusTypeGuidArray = v8;
      }
      else
      {
        v2 = -1;
      }
    }
    if ( v2 != -1 )
    {
      v5 = *Source1;
      v6 = 2LL * (unsigned int)PnpBusTypeGuidCount++;
      *(_OWORD *)((char *)PnpBusTypeGuidArray + 8 * v6) = v5;
    }
  }
  KeReleaseGuardedMutex(&PnpBusTypeGuidLock);
  return (unsigned __int16)v2;
}
