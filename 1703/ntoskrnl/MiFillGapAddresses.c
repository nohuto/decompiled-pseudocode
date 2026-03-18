/*
 * XREFs of MiFillGapAddresses @ 0x14015A700
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiFillPfnGaps @ 0x14081654C (MiFillPfnGaps.c)
 * Callees:
 *     MiFillGapPtes @ 0x14015A794 (MiFillGapPtes.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MiFillGapAddresses(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v4; // r8
  __int64 v5; // r10
  char v7; // [rsp+30h] [rbp-58h] BYREF
  char v8; // [rsp+38h] [rbp-50h] BYREF

  v4 = (unsigned __int64 *)&v8;
  v5 = 4LL;
  do
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v4 - 1) = a1;
    *v4 = a2;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return MiFillGapPtes(a1, a2, (unsigned int)&v7, a3, 3);
}
