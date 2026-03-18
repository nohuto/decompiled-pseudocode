/*
 * XREFs of MiMapNewPfns @ 0x1406E0048
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiCreateSystemWsles @ 0x14005C00C (MiCreateSystemWsles.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiInitializeDynamicPfns @ 0x14021464C (MiInitializeDynamicPfns.c)
 */

void __fastcall MiMapNewPfns(unsigned __int64 a1, __int64 a2, __int16 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // r10

  MiGetPteAddress(48 * a1 - 0x58000000000LL);
  MiGetPteAddress(48 * a2 + v8 - 1);
  if ( (unsigned int)MiCreateSystemWsles() )
    v10 = 169;
  MiMakeZeroedPageTables(v11, v9, v10, 4);
  MiInitializeDynamicPfns(a1, a2 - a1, a3, a4);
}
