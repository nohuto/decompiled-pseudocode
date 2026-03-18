/*
 * XREFs of MiBuildDynamicRegion @ 0x14015A518
 * Callers:
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x14081450C (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x14081469C (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x140814868 (MiInitializeDriverImages.c)
 *     MiInitializeDynamicRegion @ 0x140814A58 (MiInitializeDynamicRegion.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 */

ULONG_PTR __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  ULONG_PTR result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx

  if ( a1 == &qword_14036C480 )
    qword_14036C2C8 = a3;
  a1[8] = 0LL;
  a1[4] = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v5;
  if ( a1 == &qword_14036C2D0 )
    a1[3] = v5 & 0xFFF;
  a1[2] = v4;
  v7 = 1LL;
  if ( a1 == &qword_14036C2D0 && (v12 = a1[1]) != 0 )
  {
    v10 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v8 = 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0));
    result = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)(v8 >> 12) + ((v8 & 0xFFF) != 0), v6);
    v10 = result;
    if ( !result )
      return result;
    v7 = 3LL;
  }
  MiInitializeDynamicBitmap(a1, v10 << 25 >> 16, v4, v7);
  *a1 = 0LL;
  v11 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v11;
  if ( a1 == &qword_14036C2D0 )
    a1[3] = v11 & 0xFFF;
  return 1LL;
}
