/*
 * XREFs of MiInitializeSystemPtes @ 0x1408AC630
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x140049920 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MiBuildDynamicRegion @ 0x14017677C (MiBuildDynamicRegion.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14060B070 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializePteInfo @ 0x1408AC9D0 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // rbp
  char *AnyMultiplexedVm; // rbx
  char *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 *v5; // rax

  v0 = qword_1403CD0C0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_14044B16C & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_1403CB860 = v4;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_1403CC5E0,
                        9,
                        (int)v4 + 0x100000,
                        9,
                        v0,
                        0x100000000000LL,
                        1) )
    return 0LL;
  dword_1403CC5F8 |= 1u;
  qword_1403CC630 = qword_1403CC1E8;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_14044B16C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_1403CC1D8, v4 + 537919488, 0x200000000LL, 9) != 1 )
  {
    dword_14044B16C &= ~2u;
  }
  v5 = MiSystemVaToDynamicBitmap(9);
  if ( !(unsigned int)MiBuildDynamicRegion(v5, v0, 0x100000000000uLL) )
    return 0LL;
  MiObtainSystemVa(v3, 14);
  qword_1403CC2C8 = 0LL;
  return 1LL;
}
