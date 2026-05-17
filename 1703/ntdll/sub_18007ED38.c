/*
 * XREFs of sub_18007ED38 @ 0x18007ED38
 * Callers:
 *     sub_18007E938 @ 0x18007E938 (sub_18007E938.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     sub_18007EC78 @ 0x18007EC78 (sub_18007EC78.c)
 *     sub_1800E0520 @ 0x1800E0520 (sub_1800E0520.c)
 *     sub_1800E07A8 @ 0x1800E07A8 (sub_1800E07A8.c)
 *     sub_1800E0A28 @ 0x1800E0A28 (sub_1800E0A28.c)
 * Callees:
 *     sub_18003FB50 @ 0x18003FB50 (sub_18003FB50.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall sub_18007ED38(
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
  int v12; // ebx
  int v16; // eax

  v12 = 0;
  if ( a7 && (v16 = sub_18003FB50(a7, 0LL, a9, a10, a11), *a2 = v16, v16 != -1072365567) )
  {
    LOBYTE(v12) = v16 < 0;
    *a1 = v12 + 1;
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
