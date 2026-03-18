/*
 * XREFs of MiParseImageSectionHeaders @ 0x1404BDAA0
 * Callers:
 *     MiBuildImageControlArea @ 0x1404BD514 (MiBuildImageControlArea.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1401A666C (MiMakeSubsectionPte.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // r10d
  __int64 *v11; // r15
  __int64 *v12; // rdi
  unsigned int *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned int v20; // r11d
  __int64 v21; // r9
  unsigned int v22; // edx
  unsigned int *v23; // r12
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // r13d
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  int v31; // r8d
  int v32; // edx
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int16 v35; // dx
  char v36; // dl
  __int64 DemandZeroPte; // rax
  char v38; // dl
  __int64 v39; // r8
  __int64 v40; // r10
  __int64 v41; // r11
  char v42; // cl
  unsigned int v43; // ebp
  int v44; // r15d
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  bool v49; // zf
  unsigned int v50; // ecx
  char v51; // [rsp+20h] [rbp-68h]
  char v52; // [rsp+21h] [rbp-67h]
  __int64 v53; // [rsp+28h] [rbp-60h]
  unsigned int v54; // [rsp+30h] [rbp-58h]
  unsigned int v55; // [rsp+34h] [rbp-54h]
  unsigned int v56; // [rsp+38h] [rbp-50h]
  int v57; // [rsp+3Ch] [rbp-4Ch]
  unsigned int *v58; // [rsp+40h] [rbp-48h]
  __int64 v59; // [rsp+48h] [rbp-40h]
  int v62; // [rsp+A8h] [rbp+20h]

  v62 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = a1;
  v9 = *((unsigned int *)a2 + 43);
  v10 = a4;
  v11 = a2;
  v12 = (__int64 *)(a2[17] + 8 * v9);
  if ( (v8 & 0x80000) == 0 )
  {
    v18 = a5;
    v59 = *(_QWORD *)(v6 + 56);
    v19 = *(_DWORD *)(v59 + 56);
    v20 = *(_DWORD *)(a5 + 12);
    v21 = *(_QWORD *)(v6 + 32) + (unsigned int)((_DWORD)v9 << 12);
    v22 = v19 + 1;
    v53 = v21;
    v56 = v20;
    if ( v10 )
    {
      v23 = (unsigned int *)(a3 + 20);
      v24 = a6;
      v58 = v23;
      while ( 1 )
      {
        v25 = *(v23 - 1);
        v26 = v25;
        if ( *(v23 - 3) )
          v26 = *(v23 - 3);
        if ( !v25 && *v23 )
        {
          if ( (v8 & 0x10000) != 0 )
          {
            dword_1403CB498 = 61;
            return 3221225595LL;
          }
          *v23 = 0;
        }
        if ( *v23 + v25 < *v23 )
        {
          dword_1403CB498 = 25;
          return 3221225595LL;
        }
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v7 += 56LL;
        *(_QWORD *)v7 = v11;
        if ( v21 != *(_QWORD *)v18 + *(v23 - 2) || !v26 )
        {
          dword_1403CB498 = 26;
          return 3221225595LL;
        }
        if ( v26 + v20 - 1 <= v26 )
        {
          dword_1403CB498 = 43;
          return 3221225595LL;
        }
        v27 = (~(v20 - 1) >> 12) & ((v26 + (unsigned __int64)v20 - 1) >> 12);
        *(_DWORD *)(v7 + 44) = v27;
        if ( v27 > v24 )
        {
          dword_1403CB498 = 27;
          return 3221225595LL;
        }
        v28 = (~(v20 - 1) >> 12) & ((v26 + (unsigned __int64)v20 - 1) >> 12);
        if ( v10 == 1 && v27 != v24 )
        {
          *(_DWORD *)(v7 + 44) = v24;
          v28 = v24;
        }
        *(_DWORD *)(v7 + 32) = 0;
        v54 = v24 - v28;
        v29 = *v23 >> 9;
        *(_DWORD *)(v7 + 36) = v29;
        v30 = ~(*(_DWORD *)(v18 + 8) - 1) & (*v23 + *(_DWORD *)(v18 + 8) + *(v23 - 1) - 1);
        if ( v30 < *v23 )
        {
          dword_1403CB498 = 54;
          return 3221225595LL;
        }
        *(_QWORD *)(v7 + 8) = v12;
        *(_DWORD *)(v7 + 40) = (v30 >> 9) - v29;
        *(_WORD *)(v7 + 34) = 16 * (v30 & 0x1FF);
        v31 = v23[4];
        v32 = ((unsigned int)v31 >> 29) & 1 | 2;
        if ( (v31 & 0x40000000) == 0 )
          v32 = (v23[4] >> 29) & 1;
        v33 = v32 | 4;
        if ( v31 >= 0 )
          v33 = v32;
        v34 = v33 | 8;
        if ( (v31 & 0x10000000) == 0 )
          v34 = v33;
        v35 = MiImageProtectionArray[v34];
        if ( (MiImageProtectionArray[v34] & 2) != 0 )
          *(_BYTE *)(v59 + 50) = 1;
        *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (2 * v35)) & 0x3E;
        MiMakeSubsectionPte(v7);
        DemandZeroPte = MiMakeDemandZeroPte(v36);
        v41 = DemandZeroPte;
        if ( !*v23 )
          v40 = DemandZeroPte;
        v42 = 0;
        v57 = *v23 + *(v23 - 1);
        v51 = 0;
        v52 = 0;
        if ( (v38 & 4) != 0 )
        {
          if ( (v38 & 5) == 5 )
          {
            v52 = 1;
          }
          else
          {
            *(_WORD *)(v7 + 34) |= 2u;
            v42 = 1;
            *((_DWORD *)v11 + 14) |= 0x20000u;
            v51 = 1;
          }
        }
        v21 = v53;
        v43 = 0;
        v44 = 0;
        *(_BYTE *)(v6 + 14) ^= (*(_BYTE *)(v6 + 14) ^ (2 * v38)) & 0x3E;
        v45 = *(v23 - 1);
        v55 = v45;
        if ( *(_DWORD *)(v7 + 44) )
        {
          while ( v43 < v26 )
          {
            if ( v42 == 1 )
              ++*(_QWORD *)(v6 + 16);
            if ( v52 == 1 )
              ++*(_QWORD *)(v6 + 48);
            if ( v43 < v45 )
            {
              ++a2[15];
              *v12 = v40;
              if ( (unsigned __int64)v12 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v12 > 0xFFFFF6FB7DBED7F8uLL )
                goto LABEL_61;
              MiWritePteShadow((__int64)v12, v40, v39);
              goto LABEL_59;
            }
            *v12 = v41;
            if ( MiPteInShadowRange((unsigned __int64)v12) )
            {
              MiWritePteShadow(v46, v41, v39);
LABEL_59:
              v21 = v53;
            }
            v42 = v51;
LABEL_61:
            v45 = v55;
            v21 += 4096LL;
            v43 += 4096;
            v53 = v21;
            ++v12;
            if ( (unsigned int)++v44 >= *(_DWORD *)(v7 + 44) )
            {
              v8 = a1;
              v23 = v58;
              goto LABEL_63;
            }
          }
          *v12 = ZeroPte;
          if ( MiPteInShadowRange((unsigned __int64)v12) )
            MiWritePteShadow(v48, v47, v39);
          *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ (*(_DWORD *)(v7 + 52) + 1)) & 0x3FFFFFFF;
          goto LABEL_59;
        }
LABEL_63:
        v23 += 10;
        v18 = a5;
        v49 = v62 == 1;
        v10 = --v62;
        v58 = v23;
        if ( v49 )
          break;
        v11 = a2;
        v24 = v54;
        v20 = v56;
      }
      v50 = v54;
      v22 = v57;
      v19 = *(_DWORD *)(v59 + 56);
    }
    else
    {
      v50 = a6;
    }
    if ( v22 <= v19 )
    {
      if ( v50 < *(_DWORD *)(v18 + 12) >> 12 )
      {
        return 0LL;
      }
      else
      {
        dword_1403CB498 = 34;
        return 3221225595LL;
      }
    }
    else
    {
      dword_1403CB498 = 33;
      return 3221225595LL;
    }
  }
  if ( a4 )
  {
    v13 = (unsigned int *)(a3 + 16);
    while ( 1 )
    {
      v14 = *v13;
      v15 = *v13;
      v16 = v13[1];
      if ( *(v13 - 2) )
        v15 = *(v13 - 2);
      if ( v14 + v16 < v16 )
        break;
      if ( v16 != *(v13 - 1) || v15 > v14 )
      {
        dword_1403CB498 = 21;
        return 3221225595LL;
      }
      v13 += 10;
      if ( !--v10 )
        goto LABEL_10;
    }
    dword_1403CB498 = 20;
    return 3221225595LL;
  }
  else
  {
LABEL_10:
    v11[15] = *(unsigned int *)(v6 + 8);
    return 0LL;
  }
}
