/*
 * XREFs of MiInitializeSystemCache @ 0x1405B3A64
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x140132540 (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x140234CA0 (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405B471C (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x14082D78C (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSystemCache(ULONG_PTR *a1)
{
  __int64 PteAddress; // rax
  __int64 v3; // rbx
  __int64 SystemBase; // rax

  PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
  InitializeListHeadPte((unsigned __int64)(a1 + 213), PteAddress);
  v3 = 0LL;
  if ( a1 != &MiSystemPartition )
    return MiInitializeSystemWorkingSetList(a1, a1 + 760, 2LL, v3);
  qword_140388980 = 0LL;
  byte_140389500 = byte_140389500 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v3 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, a1 + 760, 2LL, v3);
  }
  return 0LL;
}
