/*
 * XREFs of ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000B808
 * Callers:
 *     GreRectangle @ 0x1C01057D0 (GreRectangle.c)
 *     NtGdiEllipse @ 0x1C027B930 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C027BB70 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C028C580 (NtGdiArcInternal.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00B353C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C00B357C (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  ERECTL *v6; // rdi
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // r14d
  _DWORD *v17; // r15
  __int64 v18; // r8
  LONG v19; // r11d
  LONG v20; // r13d
  LONG y; // r9d
  LONG x; // r10d
  int v23; // r12d
  __int64 v24; // rcx
  signed int v25; // r11d
  LONG v26; // r9d
  LONG v27; // r10d
  LONG v28; // ecx
  LONG v29; // r8d
  int v30; // edi
  int *v31; // rsi
  int v33; // ecx
  float v34; // xmm2_4
  unsigned int v35; // r11d
  __int64 v36; // r9
  __int64 v37; // r8
  int v38; // edx
  int v39; // eax
  int v40; // r11d
  int v41; // r9d
  int v42; // r8d
  int v43; // r10d
  int v44; // ecx
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // ecx
  int v51; // r8d
  float v52; // [rsp+20h] [rbp-40h] BYREF
  float v53; // [rsp+24h] [rbp-3Ch] BYREF
  int v54; // [rsp+28h] [rbp-38h] BYREF
  int v55; // [rsp+2Ch] [rbp-34h]
  int v56; // [rsp+30h] [rbp-30h]
  int v57; // [rsp+34h] [rbp-2Ch]
  _BYTE v58[16]; // [rsp+38h] [rbp-28h] BYREF
  struct _POINTL v59; // [rsp+48h] [rbp-18h] BYREF
  LONG v60; // [rsp+50h] [rbp-10h]
  LONG v61; // [rsp+54h] [rbp-Ch]

  v5 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v6 = (EBOX *)((char *)this + 64);
  *((_DWORD *)this + 1) = 0;
  *((_OWORD *)this + 4) = v5;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
  {
    --*(_DWORD *)v6;
    --*((_DWORD *)this + 18);
  }
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_DWORD *)(v10 + 68) == 2 )
  {
    ERECTL::vOrder(v6);
    goto LABEL_8;
  }
  v11 = (*(_DWORD *)(v10 + 352) & 0x100) == 0;
  v12 = *(_DWORD *)v6;
  v13 = *((_DWORD *)this + 18);
  if ( v11 )
  {
    if ( v12 <= v13 )
      goto LABEL_6;
  }
  else if ( v12 >= v13 )
  {
    goto LABEL_6;
  }
  *(_DWORD *)v6 = v13;
  *((_DWORD *)this + 18) = v12;
LABEL_6:
  v14 = *((_DWORD *)this + 17);
  v15 = *((_DWORD *)this + 19);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x200) != 0 )
  {
    if ( v14 >= v15 )
      goto LABEL_8;
  }
  else if ( v14 <= v15 )
  {
    goto LABEL_8;
  }
  *((_DWORD *)this + 19) = v14;
  *((_DWORD *)this + 17) = v15;
LABEL_8:
  v16 = 4;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 4) != 0 )
  {
    v33 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v33;
  }
  v59 = *(struct _POINTL *)v6;
  v60 = *((_DWORD *)v6 + 2);
  v61 = *((_DWORD *)v6 + 3);
  v17 = *(_DWORD **)(*(_QWORD *)a2 + 152LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v58, a2, 0x204u);
  v19 = v61;
  v20 = v60;
  y = v59.y;
  x = v59.x;
  if ( (v17[12] & 0x10000) == 0 || (a4->fl & 1) == 0 )
    goto LABEL_11;
  v23 = 1;
  v34 = (float)(v17[40] >> 1);
  if ( (v17[40] & 1) != 0 )
    v34 = v34 + FP_0_5;
  LODWORD(v52) = efHalfDiff((unsigned int)v59.x, (unsigned int)v60, v18, (unsigned int)v59.y);
  LODWORD(v53) = efHalfDiff((unsigned int)v36, v35, v37, v36);
  EFLOAT::vAbs((EFLOAT *)&v52);
  EFLOAT::vAbs((EFLOAT *)&v53);
  if ( v34 > v52 || v34 > v53 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_11:
    v23 = 0;
  }
  v24 = *(_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_DWORD *)(v24 + 68) == 2 || v23 || *((_DWORD *)this + 1) || (*(_DWORD *)(v24 + 352) & 0x20) != 0 )
  {
    v31 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 2) = v20;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v19;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v58, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v17[42] == 5 )
      {
        v40 = *v31;
        v41 = *((_DWORD *)this + 3);
        v42 = *((_DWORD *)this + 6);
        v43 = *((_DWORD *)this + 7);
        if ( (((unsigned __int8)v43 | (unsigned __int8)(v42 | v41 | *(_BYTE *)v31)) & 0xF) == 0 )
        {
          v44 = 4;
          if ( v40 <= v42 )
            v44 = -4;
          *((_DWORD *)this + 4) -= v44;
          *((_DWORD *)this + 6) = v42 - v44;
          if ( v43 <= v41 )
            v16 = -4;
          *v31 = v44 + v40;
          *((_DWORD *)this + 5) -= v16;
          *((_DWORD *)this + 3) = v41 - v16;
          *((_DWORD *)this + 7) = v16 + v43;
        }
      }
    }
    if ( v23 )
    {
      v45 = v17[40];
      v46 = v45;
      v47 = *(_DWORD *)v6;
      v57 = v45;
      v56 = v45;
      if ( *((_DWORD *)this + 18) < v47 )
      {
        v46 = -v45;
        v56 = -v45;
      }
      if ( *((_DWORD *)this + 19) < *((_DWORD *)this + 17) )
      {
        v45 = -v45;
        v57 = v45;
      }
      v55 = v45;
      v54 = -v46;
      EXFORMOBJ::bXform((EXFORMOBJ *)v58, (struct _VECTORL *)&v54, (struct _VECTORFX *)&v54, 2uLL);
      v48 = v55 + 1;
      v49 = v57;
      v50 = v56 + 1;
      v51 = (v54 + 1) >> 1;
      *v31 += v51;
      v48 >>= 1;
      *((_DWORD *)this + 3) += v48;
      *((_DWORD *)this + 4) += v50 >> 1;
      *((_DWORD *)this + 5) += (v49 + 1) >> 1;
      *((_DWORD *)this + 6) -= v51;
      *((_DWORD *)this + 7) -= v48;
    }
  }
  else
  {
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v58, &v59, (struct _POINTFIX *)&v59, 2uLL);
    v25 = 16;
    if ( a5 && v17[42] == 5 )
    {
      v28 = v59.y;
      v26 = v61;
      v29 = v59.x;
      v27 = v60;
      if ( (((unsigned __int8)v60 | (unsigned __int8)(LOBYTE(v59.x) | v61 | LOBYTE(v59.y))) & 0xF) == 0 )
      {
        v38 = -4;
        v39 = -4;
        v25 = 32;
        if ( v60 > v59.x )
          v39 = 4;
        v27 = v39 + v60;
        v29 = v59.x - v39;
        if ( v61 > v59.y )
          v38 = 4;
        v28 = v59.y - v38;
        v26 = v38 + v61;
      }
    }
    else
    {
      v26 = v61;
      v27 = v60;
      v28 = v59.y;
      v29 = v59.x;
    }
    v30 = v26 - v28;
    if ( (int)abs32(v27 - v29) < v25 || (int)abs32(v30) < v25 )
    {
      *(_DWORD *)this = 1;
      return this;
    }
    if ( v27 - v29 <= 0 )
      v29 -= v25;
    else
      v27 -= v25;
    if ( v30 <= 0 )
      v28 -= v25;
    else
      v26 -= v25;
    v31 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = v28;
    *((_DWORD *)this + 2) = v27;
    *((_DWORD *)this + 4) = v29;
    *((_DWORD *)this + 5) = v28;
    *((_DWORD *)this + 6) = v29;
    *((_DWORD *)this + 7) = v26;
  }
  *((_QWORD *)this + 6) = *(_QWORD *)v31;
  *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
  *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
  return this;
}
