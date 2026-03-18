/*
 * XREFs of MiBuildDynamicRegion @ 0x14017677C
 * Callers:
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 *     MiInitializeKernelStacks @ 0x1408AB5F0 (MiInitializeKernelStacks.c)
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1408AC630 (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 *     MiInitializeDynamicRegion @ 0x1408AC9B4 (MiInitializeDynamicRegion.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 */

ULONG_PTR __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  ULONG_PTR result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx

  if ( a1 == &qword_1403CBA08 )
    qword_1403CB808 = a3;
  a1[8] = 0LL;
  a1[4] = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v5;
  if ( a1 == &qword_1403CB858 )
    a1[3] = v5 & 0xFFF;
  a1[2] = v4;
  v6 = 1LL;
  if ( a1 == &qword_1403CB858 && (v11 = a1[1]) != 0 )
  {
    v9 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v7 = 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0));
    result = MiReservePtes((__int64)&qword_1403CC5E0, (unsigned int)(v7 >> 12) + ((v7 & 0xFFF) != 0));
    v9 = result;
    if ( !result )
      return result;
    v6 = 3LL;
  }
  MiInitializeDynamicBitmap(a1, v9 << 25 >> 16, v4, v6);
  *a1 = 0LL;
  v10 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v10;
  if ( a1 == &qword_1403CB858 )
    a1[3] = v10 & 0xFFF;
  return 1LL;
}
