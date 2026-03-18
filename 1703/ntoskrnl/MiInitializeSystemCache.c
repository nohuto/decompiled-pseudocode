/*
 * XREFs of MiInitializeSystemCache @ 0x1405BA9B8
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiQuerySystemBase @ 0x14003CB8C (MiQuerySystemBase.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     InitializeListHeadPte @ 0x140225E2C (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x14057EA30 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140814A58 (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSystemCache(ULONG_PTR *a1)
{
  __int64 PteAddress; // rax
  __int64 v3; // rbx
  __int64 SystemBase; // rax

  PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
  InitializeListHeadPte((unsigned __int64)(a1 + 205), PteAddress);
  v3 = 0LL;
  if ( a1 != &MiSystemPartition )
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 736), 2, v3);
  qword_14036C5F8 = 0LL;
  byte_14036D240 = byte_14036D240 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v3 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 736), 2, v3);
  }
  return 0LL;
}
