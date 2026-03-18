/*
 * XREFs of MiInitializeSpecialPool @ 0x14057E514
 * Callers:
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiQuerySystemBase @ 0x14003CB8C (MiQuerySystemBase.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     InitializeListHeadPte @ 0x140225E2C (InitializeListHeadPte.c)
 *     MiInitializeDynamicRegion @ 0x140814A58 (MiInitializeDynamicRegion.c)
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
    v1 = qword_14036C170;
LABEL_3:
    PteAddress = MiGetPteAddress(v1);
    InitializeListHeadPte(v3 + 8, PteAddress);
    InitializeListHeadPte(v4 + 32, v5);
    *v6 = 0LL;
    return 1LL;
  }
  SystemBase = MiQuerySystemBase(9);
  if ( (unsigned int)MiInitializeDynamicRegion(7LL, SystemBase, 0x8000000000LL) )
  {
    v9 = MiQuerySystemBase(10);
    if ( (unsigned int)MiInitializeDynamicRegion(13LL, v9, 0x8000000000LL) )
    {
      dword_14036BDD4 = 0x4000;
      goto LABEL_3;
    }
  }
  return 0LL;
}
