/*
 * XREFs of AdjustSrcDevGamma @ 0x1C0079298
 * Callers:
 *     pDCIAdjClr @ 0x1C007828C (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C007915C (MulFD6.c)
 *     DivFD6 @ 0x1C00794D8 (DivFD6.c)
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 *     Log @ 0x1C007B120 (Log.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, unsigned int *a2, unsigned __int16 *a3, __int64 a4, char a5)
{
  unsigned __int8 v7; // bl
  unsigned int v9; // r13d
  int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // edx
  int v17; // ebx
  int v18; // r14d
  int v19; // esi
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // xmm0_8
  unsigned __int8 v28; // cl
  int v29; // r12d
  int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // [rsp+20h] [rbp-30h]
  unsigned int v41; // [rsp+20h] [rbp-30h]
  unsigned int v42; // [rsp+24h] [rbp-2Ch]
  __int64 v43; // [rsp+28h] [rbp-28h]
  __int64 v44; // [rsp+38h] [rbp-18h]
  int v45; // [rsp+98h] [rbp+48h]
  int v46; // [rsp+A0h] [rbp+50h]
  unsigned int v47; // [rsp+B0h] [rbp+60h]

  v7 = a4;
  v9 = 0;
  v10 = 0;
  LODWORD(v44) = DivFD6(a3[3], 10000LL, a3, a4);
  HIDWORD(v44) = DivFD6(a3[4], 10000LL, v11, v12);
  v15 = DivFD6(a3[5], 10000LL, v13, v14);
  *a2 &= ~0x1000u;
  v16 = v15;
  v45 = 1000000;
  v40 = v15;
  if ( (a5 & 8) == 0 )
  {
    v21 = 1000000;
    v46 = 1000000;
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( v7 )
      {
        if ( v7 <= 2u )
        {
LABEL_30:
          v18 = 1325000;
          a3[6] += 550;
          v17 = 1325000;
          a3[7] -= 300;
          v19 = 1325000;
          v43 = 0x1437C8001437C8LL;
          goto LABEL_25;
        }
        if ( v7 > 4u )
        {
          if ( v7 <= 6u )
          {
LABEL_23:
            v18 = 1000000;
            HIDWORD(v43) = 1000000;
            v19 = 1000000;
            v17 = 1000000;
LABEL_24:
            LODWORD(v43) = v17;
            goto LABEL_25;
          }
          if ( v7 > 0xFBu )
          {
            if ( v7 <= 0xFDu )
              goto LABEL_23;
            if ( v7 == 0xFE )
            {
              v18 = 1025000;
              v19 = 1025000;
              HIDWORD(v43) = 1025000;
              v17 = 1025000;
              goto LABEL_24;
            }
            goto LABEL_30;
          }
        }
      }
      return 0LL;
    }
    v22 = RaisePower(1050000LL, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2LL);
    v23 = MulFD6(932500, v22);
    v27 = *(_QWORD *)(a1 + 144);
    v18 = *(_DWORD *)(a1 + 152);
    *a2 |= 0x1000u;
    v28 = *(_BYTE *)(a1 + 161);
    v47 = v23;
    v43 = v27;
    v42 = *a2;
    if ( v28 > 0xFu )
    {
      v29 = 1000000;
    }
    else
    {
      v29 = 25000 * ((v28 >> 1) + 41);
      if ( v7 == 1 )
        v29 = MulFD6(v29, 1125000);
    }
    v30 = *(_DWORD *)(a1 + 192);
    if ( v30 <= 1000000 )
    {
      if ( v30 >= 1000000 )
        goto LABEL_47;
      LODWORD(v24) = (unsigned __int64)(1431655766LL * v30) >> 32;
      v37 = (unsigned int)Log((unsigned int)(v30 / 3), v24, v25);
      v34 = 4294490175LL;
    }
    else
    {
      v31 = DivFD6(333333LL, (unsigned int)v30, v25, v26);
      v34 = (unsigned int)Log(v31, v32, v33);
      v37 = 4294490175LL;
    }
    v45 = DivFD6(v37, v34, v35, v36);
LABEL_47:
    if ( !v7 )
      return 0LL;
    if ( v7 > 2u )
    {
      if ( v7 <= 4u )
        return 0LL;
      if ( v7 <= 6u )
        goto LABEL_58;
      if ( v7 <= 0xFBu )
        return 0LL;
      if ( v7 <= 0xFDu )
      {
LABEL_58:
        if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
        {
          *a2 = v42 & 0xFFFFEFFF;
          v38 = 1000000;
          goto LABEL_55;
        }
      }
      else if ( v7 == 0xFE && (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
      {
        v38 = DivFD6(v47, 932500LL, v25, v26);
        v45 = 1000000;
        goto LABEL_55;
      }
    }
    v38 = v47;
LABEL_55:
    v19 = HIDWORD(v27);
    v21 = MulFD6(v29, v38);
    v17 = v27;
    v46 = v21;
LABEL_25:
    LODWORD(v44) = MulFD6(v44, v21);
    HIDWORD(v44) = MulFD6(SHIDWORD(v44), v46);
    v41 = MulFD6(v40, v46);
    v16 = v41;
    if ( v45 != 1000000 )
    {
      LODWORD(v43) = MulFD6(v17, v45);
      v17 = v43;
      HIDWORD(v43) = MulFD6(v19, v45);
      v19 = HIDWORD(v43);
      v39 = MulFD6(v18, v45);
      v16 = v41;
      v18 = v39;
    }
    goto LABEL_3;
  }
  v17 = 1000000;
  v10 = 1;
  v43 = 4294967297000000LL;
  v18 = 1000000;
  v19 = 1000000;
LABEL_3:
  if ( (_DWORD)v44 != 1000000 || __PAIR64__(HIDWORD(v44), 1000000) != (v16 | 0xF424000000000LL) )
    v10 |= 2u;
  if ( (_DWORD)v44 != a2[1] || __PAIR64__(v16, HIDWORD(v44)) != *((_QWORD *)a2 + 1) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 1) = v44;
    a2[3] = v16;
  }
  if ( v17 != 1000000 || v19 != 1000000 || v18 != 1000000 )
    v10 |= 4u;
  if ( v17 != a2[4] || v19 != a2[5] || v18 != a2[6] )
  {
    v9 = 1;
    *((_QWORD *)a2 + 2) = v43;
    a2[6] = v18;
  }
  if ( (*a2 & 7) != v10 )
    v9 = 1;
  if ( v9 )
    *a2 = v10 | *a2 & 0xFFFFFFF8;
  return v9;
}
