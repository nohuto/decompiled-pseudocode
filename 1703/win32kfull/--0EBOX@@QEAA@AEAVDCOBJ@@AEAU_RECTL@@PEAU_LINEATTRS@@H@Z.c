/*
 * XREFs of ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C028ED54
 * Callers:
 *     GreRectangle @ 0x1C00F9578 (GreRectangle.c)
 *     NtGdiEllipse @ 0x1C027EE20 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C027F050 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C028FEB0 (NtGdiArcInternal.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C007DA94 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C011D418 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  ERECTL *v6; // rdi
  __int64 v10; // rcx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // r14d
  int v18; // ecx
  _DWORD *v19; // r15
  LONG v20; // r11d
  LONG v21; // r13d
  LONG y; // r9d
  LONG x; // r10d
  int v24; // r12d
  float v25; // xmm2_4
  int v26; // r9d
  int v27; // r11d
  __int64 v28; // rcx
  signed int v29; // r11d
  LONG v30; // ecx
  LONG v31; // r9d
  LONG v32; // r8d
  LONG v33; // r10d
  int v34; // edx
  int v35; // eax
  int v36; // edi
  int *v37; // rsi
  int v38; // r11d
  int v39; // r9d
  int v40; // r8d
  int v41; // r10d
  int v42; // ecx
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // r8d
  float v51; // [rsp+20h] [rbp-50h] BYREF
  float v52; // [rsp+24h] [rbp-4Ch] BYREF
  int v53; // [rsp+28h] [rbp-48h] BYREF
  int v54; // [rsp+2Ch] [rbp-44h]
  int v55; // [rsp+30h] [rbp-40h]
  int v56; // [rsp+34h] [rbp-3Ch]
  _BYTE v57[16]; // [rsp+40h] [rbp-30h] BYREF
  struct _POINTL v58; // [rsp+50h] [rbp-20h] BYREF
  LONG v59; // [rsp+58h] [rbp-18h]
  LONG v60; // [rsp+5Ch] [rbp-14h]

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
  }
  else
  {
    v11 = *(_DWORD *)(v10 + 352) & 0x100;
    if ( v11 && (v12 = *(_DWORD *)v6, v13 = *((_DWORD *)this + 18), *(_DWORD *)v6 < v13)
      || !v11 && (v12 = *(_DWORD *)v6, v13 = *((_DWORD *)this + 18), *(_DWORD *)v6 > v13) )
    {
      *(_DWORD *)v6 = v13;
      *((_DWORD *)this + 18) = v12;
    }
    v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x200;
    if ( v14 && (v15 = *((_DWORD *)this + 17), v16 = *((_DWORD *)this + 19), v15 < v16)
      || !v14 && (v15 = *((_DWORD *)this + 17), v16 = *((_DWORD *)this + 19), v15 > v16) )
    {
      *((_DWORD *)this + 19) = v15;
      *((_DWORD *)this + 17) = v16;
    }
  }
  v17 = 4;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 4) != 0 )
  {
    v18 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v18;
  }
  v58 = *(struct _POINTL *)v6;
  v59 = *((_DWORD *)v6 + 2);
  v60 = *((_DWORD *)v6 + 3);
  v19 = *(_DWORD **)(*(_QWORD *)a2 + 152LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v57, a2, 516);
  v20 = v60;
  v21 = v59;
  y = v58.y;
  x = v58.x;
  if ( (v19[12] & 0x10000) == 0 || (a4->fl & 1) == 0 )
    goto LABEL_24;
  v24 = 1;
  v25 = (float)(v19[40] >> 1);
  if ( (v19[40] & 1) != 0 )
    v25 = v25 + FP_0_5;
  LODWORD(v51) = efHalfDiff(v58.x, v59);
  LODWORD(v52) = efHalfDiff(v26, v27);
  EFLOAT::vAbs((EFLOAT *)&v51);
  EFLOAT::vAbs((EFLOAT *)&v52);
  if ( v25 > v51 || v25 > v52 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_24:
    v24 = 0;
  }
  v28 = *(_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_DWORD *)(v28 + 68) == 2 || v24 || *((_DWORD *)this + 1) || (*(_DWORD *)(v28 + 352) & 0x20) != 0 )
  {
    v37 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 2) = v21;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v20;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v57, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v19[42] == 5 )
      {
        v38 = *v37;
        v39 = *((_DWORD *)this + 3);
        v40 = *((_DWORD *)this + 6);
        v41 = *((_DWORD *)this + 7);
        if ( (((unsigned __int8)v41 | (unsigned __int8)(v40 | v39 | *(_BYTE *)v37)) & 0xF) == 0 )
        {
          v42 = 4;
          if ( v38 <= v40 )
            v42 = -4;
          *((_DWORD *)this + 4) -= v42;
          *((_DWORD *)this + 6) = v40 - v42;
          if ( v41 <= v39 )
            v17 = -4;
          *v37 = v42 + v38;
          *((_DWORD *)this + 5) -= v17;
          *((_DWORD *)this + 3) = v39 - v17;
          *((_DWORD *)this + 7) = v41 + v17;
        }
      }
    }
    if ( v24 )
    {
      v43 = v19[40];
      v44 = v43;
      v45 = *(_DWORD *)v6;
      v56 = v43;
      v55 = v43;
      if ( *((_DWORD *)this + 18) < v45 )
      {
        v44 = -v43;
        v55 = -v43;
      }
      if ( *((_DWORD *)this + 19) < *((_DWORD *)this + 17) )
      {
        v43 = -v43;
        v56 = v43;
      }
      v54 = v43;
      v53 = -v44;
      EXFORMOBJ::bXform((EXFORMOBJ *)v57, (struct _VECTORL *)&v53, (struct _VECTORFX *)&v53, 2uLL);
      v46 = v54 + 1;
      v47 = v56;
      v48 = v55 + 1;
      v49 = (v53 + 1) >> 1;
      *v37 += v49;
      v46 >>= 1;
      *((_DWORD *)this + 3) += v46;
      *((_DWORD *)this + 4) += v48 >> 1;
      *((_DWORD *)this + 5) += (v47 + 1) >> 1;
      *((_DWORD *)this + 6) -= v49;
      *((_DWORD *)this + 7) -= v46;
    }
    goto LABEL_62;
  }
  EXFORMOBJ::bXformRound((EXFORMOBJ *)v57, &v58, (struct _POINTFIX *)&v58, 2uLL);
  v29 = 16;
  if ( a5 && v19[42] == 5 )
  {
    v30 = v58.y;
    v31 = v60;
    v32 = v58.x;
    v33 = v59;
    if ( (((unsigned __int8)v59 | (unsigned __int8)(LOBYTE(v58.x) | v60 | LOBYTE(v58.y))) & 0xF) == 0 )
    {
      v34 = -4;
      v35 = -4;
      v29 = 32;
      if ( v59 > v58.x )
        v35 = 4;
      v33 = v35 + v59;
      v32 = v58.x - v35;
      if ( v60 > v58.y )
        v34 = 4;
      v30 = v58.y - v34;
      v31 = v34 + v60;
    }
  }
  else
  {
    v31 = v60;
    v33 = v59;
    v30 = v58.y;
    v32 = v58.x;
  }
  v36 = v31 - v30;
  if ( (int)abs32(v33 - v32) >= v29 && (int)abs32(v36) >= v29 )
  {
    if ( v33 - v32 <= 0 )
      v32 -= v29;
    else
      v33 -= v29;
    if ( v36 <= 0 )
      v30 -= v29;
    else
      v31 -= v29;
    v37 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = v30;
    *((_DWORD *)this + 2) = v33;
    *((_DWORD *)this + 4) = v32;
    *((_DWORD *)this + 5) = v30;
    *((_DWORD *)this + 6) = v32;
    *((_DWORD *)this + 7) = v31;
LABEL_62:
    *((_QWORD *)this + 6) = *(_QWORD *)v37;
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
  *(_DWORD *)this = 1;
  return this;
}
