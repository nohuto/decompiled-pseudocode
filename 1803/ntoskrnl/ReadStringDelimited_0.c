/*
 * XREFs of ReadStringDelimited_0 @ 0x14019153C
 * Callers:
 *     _winput_s @ 0x1401917BC (_winput_s.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ReadString_0 @ 0x140191304 (ReadString_0.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall ReadStringDelimited_0(
        char a1,
        unsigned __int16 **a2,
        wint_t *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *File,
        unsigned __int64 Src,
        _DWORD *a9)
{
  unsigned __int16 *v13; // rdx
  char v14; // r11
  unsigned __int16 *v15; // r8
  unsigned __int16 *v16; // r9
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // r9
  unsigned __int16 v20; // r8
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // ecx
  int v27[2048]; // [rsp+50h] [rbp-2048h] BYREF

  memset(v27, 0, sizeof(v27));
  v13 = *a2;
  v14 = a1 | 8;
  v15 = *a2 + 1;
  *a2 = v15;
  if ( *v15 != 94 )
  {
    v15 = v13;
    v14 = a1;
  }
  v16 = v15 + 1;
  v17 = v15[1];
  v18 = v17;
  if ( v17 == 93 )
  {
    v18 = v15[2];
    HIBYTE(v27[2]) = 32;
  }
  else
  {
    v16 = v15;
  }
  v19 = v16 + 1;
  v20 = 93;
  if ( v17 != 93 )
    v20 = 0;
  while ( v18 != 93 )
  {
    if ( v18 == 45 && v20 && (v21 = v19[1], v21 != 93) )
    {
      v22 = v19[1];
      if ( v20 >= v21 )
      {
        v22 = v20;
        v20 = v19[1];
      }
      while ( v20 <= v22 )
      {
        *((_BYTE *)v27 + ((unsigned __int64)v20 >> 3)) |= 1 << (v20 & 7);
        ++v20;
      }
      v20 = 0;
      v23 = 4LL;
    }
    else
    {
      v20 = v18;
      v24 = (unsigned __int64)v18 >> 3;
      v25 = *((char *)v27 + v24) | (1 << (v18 & 7));
      v23 = 2LL;
      *((_BYTE *)v27 + v24) = v25;
    }
    v19 = (unsigned __int16 *)((char *)v19 + v23);
    v18 = *v19;
  }
  *a2 = v19;
  return ReadString_0(v14, (__int64)v27, a3, a4, a5, a6, File, Src, a9);
}
