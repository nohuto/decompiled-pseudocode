/*
 * XREFs of ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02B7920
 * Callers:
 *     <none>
 * Callees:
 *     ?BltLnkReadPat1@@YAXPEAEK0KKKK@Z @ 0x1C02B7460 (-BltLnkReadPat1@@YAXPEAEK0KKKK@Z.c)
 */

void __fastcall BltLnkSrcCopyMsk1(
        struct BLTINFO *a1,
        struct _BLTLNK_MASKINFO *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v6; // rcx
  unsigned __int8 *v7; // r11
  unsigned __int8 *v8; // r10
  __int64 v9; // rdx
  int v10; // r15d
  unsigned __int8 *v11; // rbp
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // eax
  unsigned __int8 *v15; // r14
  char v16; // cl
  unsigned __int8 *v17; // rdi
  int v18; // r12d
  unsigned int v19; // edx
  char v20; // r9
  signed __int64 v21; // rdx
  signed __int64 v22; // r14
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // al
  char v25; // r9
  signed __int64 v26; // r8
  unsigned __int8 v27; // dl
  int v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp+8h]
  unsigned int v32; // [rsp+B8h] [rbp+10h]

  v6 = *((_QWORD *)a1 + 1);
  v7 = a4;
  v8 = a3;
  v30 = v6;
  v9 = *((_QWORD *)a1 + 2);
  v10 = *((_DWORD *)a2 + 5);
  v11 = *(unsigned __int8 **)a2;
  v12 = *((_DWORD *)a1 + 8);
  v29 = v9;
  while ( v12 )
  {
    v13 = *((_DWORD *)a1 + 7);
    v28 = v12 - 1;
    v14 = *((_DWORD *)a1 + 12) & 7;
    v15 = (unsigned __int8 *)(v6 + ((__int64)*((int *)a1 + 12) >> 3));
    v31 = *((_DWORD *)a1 + 14);
    v16 = v31;
    v17 = (unsigned __int8 *)(v9 + ((__int64)v31 >> 3));
    v18 = v31 & 7;
    v19 = *((_DWORD *)a2 + 7);
    v32 = v19;
    if ( v14 != v18 )
    {
      BltLnkReadPat1(v7, v31 & 7, v15, v13, v14, v13);
      v16 = v31;
      v19 = v32;
      v8 = a3;
      v15 = a4;
    }
    BltLnkReadPat1(v8, v16, v11, *((_DWORD *)a2 + 6), v19, v13);
    v8 = a3;
    if ( *((_BYTE *)a2 + 36) )
    {
      v25 = v31;
      *a3 |= -1 << (8 - v18);
      a3[(unsigned __int64)(unsigned int)(v18 + v13) >> 3] |= 255 >> ((v31 + v13) & 7);
      if ( v13 > 0 )
      {
        v26 = a3 - v15;
        do
        {
          v27 = v15[v26];
          if ( v27 )
          {
            if ( v27 != 0xFF )
              *v17 = v27 & *v17 | *v15 & ~v27;
          }
          else
          {
            *v17 = *v15;
          }
          ++v15;
          ++v17;
          v13 -= 8;
          if ( (v25 & 7) != 0 )
          {
            v13 += v25 & 7;
            v25 = 0;
          }
        }
        while ( v13 > 0 );
      }
    }
    else if ( v13 > 0 )
    {
      v20 = v31;
      v21 = a3 - v17;
      v22 = v15 - v17;
      while ( 1 )
      {
        v23 = v17[v21];
        if ( v23 == 0xFF )
          break;
        if ( v23 )
        {
          v24 = *v17 & ~v23 | v23 & v17[v22];
          goto LABEL_11;
        }
LABEL_12:
        ++v17;
        v13 -= 8;
        if ( (v20 & 7) != 0 )
        {
          v13 += v20 & 7;
          v20 = 0;
        }
        if ( v13 <= 0 )
          goto LABEL_25;
      }
      v24 = v17[v22];
LABEL_11:
      *v17 = v24;
      goto LABEL_12;
    }
LABEL_25:
    v9 = *((int *)a1 + 11) + v29;
    v6 = *((int *)a1 + 10) + v30;
    v29 = v9;
    v30 = v6;
    if ( *((int *)a1 + 9) <= 0 )
    {
      if ( v10 )
      {
        --v10;
        v11 += *((int *)a2 + 8);
      }
      else
      {
        v10 = *((_DWORD *)a2 + 4) - 1;
        v11 = (unsigned __int8 *)(*((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v10);
      }
    }
    else
    {
      ++v10;
      v11 += *((int *)a2 + 8);
      if ( v10 >= *((_DWORD *)a2 + 4) )
      {
        v11 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v10 = 0;
      }
    }
    v12 = v28;
    v7 = a4;
  }
}
