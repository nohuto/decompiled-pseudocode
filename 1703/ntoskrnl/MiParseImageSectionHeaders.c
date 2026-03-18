/*
 * XREFs of MiParseImageSectionHeaders @ 0x1404946A0
 * Callers:
 *     MiBuildImageControlArea @ 0x1404940B8 (MiBuildImageControlArea.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14017CF90 (MiMakeSubsectionPte.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // rcx
  int v10; // r11d
  __int64 *v11; // rbp
  __int64 *v12; // rsi
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r9d
  unsigned int v17; // eax
  __int64 v18; // r13
  __int64 v19; // r9
  unsigned int v20; // ebx
  unsigned int *v21; // r12
  __int64 v22; // r10
  unsigned int v23; // r8d
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  unsigned int v29; // r8d
  int v30; // r8d
  int v31; // edx
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int16 v34; // dx
  char v35; // dl
  __int64 DemandZeroPte; // rax
  char v37; // dl
  __int64 v38; // r11
  __int64 v39; // rbx
  char v40; // cl
  char v41; // al
  unsigned int v42; // ebp
  unsigned int v43; // r13d
  unsigned int v44; // edx
  __int64 v45; // r9
  bool v46; // zf
  unsigned int v47; // ecx
  char v48; // [rsp+20h] [rbp-78h]
  char v49; // [rsp+21h] [rbp-77h]
  __int64 v50; // [rsp+28h] [rbp-70h]
  unsigned int v51; // [rsp+30h] [rbp-68h]
  unsigned int v52; // [rsp+34h] [rbp-64h]
  unsigned int v53; // [rsp+38h] [rbp-60h]
  unsigned int v54; // [rsp+3Ch] [rbp-5Ch]
  int v55; // [rsp+40h] [rbp-58h]
  unsigned int *v56; // [rsp+48h] [rbp-50h]
  __int64 v57; // [rsp+50h] [rbp-48h]
  int v60; // [rsp+B8h] [rbp+20h]

  v60 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = a1;
  v9 = *((unsigned int *)a2 + 43);
  v10 = a4;
  v11 = a2;
  v12 = (__int64 *)(a2[17] + 8 * v9);
  if ( (v8 & 0x80000) == 0 )
  {
    v57 = *(_QWORD *)(v6 + 56);
    v17 = *(_DWORD *)(v57 + 56) + 1;
    v18 = a5;
    v19 = *(_QWORD *)(v6 + 32) + (unsigned int)((_DWORD)v9 << 12);
    v50 = v19;
    v20 = *(_DWORD *)(a5 + 12);
    v54 = v20;
    if ( v10 )
    {
      v21 = (unsigned int *)(a3 + 20);
      v22 = 0LL;
      v23 = a6;
      v56 = v21;
      while ( 1 )
      {
        v24 = *(v21 - 3);
        v51 = v24;
        if ( !(_DWORD)v24 )
        {
          v24 = *(v21 - 1);
          v51 = *(v21 - 1);
        }
        v25 = *(v21 - 1);
        if ( !v25 && *v21 != (_DWORD)v22 )
        {
          if ( (v8 & 0x10000) != 0 )
          {
            dword_14036BFD8 = 61;
            return 3221225595LL;
          }
          *v21 = v22;
        }
        if ( *v21 + v25 < *v21 )
        {
          dword_14036BFD8 = 25;
          return 3221225595LL;
        }
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v7 += 56LL;
        *(_QWORD *)v7 = v11;
        *(_QWORD *)(v7 + 16) = v22;
        *(_QWORD *)(v7 + 24) = v22;
        *(_DWORD *)(v7 + 52) = v22;
        if ( v19 != *(_QWORD *)v18 + *(v21 - 2) || !(_DWORD)v24 )
        {
          dword_14036BFD8 = 26;
          return 3221225595LL;
        }
        if ( v20 + (_DWORD)v24 - 1 <= (unsigned int)v24 )
        {
          dword_14036BFD8 = 43;
          return 3221225595LL;
        }
        v26 = (~(v20 - 1) >> 12) & (((unsigned __int64)v20 + v24 - 1) >> 12);
        *(_DWORD *)(v7 + 44) = v26;
        if ( v26 > v23 )
        {
          dword_14036BFD8 = 27;
          return 3221225595LL;
        }
        if ( v10 == 1 )
        {
          if ( v26 != v23 )
            v26 = v23;
          *(_DWORD *)(v7 + 44) = v26;
        }
        v27 = v23 - *(_DWORD *)(v7 + 44);
        *(_DWORD *)(v7 + 32) = v22;
        v52 = v27;
        v28 = *v21 >> 9;
        *(_DWORD *)(v7 + 36) = v28;
        v29 = ~(*(_DWORD *)(v18 + 8) - 1) & (*v21 + *(_DWORD *)(v18 + 8) + *(v21 - 1) - 1);
        if ( v29 < *v21 )
        {
          dword_14036BFD8 = 54;
          return 3221225595LL;
        }
        *(_QWORD *)(v7 + 8) = v12;
        *(_DWORD *)(v7 + 40) = (v29 >> 9) - v28;
        *(_WORD *)(v7 + 34) = *(_WORD *)(v7 + 34) & 0xF | (16 * (v29 & 0x1FF));
        v30 = v21[4];
        v31 = ((unsigned int)v30 >> 29) & 1 | 2;
        if ( (v30 & 0x40000000) == 0 )
          v31 = (v21[4] >> 29) & 1;
        v32 = v31 | 4;
        if ( v30 >= 0 )
          v32 = v31;
        v33 = v32 | 8;
        if ( (v30 & 0x10000000) == 0 )
          v33 = v32;
        v34 = MiImageProtectionArray[v33];
        if ( (MiImageProtectionArray[v33] & 2) != 0 )
          *(_BYTE *)(v57 + 50) = 1;
        *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (2 * v34)) & 0x3E;
        MiMakeSubsectionPte(v7);
        DemandZeroPte = MiMakeDemandZeroPte(v35);
        v39 = DemandZeroPte;
        if ( !*v21 )
          v38 = DemandZeroPte;
        v40 = 0;
        v55 = *v21 + *(v21 - 1);
        v41 = 0;
        v49 = 0;
        v48 = 0;
        if ( (v37 & 4) != 0 )
        {
          if ( (v37 & 5) == 5 )
          {
            v41 = 1;
            v48 = 1;
          }
          else
          {
            *(_WORD *)(v7 + 34) |= 2u;
            v40 = 1;
            *((_DWORD *)v11 + 14) |= 0x20000u;
            v41 = v22;
            v49 = 1;
          }
        }
        v19 = v50;
        v42 = v22;
        v43 = v22;
        *(_BYTE *)(v6 + 14) ^= (*(_BYTE *)(v6 + 14) ^ (2 * v37)) & 0x3E;
        v44 = *(v21 - 1);
        v53 = v44;
        if ( *(_DWORD *)(v7 + 44) > (unsigned int)v22 )
        {
          while ( v42 < v51 )
          {
            if ( v40 == 1 )
              ++*(_QWORD *)(v6 + 16);
            if ( v41 == 1 )
              ++*(_QWORD *)(v6 + 48);
            if ( v42 >= v44 )
            {
              *v12 = v39;
              if ( MiPteInShadowRange((unsigned __int64)v12) )
              {
LABEL_53:
                MiWritePteShadow();
LABEL_59:
                v45 = v50;
              }
            }
            else
            {
              ++a2[15];
              *v12 = v38;
              if ( MiPteInShadowRange((unsigned __int64)v12) )
                goto LABEL_53;
            }
            v41 = v48;
            v19 = v45 + 4096;
            v40 = v49;
            v42 += 4096;
            v44 = v53;
            ++v12;
            ++v43;
            v50 = v19;
            if ( v43 >= *(_DWORD *)(v7 + 44) )
            {
              v8 = a1;
              v21 = v56;
              goto LABEL_62;
            }
          }
          *v12 = v22;
          if ( MiPteInShadowRange((unsigned __int64)v12) )
            MiWritePteShadow();
          *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ (*(_DWORD *)(v7 + 52) + 1)) & 0x7FFFFFFF;
          goto LABEL_59;
        }
LABEL_62:
        v21 += 10;
        v18 = a5;
        v46 = v60 == 1;
        v10 = --v60;
        v56 = v21;
        if ( v46 )
          break;
        v11 = a2;
        v23 = v52;
        v20 = v54;
      }
      v47 = v52;
      v17 = v55;
    }
    else
    {
      v47 = a6;
    }
    if ( v17 <= *(_DWORD *)(v57 + 56) )
    {
      if ( v47 < *(_DWORD *)(v18 + 12) >> 12 )
      {
        if ( v47 )
          memset(v12, 0, 8LL * v47);
        return 0LL;
      }
      else
      {
        dword_14036BFD8 = 34;
        return 3221225595LL;
      }
    }
    else
    {
      dword_14036BFD8 = 33;
      return 3221225595LL;
    }
  }
  if ( a4 )
  {
    v13 = (_DWORD *)(a3 + 20);
    while ( 1 )
    {
      v14 = *(v13 - 3);
      if ( !v14 )
        v14 = *(v13 - 1);
      v15 = *(v13 - 1);
      if ( v15 + *v13 < *v13 )
        break;
      if ( *v13 != *(v13 - 2) || v14 > v15 )
      {
        dword_14036BFD8 = 21;
        return 3221225595LL;
      }
      v13 += 10;
      if ( !--v10 )
        goto LABEL_10;
    }
    dword_14036BFD8 = 20;
    return 3221225595LL;
  }
  else
  {
LABEL_10:
    v11[15] = *(unsigned int *)(v6 + 8);
    return 0LL;
  }
}
