/*
 * XREFs of ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02B16E0
 * Callers:
 *     <none>
 * Callees:
 *     ?BltLnkReadPat1@@YAXPEAEK0KKKK@Z @ 0x1C02B1210 (-BltLnkReadPat1@@YAXPEAEK0KKKK@Z.c)
 */

void __fastcall BltLnkSrcCopyMsk1(
        struct BLTINFO *a1,
        struct _BLTLNK_MASKINFO *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  unsigned __int8 *v7; // r10
  int v8; // eax
  int v10; // r14d
  unsigned __int8 *v11; // rbp
  int v12; // ecx
  __int64 v13; // r12
  int v14; // edi
  unsigned __int8 *v15; // r15
  unsigned __int8 *v16; // rbx
  signed __int64 v17; // rdx
  signed __int64 v18; // r15
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // al
  int v21; // r8d
  signed __int64 v22; // r8
  unsigned __int8 v23; // dl
  __int64 v24; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+48h] [rbp-50h]
  unsigned int v26; // [rsp+A0h] [rbp+8h]
  int v27; // [rsp+A8h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 2);
  v6 = *((_QWORD *)a1 + 1);
  v7 = a4;
  v8 = *((_DWORD *)a1 + 8);
  v25 = v6;
  v10 = *((_DWORD *)a2 + 5);
  v11 = *(unsigned __int8 **)a2;
  v24 = v4;
  while ( v8 )
  {
    v12 = *((_DWORD *)a1 + 12);
    v13 = *((int *)a1 + 14);
    v14 = *((_DWORD *)a1 + 7);
    v27 = v8 - 1;
    v26 = *((_DWORD *)a2 + 7);
    v15 = (unsigned __int8 *)(v6 + ((__int64)v12 >> 3));
    v16 = (unsigned __int8 *)(v4 + (v13 >> 3));
    if ( (((unsigned __int8)v12 ^ (unsigned __int8)v13) & 7) != 0 )
    {
      BltLnkReadPat1(v7, v13 & 7, v15, v14, v12 & 7, v14);
      v15 = a4;
    }
    BltLnkReadPat1(a3, v13, v11, *((_DWORD *)a2 + 6), v26, v14);
    if ( *((_BYTE *)a2 + 36) )
    {
      v21 = v13 & 7;
      *a3 |= -1 << (8 - v21);
      a3[(unsigned __int64)(unsigned int)(v14 + v21) >> 3] |= 255 >> ((v13 + v14) & 7);
      if ( v14 > 0 )
      {
        v22 = a3 - v16;
        do
        {
          v23 = v16[v22];
          if ( v23 )
          {
            if ( v23 != 0xFF )
              *v16 = v23 & *v16 | *v15 & ~v23;
          }
          else
          {
            *v16 = *v15;
          }
          ++v15;
          ++v16;
          v14 -= 8;
          if ( (v13 & 7) != 0 )
          {
            v14 += v13 & 7;
            LOBYTE(v13) = 0;
          }
        }
        while ( v14 > 0 );
      }
    }
    else if ( v14 > 0 )
    {
      v17 = a3 - v16;
      v18 = v15 - v16;
      while ( 1 )
      {
        v19 = v16[v17];
        if ( v19 == 0xFF )
          break;
        if ( v19 )
        {
          v20 = *v16 & ~v19 | v19 & v16[v18];
          goto LABEL_11;
        }
LABEL_12:
        ++v16;
        v14 -= 8;
        if ( (v13 & 7) != 0 )
        {
          v14 += v13 & 7;
          LOBYTE(v13) = 0;
        }
        if ( v14 <= 0 )
          goto LABEL_25;
      }
      v20 = v16[v18];
LABEL_11:
      *v16 = v20;
      goto LABEL_12;
    }
LABEL_25:
    v4 = *((int *)a1 + 11) + v24;
    v6 = *((int *)a1 + 10) + v25;
    v24 = v4;
    v25 = v6;
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
    v8 = v27;
    v7 = a4;
  }
}
