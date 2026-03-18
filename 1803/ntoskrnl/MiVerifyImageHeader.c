/*
 * XREFs of MiVerifyImageHeader @ 0x14056E46C
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     memcmp @ 0x140189130 (memcmp.c)
 *     MiCheckDosCalls @ 0x14074BF78 (MiCheckDosCalls.c)
 */

__int64 __fastcall MiVerifyImageHeader(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int16 v8; // cx
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  __int16 v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  __int16 v17; // ax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  char v22; // al
  char v23; // cl
  int v24; // ecx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int16 v27; // ax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned __int64 v30; // rcx
  __int16 v31; // cx

  if ( (a2 & 3) != 0 )
    return 3221225776LL;
  if ( *(_DWORD *)a2 != 17744 )
  {
    if ( (unsigned __int16)*(_DWORD *)a2 == 17742 )
    {
      if ( !(unsigned int)MiCheckDosCalls(a2, a4) )
      {
        v22 = *(_BYTE *)(a2 + 54);
        if ( v22 == 2 || !v22 && (((*(_WORD *)(a2 + 62) & 0xFF00) - 512) & 0xFEFF) == 0 )
          return 3221225777LL;
      }
      v23 = *(_BYTE *)(a2 + 54);
      if ( v23 != 5 && *(_WORD *)(a2 + 4) != *(_WORD *)(a2 + 42) )
      {
        if ( v23 != 1 )
          goto LABEL_59;
        v24 = *(_DWORD *)(a3 + 512) - *(_DWORD *)"16STUB";
        if ( !v24 )
          v24 = *(unsigned __int16 *)(a3 + 516) - *(unsigned __int16 *)"UB";
        if ( v24 )
        {
LABEL_59:
          v25 = 16LL * *(unsigned __int16 *)(a3 + 8);
          if ( v25 > 0xFC6 )
            goto LABEL_88;
          v26 = *(_QWORD *)(v25 + a3 + 24) - *(_QWORD *)"Phar Lap Software, Inc.";
          if ( !v26 )
          {
            v26 = *(_QWORD *)(v25 + a3 + 32) - *(_QWORD *)" Software, Inc.";
            if ( !v26 )
              v26 = *(_QWORD *)(v25 + a3 + 40) - *(_QWORD *)"e, Inc.";
          }
          if ( v26 || (v27 = *(_WORD *)(v25 + a3 + 56), v27 != 19280) && v27 != 20304 && v27 != 22096 )
          {
LABEL_88:
            if ( v25 + 50 > 0x1000
              || v25 + *(unsigned __int16 *)(v25 + a3 + 48) > 0xFDC
              || memcmp(
                   (const void *)(*(unsigned __int16 *)(v25 + a3 + 48) + v25 + a3),
                   "Copyright (C) Rational Systems, Inc.",
                   0x24uLL) )
            {
              v28 = *(_DWORD *)(a2 + 44);
              v29 = *(_DWORD *)(a3 + 60);
              if ( v28 <= v29 )
                return 3221225755LL;
              v30 = (int)(v28 - v29);
              if ( v30 + 16 < v30 || v30 + 16 >= a4 || memcmp((const void *)(a2 + v30 + 1), "1-2-3 Preloader", 0xFuLL) )
                return 3221225755LL;
            }
          }
        }
      }
    }
    return 3221225776LL;
  }
  if ( !*(_WORD *)(a2 + 4) && !*(_WORD *)(a2 + 20) )
    return 3221225776LL;
  if ( (*(_BYTE *)(a2 + 22) & 2) != 0 )
  {
    v8 = *(_WORD *)(a2 + 24);
    *(_WORD *)(a1 + 48) = v8;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 80);
    if ( v8 == 523 )
    {
      v9 = *(_DWORD *)(a2 + 128);
      *(_DWORD *)(a1 + 20) = v9;
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 104);
      *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
      *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
      *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
      *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
      *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
      *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
      *(_BYTE *)(a1 + 104) = 0;
      v10 = *(_DWORD *)(a2 + 132);
      if ( v10 > 6 && *(_DWORD *)(a2 + 184) )
      {
        *(_BYTE *)(a1 + 104) = 1;
        v10 = *(_DWORD *)(a2 + 132);
      }
      if ( v10 > 0xC )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 232);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 236);
        v10 = *(_DWORD *)(a2 + 132);
      }
      if ( v10 <= 0xE )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 248);
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 252);
        if ( *(_DWORD *)(a2 + 248) && *(_DWORD *)(a2 + 252) )
          *(_DWORD *)(a1 + 20) = v9 | 1;
      }
      if ( *(_DWORD *)(a2 + 132) <= 5u )
      {
        *(_DWORD *)(a1 + 88) = 0;
        v11 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 176);
        v11 = *(_DWORD *)(a2 + 180);
      }
      *(_DWORD *)(a1 + 92) = v11;
      v12 = (_DWORD *)(a1 + 100);
      if ( *(_DWORD *)(a2 + 132) > 0xAu )
      {
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 216);
        v13 = *(_DWORD *)(a2 + 220);
        goto LABEL_17;
      }
    }
    else
    {
      v19 = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 20) = v19;
      *(_QWORD *)a1 = *(unsigned int *)(a2 + 52);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 32) = *(unsigned int *)(a2 + 96);
      *(_QWORD *)(a1 + 40) = *(unsigned int *)(a2 + 100);
      *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
      *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
      *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
      *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
      *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
      *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
      *(_BYTE *)(a1 + 104) = 0;
      v20 = *(_DWORD *)(a2 + 116);
      if ( v20 > 6 && *(_DWORD *)(a2 + 168) )
      {
        *(_BYTE *)(a1 + 104) = 1;
        v20 = *(_DWORD *)(a2 + 116);
      }
      if ( v20 > 0xC )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 216);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 220);
        v20 = *(_DWORD *)(a2 + 116);
      }
      if ( v20 <= 0xE )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 232);
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 236);
        if ( *(_DWORD *)(a2 + 232) && *(_DWORD *)(a2 + 236) )
          *(_DWORD *)(a1 + 20) = v19 | 1;
      }
      if ( *(_DWORD *)(a2 + 116) <= 5u )
      {
        *(_DWORD *)(a1 + 88) = 0;
        v21 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 160);
        v21 = *(_DWORD *)(a2 + 164);
      }
      *(_DWORD *)(a1 + 92) = v21;
      v12 = (_DWORD *)(a1 + 100);
      if ( *(_DWORD *)(a2 + 116) > 0xAu )
      {
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 200);
        v13 = *(_DWORD *)(a2 + 204);
        goto LABEL_17;
      }
    }
    v13 = 0;
    *(_DWORD *)(a1 + 96) = 0;
LABEL_17:
    *v12 = v13;
    v14 = *(_WORD *)(a1 + 48);
    if ( ((v14 - 267) & 0xFEFF) != 0 )
      return 3221225595LL;
    v15 = *(_DWORD *)(a1 + 8);
    if ( (v15 & 0x1FF) != 0 && v15 != *(_DWORD *)(a1 + 12) )
      return 3221225595LL;
    if ( !v15 )
      return 3221225595LL;
    v16 = *(_DWORD *)(a1 + 12);
    if ( ((v16 - 1) & v16) != 0 || ((v15 - 1) & v15) != 0 || v16 < v15 || *(_DWORD *)(a1 + 16) > 0x77000000u )
      return 3221225595LL;
    if ( v14 == 267 )
    {
      v17 = *(_WORD *)(a2 + 4);
      if ( v17 == 332 )
        return 0LL;
      v31 = 452;
    }
    else
    {
      if ( v14 != 523 )
        return 0LL;
      v17 = *(_WORD *)(a2 + 4);
      if ( v17 == -31132 )
        return 0LL;
      v31 = -21916;
    }
    if ( v17 != v31 )
      return 3221225595LL;
    return 0LL;
  }
  return 3221225595LL;
}
