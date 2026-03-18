/*
 * XREFs of MiInitializeSpecialPool @ 0x14060AB08
 * Callers:
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x1400D2D84 (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x14026D8CC (InitializeListHeadPte.c)
 *     MiInitializeDynamicRegion @ 0x1408AC9B4 (MiInitializeDynamicRegion.c)
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
    v1 = qword_1403CB638;
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
      dword_1403CB1D4 = 0x4000;
      goto LABEL_3;
    }
  }
  return 0LL;
}
