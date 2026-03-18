/*
 * XREFs of MiVerifyImageHeader @ 0x140494BDC
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 * Callees:
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     MiCheckDosCalls @ 0x1406B5068 (MiCheckDosCalls.c)
 */

__int64 __fastcall MiVerifyImageHeader(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int16 v7; // ax
  int v8; // eax
  __int16 v9; // r9
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int16 v12; // ax
  __int16 v14; // ax
  char v15; // al
  char v16; // cl
  int v17; // ecx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int16 v20; // ax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rcx

  if ( (a2 & 3) != 0 )
    return 3221225776LL;
  if ( *(_DWORD *)a2 != 17744 )
  {
    if ( *(_WORD *)a2 == 17742 )
    {
      if ( !(unsigned int)MiCheckDosCalls(a2, a4) )
      {
        v15 = *(_BYTE *)(a2 + 54);
        if ( v15 == 2 || !v15 && (((*(_WORD *)(a2 + 62) & 0xFF00) - 512) & 0xFEFF) == 0 )
          return 3221225777LL;
      }
      v16 = *(_BYTE *)(a2 + 54);
      if ( v16 != 5 && *(_WORD *)(a2 + 4) != *(_WORD *)(a2 + 42) )
      {
        if ( v16 != 1 )
          goto LABEL_59;
        v17 = *(_DWORD *)(a3 + 512) - *(_DWORD *)"16STUB";
        if ( !v17 )
          v17 = *(unsigned __int16 *)(a3 + 516) - *(unsigned __int16 *)"UB";
        if ( v17 )
        {
LABEL_59:
          v18 = 16LL * *(unsigned __int16 *)(a3 + 8);
          if ( v18 > 0xFC6 )
            goto LABEL_89;
          v19 = *(_QWORD *)(v18 + a3 + 24) - *(_QWORD *)"Phar Lap Software, Inc.";
          if ( !v19 )
          {
            v19 = *(_QWORD *)(v18 + a3 + 32) - *(_QWORD *)" Software, Inc.";
            if ( !v19 )
              v19 = *(_QWORD *)(v18 + a3 + 40) - *(_QWORD *)"e, Inc.";
          }
          if ( v19 || (v20 = *(_WORD *)(v18 + a3 + 56), v20 != 19280) && v20 != 20304 && v20 != 22096 )
          {
LABEL_89:
            if ( v18 + 50 > 0x1000
              || v18 + *(unsigned __int16 *)(v18 + a3 + 48) > 0xFDC
              || memcmp(
                   (const void *)(*(unsigned __int16 *)(v18 + a3 + 48) + v18 + a3),
                   "Copyright (C) Rational Systems, Inc.",
                   0x24uLL) )
            {
              v21 = *(_DWORD *)(a2 + 44);
              v22 = *(_DWORD *)(a3 + 60);
              if ( v21 <= v22 )
                return 3221225755LL;
              v23 = (int)(v21 - v22);
              if ( v23 + 16 < v23 || v23 + 16 >= a4 || memcmp((const void *)(a2 + v23 + 1), "1-2-3 Preloader", 0xFuLL) )
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
    if ( ((v9 - 267) & 0xFEFF) == 0 )
    {
      v10 = *(_DWORD *)(a1 + 8);
      if ( (v10 & 0x1FF) == 0 || v10 == *(_DWORD *)(a1 + 12) )
      {
        if ( v10 )
        {
          v11 = *(_DWORD *)(a1 + 12);
          if ( ((v11 - 1) & v11) == 0 && ((v10 - 1) & v10) == 0 && v11 >= v10 && *(_DWORD *)(a1 + 16) <= 0x77000000u )
          {
            if ( v9 != 267 || (v14 = *(_WORD *)(a2 + 4), v14 == 332) || v14 == 452 )
            {
              if ( v9 != 523 )
                return 0LL;
              v12 = *(_WORD *)(a2 + 4);
              if ( v12 == -31132 || v12 == -21916 )
                return 0LL;
            }
          }
        }
      }
    }
  }
  return 3221225595LL;
}
