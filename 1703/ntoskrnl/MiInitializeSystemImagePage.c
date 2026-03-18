/*
 * XREFs of MiInitializeSystemImagePage @ 0x140816130
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 */

unsigned __int64 __fastcall MiInitializeSystemImagePage(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v6; // r10

  *a2 = MiMakeDemandZeroPte(a3);
  if ( MiPteInShadowRange((unsigned __int64)a2) )
    MiWritePteShadow();
  MiInitializePfn(v6, (__int64)a2, a3, 0);
  return MiMakeValidPte((unsigned __int64)a2, a1, a3 | 0xA0000000);
}
