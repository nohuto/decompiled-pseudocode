/*
 * XREFs of AdjustSrcDevGamma @ 0x1C0034BB8
 * Callers:
 *     pDCIAdjClr @ 0x1C0034290 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C0034154 (MulFD6.c)
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     RaisePower @ 0x1C00EDF60 (RaisePower.c)
 *     Log @ 0x1C00EE1B8 (Log.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, unsigned int *a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  unsigned int v9; // r13d
  int v10; // r15d
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  int v14; // r14d
  int v15; // esi
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // xmm0_8
  unsigned __int8 v21; // cl
  int v22; // r12d
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // [rsp+20h] [rbp-30h]
  unsigned int v30; // [rsp+20h] [rbp-30h]
  unsigned int v31; // [rsp+24h] [rbp-2Ch]
  __int64 v32; // [rsp+28h] [rbp-28h]
  __int64 v33; // [rsp+38h] [rbp-18h]
  int v34; // [rsp+98h] [rbp+48h]
  int v35; // [rsp+A0h] [rbp+50h]
  unsigned int v36; // [rsp+B0h] [rbp+60h]

  v9 = 0;
  v10 = 0;
  LODWORD(v33) = DivFD6(a3[3], 10000LL);
  HIDWORD(v33) = DivFD6(a3[4], 10000LL);
  v11 = DivFD6(a3[5], 10000LL);
  *a2 &= ~0x1000u;
  v12 = v11;
  v34 = 1000000;
  v29 = v11;
  if ( (a5 & 8) == 0 )
  {
    v17 = 1000000;
    v35 = 1000000;
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( a4 )
      {
        if ( a4 <= 2u )
        {
LABEL_30:
          v14 = 1325000;
          a3[6] += 550;
          v13 = 1325000;
          a3[7] -= 300;
          v15 = 1325000;
          v32 = 0x1437C8001437C8LL;
          goto LABEL_25;
        }
        if ( a4 > 4u )
        {
          if ( a4 <= 6u )
          {
LABEL_23:
            v14 = 1000000;
            HIDWORD(v32) = 1000000;
            v15 = 1000000;
            v13 = 1000000;
LABEL_24:
            LODWORD(v32) = v13;
            goto LABEL_25;
          }
          if ( a4 > 0xFBu )
          {
            if ( a4 <= 0xFDu )
              goto LABEL_23;
            if ( a4 == 0xFE )
            {
              v14 = 1025000;
              v15 = 1025000;
              HIDWORD(v32) = 1025000;
              v13 = 1025000;
              goto LABEL_24;
            }
            goto LABEL_30;
          }
        }
      }
      return 0LL;
    }
    v18 = RaisePower(1050000LL, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2LL);
    v19 = MulFD6(932500, v18);
    v20 = *(_QWORD *)(a1 + 144);
    v14 = *(_DWORD *)(a1 + 152);
    *a2 |= 0x1000u;
    v21 = *(_BYTE *)(a1 + 161);
    v36 = v19;
    v32 = v20;
    v31 = *a2;
    if ( v21 > 0xFu )
    {
      v22 = 1000000;
    }
    else
    {
      v22 = 25000 * ((v21 >> 1) + 41);
      if ( a4 == 1 )
        v22 = MulFD6(v22, 1125000);
    }
    v23 = *(_DWORD *)(a1 + 192);
    if ( v23 <= 1000000 )
    {
      if ( v23 >= 1000000 )
        goto LABEL_47;
      v26 = (unsigned int)Log((unsigned int)(v23 / 3));
      v25 = 4294490175LL;
    }
    else
    {
      v24 = DivFD6(333333LL, (unsigned int)v23);
      v25 = (unsigned int)Log(v24);
      v26 = 4294490175LL;
    }
    v34 = DivFD6(v26, v25);
LABEL_47:
    if ( !a4 )
      return 0LL;
    if ( a4 > 2u )
    {
      if ( a4 <= 4u )
        return 0LL;
      if ( a4 <= 6u )
        goto LABEL_58;
      if ( a4 <= 0xFBu )
        return 0LL;
      if ( a4 <= 0xFDu )
      {
LABEL_58:
        if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
        {
          *a2 = v31 & 0xFFFFEFFF;
          v27 = 1000000;
          goto LABEL_55;
        }
      }
      else if ( a4 == 0xFE && (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
      {
        v27 = DivFD6(v36, 932500LL);
        v34 = 1000000;
        goto LABEL_55;
      }
    }
    v27 = v36;
LABEL_55:
    v15 = HIDWORD(v20);
    v17 = MulFD6(v22, v27);
    v13 = v20;
    v35 = v17;
LABEL_25:
    LODWORD(v33) = MulFD6(v33, v17);
    HIDWORD(v33) = MulFD6(SHIDWORD(v33), v35);
    v30 = MulFD6(v29, v35);
    v12 = v30;
    if ( v34 != 1000000 )
    {
      LODWORD(v32) = MulFD6(v13, v34);
      v13 = v32;
      HIDWORD(v32) = MulFD6(v15, v34);
      v15 = HIDWORD(v32);
      v28 = MulFD6(v14, v34);
      v12 = v30;
      v14 = v28;
    }
    goto LABEL_3;
  }
  v13 = 1000000;
  v10 = 1;
  v32 = 4294967297000000LL;
  v14 = 1000000;
  v15 = 1000000;
LABEL_3:
  if ( (_DWORD)v33 != 1000000 || __PAIR64__(HIDWORD(v33), 1000000) != (v12 | 0xF424000000000LL) )
    v10 |= 2u;
  if ( (_DWORD)v33 != a2[1] || __PAIR64__(v12, HIDWORD(v33)) != *((_QWORD *)a2 + 1) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 1) = v33;
    a2[3] = v12;
  }
  if ( v13 != 1000000 || v15 != 1000000 || v14 != 1000000 )
    v10 |= 4u;
  if ( v13 != a2[4] || v15 != a2[5] || v14 != a2[6] )
  {
    v9 = 1;
    *((_QWORD *)a2 + 2) = v32;
    a2[6] = v14;
  }
  if ( (*a2 & 7) != v10 )
    v9 = 1;
  if ( v9 )
    *a2 = v10 | *a2 & 0xFFFFFFF8;
  return v9;
}
