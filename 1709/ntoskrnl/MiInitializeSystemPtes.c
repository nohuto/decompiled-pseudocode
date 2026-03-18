/*
 * XREFs of MiInitializeSystemPtes @ 0x14082F554
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F739C (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405B471C (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiInitializePteInfo @ 0x14082D63C (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  char *AnyMultiplexedVm; // rbx
  __int64 *v4; // rax
  __int64 v5; // r8

  v0 = qword_140389B00;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v1 = (((dword_14040010C & 2 | 1uLL) << 29) + 3145727) >> 21;
  v2 = v0 + ((0x800000 - ((unsigned int)v1 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140388660 = v2;
  if ( !(unsigned int)MiInitializePteInfo((__int64)&qword_140389360, 9, v2 + 0x100000, 17, v0, 0x100000000000uLL, 1u) )
    return 0LL;
  dword_140389378 |= 1u;
  qword_1403893B8 = qword_140388F28;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  AnyMultiplexedVm[192] = AnyMultiplexedVm[192] & 0xF8 | 4;
  if ( (dword_14040010C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_140388F18, v2 + 537919488, 0x200000000LL, 17) != 1 )
  {
    dword_14040010C &= ~2u;
  }
  v4 = MiSystemVaToDynamicBitmap(9);
  if ( !(unsigned int)MiBuildDynamicRegion(v4, v0, 0x100000000000uLL) )
    return 0LL;
  MiObtainSystemVa(v1, 14LL, v5);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, 0x8000000LL) )
    return 0LL;
  qword_140389018 = 0LL;
  return 1LL;
}
