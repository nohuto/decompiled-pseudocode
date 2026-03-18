/*
 * XREFs of MiInitializeSpecialPool @ 0x1405B6FA0
 * Callers:
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x140132540 (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x140234CA0 (InitializeListHeadPte.c)
 *     MiInitializeDynamicRegion @ 0x14082D78C (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSpecialPool(char a1)
{
  unsigned __int64 v1; // rbx
  __int64 PteAddress; // rax
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // r9
  __int64 SystemBase; // rax
  __int64 v9; // rax

  v1 = 0xFFFF800000000000uLL;
  if ( (a1 & 0x20) != 0 )
  {
    v1 = qword_1403884B0;
LABEL_3:
    PteAddress = MiGetPteAddress(v1);
    InitializeListHeadPte(v3 + 8, PteAddress);
    InitializeListHeadPte(v4 + 32, v5);
    *v6 = 0LL;
    return 1LL;
  }
  SystemBase = MiQuerySystemBase(10);
  if ( (unsigned int)MiInitializeDynamicRegion(7LL, SystemBase, 0x8000000000LL) )
  {
    v9 = MiQuerySystemBase(11);
    if ( (unsigned int)MiInitializeDynamicRegion(13LL, v9, 0x8000000000LL) )
    {
      dword_1403880D4 = 0x4000;
      goto LABEL_3;
    }
  }
  return 0LL;
}
