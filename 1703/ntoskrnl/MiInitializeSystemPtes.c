/*
 * XREFs of MiInitializeSystemPtes @ 0x14081469C
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     MiBuildDynamicRegion @ 0x14015A518 (MiBuildDynamicRegion.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14057EA30 (MiInitializeSystemWorkingSetList.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // r14
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  char *AnyMultiplexedVm; // rax
  __int64 v6; // rbp

  v0 = qword_14036D830;
  v1 = (((unsigned __int64)qword_14036D830 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 1LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  if ( (dword_1403E310C & 2) != 0 )
    v2 = 3LL;
  v3 = (unsigned __int64)((v2 << 29) + 3145727) >> 21;
  v4 = v0 + ((0x800000 - ((unsigned int)v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_14036D0F8 = qword_14036CD28;
  qword_14036C2D8 = v4;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  qword_14036D0B0 = v1;
  dword_14036D0B8 = 3;
  v6 = (__int64)AnyMultiplexedVm;
  dword_14036D0BC = 9;
  qword_14036D0D8 = (__int64)AnyMultiplexedVm;
  qword_14036D0C0 = (__int64)&dword_14036D0C8;
  qword_14036D0F0 = 0LL;
  qword_14036D100 = 0LL;
  qword_14036D0E0 = 0LL;
  qword_14036D0D0 = 0LL;
  AnyMultiplexedVm[192] = AnyMultiplexedVm[192] & 0xF8 | 4;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_14036D0A0, v4 + 0x100000, 0x100000000LL, 17) )
    return 0LL;
  qword_14036D0A0 = 0LL;
  if ( (dword_1403E310C & 2) != 0 )
  {
    if ( (unsigned int)MiInitializeDynamicBitmap(&qword_14036CD18, v4 + 537919488, 0x200000000LL, 17) == 1 )
      qword_14036D0A0 = 0LL;
    else
      dword_1403E310C &= ~2u;
  }
  if ( !(unsigned int)MiBuildDynamicRegion(&qword_14036C2D0, v0, 0x100000000000uLL) )
    return 0LL;
  MiObtainSystemVa(v3, 0xFu);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, v6, 4, 0x8000000LL) )
    return 0LL;
  qword_14036CDA8 = 0LL;
  return 1LL;
}
