/*
 * XREFs of MiVerifyImageHeader @ 0x1404FB054
 * Callers:
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     MiCheckDosCalls @ 0x1406E11B8 (MiCheckDosCalls.c)
 */

__int64 __fastcall MiVerifyImageHeader(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int16 v7; // ax
  int v8; // eax
  __int16 v9; // r9
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int16 v12; // ax
  char v14; // al
  char v15; // cl
  int v16; // ecx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned __int64 v22; // rcx
  __int16 v23; // cx

  if ( (a2 & 3) != 0 )
    return 3221225776LL;
  if ( *(_DWORD *)a2 != 17744 )
  {
    if ( *(_WORD *)a2 == 17742 )
    {
      if ( !(unsigned int)MiCheckDosCalls(a2, a4) )
      {
        v14 = *(_BYTE *)(a2 + 54);
        if ( v14 == 2 || !v14 && (((*(_WORD *)(a2 + 62) & 0xFF00) - 512) & 0xFEFF) == 0 )
          return 3221225777LL;
      }
      v15 = *(_BYTE *)(a2 + 54);
      if ( v15 != 5 && *(_WORD *)(a2 + 4) != *(_WORD *)(a2 + 42) )
      {
        if ( v15 != 1 )
          goto LABEL_59;
        v16 = *(_DWORD *)(a3 + 512) - *(_DWORD *)"16STUB";
        if ( !v16 )
          v16 = *(unsigned __int16 *)(a3 + 516) - *(unsigned __int16 *)"UB";
        if ( v16 )
        {
LABEL_59:
          v17 = 16LL * *(unsigned __int16 *)(a3 + 8);
          if ( v17 > 0xFC6 )
            goto LABEL_87;
          v18 = *(_QWORD *)(v17 + a3 + 24) - *(_QWORD *)"Phar Lap Software, Inc.";
          if ( !v18 )
          {
            v18 = *(_QWORD *)(v17 + a3 + 32) - *(_QWORD *)" Software, Inc.";
            if ( !v18 )
              v18 = *(_QWORD *)(v17 + a3 + 40) - *(_QWORD *)"e, Inc.";
          }
          if ( v18 || (v19 = *(_WORD *)(v17 + a3 + 56), v19 != 19280) && v19 != 20304 && v19 != 22096 )
          {
LABEL_87:
            if ( v17 + 50 > 0x1000
              || v17 + *(unsigned __int16 *)(v17 + a3 + 48) > 0xFDC
              || memcmp(
                   (const void *)(*(unsigned __int16 *)(v17 + a3 + 48) + v17 + a3),
                   "Copyright (C) Rational Systems, Inc.",
                   0x24uLL) )
            {
              v20 = *(_DWORD *)(a2 + 44);
              v21 = *(_DWORD *)(a3 + 60);
              if ( v20 <= v21 )
                return 3221225755LL;
              v22 = (int)(v20 - v21);
              if ( v22 + 16 < v22 || v22 + 16 >= a4 || memcmp((const void *)(a2 + v22 + 1), "1-2-3 Preloader", 0xFuLL) )
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
    v7 = *(_WORD *)(a2 + 24);
    if ( v7 == 523 )
    {
      *(_WORD *)(a1 + 48) = 523;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 128);
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
      if ( *(_DWORD *)(a2 + 132) > 6u )
        *(_BYTE *)(a1 + 104) = *(_DWORD *)(a2 + 184) != 0;
      if ( *(_DWORD *)(a2 + 132) > 0xCu )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 232);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 236);
      }
      if ( *(_DWORD *)(a2 + 132) <= 0xEu )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 248);
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 252);
        if ( *(_DWORD *)(a2 + 248) && *(_DWORD *)(a2 + 252) )
          *(_DWORD *)(a1 + 20) |= 1u;
      }
      if ( *(_DWORD *)(a2 + 132) <= 5u )
      {
        *(_QWORD *)(a1 + 88) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 176);
        *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 180);
      }
      if ( *(_DWORD *)(a2 + 132) > 0xAu )
      {
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 216);
        v8 = *(_DWORD *)(a2 + 220);
LABEL_16:
        *(_DWORD *)(a1 + 100) = v8;
        goto LABEL_17;
      }
    }
    else
    {
      *(_WORD *)(a1 + 48) = v7;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 112);
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
      if ( *(_DWORD *)(a2 + 116) > 6u )
        *(_BYTE *)(a1 + 104) = *(_DWORD *)(a2 + 168) != 0;
      if ( *(_DWORD *)(a2 + 116) > 0xCu )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 216);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 220);
      }
      if ( *(_DWORD *)(a2 + 116) <= 0xEu )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 232);
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 236);
        if ( *(_DWORD *)(a2 + 232) && *(_DWORD *)(a2 + 236) )
          *(_DWORD *)(a1 + 20) |= 1u;
      }
      if ( *(_DWORD *)(a2 + 116) <= 5u )
      {
        *(_QWORD *)(a1 + 88) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 160);
        *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 164);
      }
      if ( *(_DWORD *)(a2 + 116) > 0xAu )
      {
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 200);
        v8 = *(_DWORD *)(a2 + 204);
        goto LABEL_16;
      }
    }
    *(_QWORD *)(a1 + 96) = 0LL;
LABEL_17:
    v9 = *(_WORD *)(a1 + 48);
    if ( ((v9 - 267) & 0xFEFF) != 0 )
      return 3221225595LL;
    v10 = *(_DWORD *)(a1 + 8);
    if ( (v10 & 0x1FF) != 0 && v10 != *(_DWORD *)(a1 + 12) )
      return 3221225595LL;
    if ( !v10 )
      return 3221225595LL;
    v11 = *(_DWORD *)(a1 + 12);
    if ( ((v11 - 1) & v11) != 0 || ((v10 - 1) & v10) != 0 || v11 < v10 || *(_DWORD *)(a1 + 16) > 0x77000000u )
      return 3221225595LL;
    if ( v9 == 267 )
    {
      v12 = *(_WORD *)(a2 + 4);
      if ( v12 == 332 )
        return 0LL;
      v23 = 452;
    }
    else
    {
      if ( v9 != 523 )
        return 0LL;
      v12 = *(_WORD *)(a2 + 4);
      if ( v12 == -31132 )
        return 0LL;
      v23 = -21916;
    }
    if ( v12 != v23 )
      return 3221225595LL;
    return 0LL;
  }
  return 3221225595LL;
}
