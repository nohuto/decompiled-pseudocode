/*
 * XREFs of sub_180079324 @ 0x180079324
 * Callers:
 *     sub_180078F24 @ 0x180078F24 (sub_180078F24.c)
 *     sub_180079010 @ 0x180079010 (sub_180079010.c)
 *     sub_180079264 @ 0x180079264 (sub_180079264.c)
 *     sub_1800D9DA0 @ 0x1800D9DA0 (sub_1800D9DA0.c)
 *     sub_1800DA028 @ 0x1800DA028 (sub_1800DA028.c)
 *     sub_1800DA2A8 @ 0x1800DA2A8 (sub_1800DA2A8.c)
 * Callees:
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall sub_180079324(
        _DWORD *a1,
        int *a2,
        void *a3,
        size_t a4,
        size_t *a5,
        size_t Size,
        _DWORD *a7,
        __int64 a8,
        unsigned int a9,
        _QWORD *a10,
        _DWORD *a11)
{
  int v15; // eax

  if ( a7 && (v15 = sub_18003F160(a7, 0LL, a9, a10, a11), *a2 = v15, v15 != -1072365567) )
  {
    *a1 = ((v15 >> 31) & 1) + 1;
  }
  else
  {
    *a1 = 2;
    if ( Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      memset(a3, 0, Size);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
}
