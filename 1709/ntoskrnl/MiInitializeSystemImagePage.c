/*
 * XREFs of MiInitializeSystemImagePage @ 0x140837D74
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

unsigned __int64 __fastcall MiInitializeSystemImagePage(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 DemandZeroPte; // rax
  __int64 *v7; // rdx
  __int64 v8; // r10

  DemandZeroPte = MiMakeDemandZeroPte(a3);
  *v7 = DemandZeroPte;
  if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  MiInitializePfn(v8, a2, a3, 0);
  return MiMakeValidPte((unsigned __int64)a2, a1, a3 | 0xA0000000);
}
