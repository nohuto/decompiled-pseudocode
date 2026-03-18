/*
 * XREFs of MiParseImageSectionHeaders @ 0x1404FAAC0
 * Callers:
 *     MiBuildImageControlArea @ 0x1404FA468 (MiBuildImageControlArea.c)
 * Callees:
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14017C818 (MiMakeSubsectionPte.c)
 *     memset @ 0x140192F40 (memset.c)
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
  unsigned int *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r8d
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
  unsigned int v28; // r11d
  unsigned int v29; // r9d
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
  int v43; // r13d
  unsigned int v44; // edx
  bool v45; // zf
  unsigned int v46; // ecx
  char v47; // [rsp+20h] [rbp-78h]
  char v48; // [rsp+21h] [rbp-77h]
  __int64 v49; // [rsp+28h] [rbp-70h]
  unsigned int v50; // [rsp+30h] [rbp-68h]
  unsigned int v51; // [rsp+34h] [rbp-64h]
  unsigned int v52; // [rsp+38h] [rbp-60h]
  unsigned int v53; // [rsp+3Ch] [rbp-5Ch]
  int v54; // [rsp+40h] [rbp-58h]
  unsigned int *v55; // [rsp+48h] [rbp-50h]
  __int64 v56; // [rsp+50h] [rbp-48h]
  int v59; // [rsp+B8h] [rbp+20h]

  v59 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = a1;
  v9 = *((unsigned int *)a2 + 43);
  v10 = a4;
  v11 = a2;
  v12 = (__int64 *)(a2[17] + 8 * v9);
  if ( (v8 & 0x80000) == 0 )
  {
    v56 = *(_QWORD *)(v6 + 56);
    v17 = *(_DWORD *)(v56 + 56) + 1;
    v18 = a5;
    v19 = *(_QWORD *)(v6 + 32) + (unsigned int)((_DWORD)v9 << 12);
    v49 = v19;
    v20 = *(_DWORD *)(a5 + 12);
    v53 = v20;
    if ( v10 )
    {
      v21 = (unsigned int *)(a3 + 20);
      v22 = 0LL;
      v23 = a6;
      v55 = v21;
      while ( 1 )
      {
        v24 = *(v21 - 3);
        v50 = v24;
        if ( !(_DWORD)v24 )
        {
          v24 = *(v21 - 1);
          v50 = *(v21 - 1);
        }
        v25 = *(v21 - 1);
        if ( !v25 && *v21 != (_DWORD)v22 )
        {
          if ( (v8 & 0x10000) != 0 )
          {
            dword_1403882F8 = 61;
            return 3221225595LL;
          }
          *v21 = v22;
        }
        if ( *v21 + v25 < *v21 )
        {
          dword_1403882F8 = 25;
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
          dword_1403882F8 = 26;
          return 3221225595LL;
        }
        if ( v20 + (_DWORD)v24 - 1 <= (unsigned int)v24 )
        {
          dword_1403882F8 = 43;
          return 3221225595LL;
        }
        v26 = (~(v20 - 1) >> 12) & (((unsigned __int64)v20 + v24 - 1) >> 12);
        *(_DWORD *)(v7 + 44) = v26;
        if ( v26 > v23 )
        {
          dword_1403882F8 = 27;
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
        v28 = *v21 >> 9;
        *(_DWORD *)(v7 + 36) = v28;
        v51 = v27;
        v29 = ~(*(_DWORD *)(v18 + 8) - 1) & (*(_DWORD *)(v18 + 8) + *(v21 - 1) + *v21 - 1);
        if ( v29 < *v21 )
        {
          dword_1403882F8 = 54;
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
          *(_BYTE *)(v56 + 50) = 1;
        *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (2 * v34)) & 0x3E;
        MiMakeSubsectionPte(v7);
        DemandZeroPte = MiMakeDemandZeroPte(v35);
        v39 = DemandZeroPte;
        if ( !*v21 )
          v38 = DemandZeroPte;
        v40 = 0;
        v54 = *v21 + *(v21 - 1);
        v41 = 0;
        v47 = 0;
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
            v47 = 1;
          }
        }
        v19 = v49;
        v42 = v22;
        v43 = v22;
        *(_BYTE *)(v6 + 14) ^= (*(_BYTE *)(v6 + 14) ^ (2 * v37)) & 0x3E;
        v44 = *(v21 - 1);
        v52 = v44;
        if ( *(_DWORD *)(v7 + 44) > (unsigned int)v22 )
        {
          while ( 1 )
          {
            if ( v42 >= v50 )
            {
              *v12 = v22;
              if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow();
              *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ (*(_DWORD *)(v7 + 52) + 1)) & 0x7FFFFFFF;
            }
            else
            {
              if ( v40 == 1 )
                ++*(_QWORD *)(v6 + 16);
              if ( v41 == 1 )
                ++*(_QWORD *)(v6 + 48);
              if ( v42 >= v44 )
              {
                *v12 = v39;
                if ( (unsigned __int64)v12 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v12 > 0xFFFFF6FB7DBED7F8uLL )
                  goto LABEL_63;
              }
              else
              {
                ++a2[15];
                *v12 = v38;
                if ( (unsigned __int64)v12 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v12 > 0xFFFFF6FB7DBED7F8uLL )
                  goto LABEL_63;
              }
              MiWritePteShadow();
            }
            v19 = v49;
            v40 = v47;
LABEL_63:
            v41 = v48;
            v19 += 4096LL;
            v44 = v52;
            v42 += 4096;
            ++v12;
            v49 = v19;
            if ( (unsigned int)++v43 >= *(_DWORD *)(v7 + 44) )
            {
              v8 = a1;
              v21 = v55;
              break;
            }
          }
        }
        v21 += 10;
        v18 = a5;
        v45 = v59 == 1;
        v10 = --v59;
        v55 = v21;
        if ( v45 )
          break;
        v11 = a2;
        v23 = v51;
        v20 = v53;
      }
      v46 = v51;
      v17 = v54;
    }
    else
    {
      v46 = a6;
    }
    if ( v17 <= *(_DWORD *)(v56 + 56) )
    {
      if ( v46 < *(_DWORD *)(v18 + 12) >> 12 )
      {
        if ( v46 )
          memset(v12, 0, 8LL * v46);
        return 0LL;
      }
      else
      {
        dword_1403882F8 = 34;
        return 3221225595LL;
      }
    }
    else
    {
      dword_1403882F8 = 33;
      return 3221225595LL;
    }
  }
  if ( a4 )
  {
    v13 = (unsigned int *)(a3 + 16);
    while ( 1 )
    {
      v14 = *(v13 - 2);
      if ( !v14 )
        v14 = *v13;
      v15 = v13[1];
      if ( v15 + *v13 < v15 )
        break;
      if ( v15 != *(v13 - 1) || v14 > *v13 )
      {
        dword_1403882F8 = 21;
        return 3221225595LL;
      }
      v13 += 10;
      if ( !--v10 )
        goto LABEL_10;
    }
    dword_1403882F8 = 20;
    return 3221225595LL;
  }
  else
  {
LABEL_10:
    v11[15] = *(unsigned int *)(v6 + 8);
    return 0LL;
  }
}
