/*
 * XREFs of GreRectangle @ 0x1C00F9578
 * Callers:
 *     NtGdiRectangle @ 0x1C00F94C0 (NtGdiRectangle.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F997C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0123538 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C0135184 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C028ED54 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // ecx
  LONG v15; // eax
  int v16; // ecx
  int v17; // ecx
  LONG v18; // eax
  unsigned int v19; // eax
  int v21; // ecx
  LONG v22; // eax
  int v23; // ecx
  int v24; // ecx
  LONG v25; // eax
  char v26; // r9
  LONG v27; // eax
  LONG left; // ebx
  int v29; // r11d
  int v30; // ecx
  int v31; // r8d
  int v32; // eax
  int v33; // r8d
  int v34; // ecx
  int v35; // r8d
  char v36; // r8
  char v37; // r8
  char v38; // r8
  int v39; // ecx
  LONG v40; // eax
  int v41; // ecx
  int v42; // ecx
  LONG v43; // eax
  char v44; // r8
  char v45; // r8
  char v46; // r8
  int v47; // ecx
  LONG v48; // eax
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // r8d
  int v53; // eax
  int v54; // r8d
  int v55; // ecx
  int v56; // r8d
  LINEATTRS *v57; // rbx
  __int64 v58; // rax
  ULONG iJoin; // edi
  unsigned int v60; // ecx
  __int64 v61; // rbx
  int v62; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v63; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v64[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+58h] [rbp-A8h]
  LINEATTRS *v66; // [rsp+60h] [rbp-A0h]
  struct _XFORMOBJ v67[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v68[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v69; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v70; // [rsp+90h] [rbp-70h] BYREF
  PATHOBJ v71; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-28h]
  _BYTE v73[32]; // [rsp+128h] [rbp+28h] BYREF
  int v74; // [rsp+148h] [rbp+48h]
  PATHOBJ ppo; // [rsp+3A0h] [rbp+2A0h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v64, a1);
  v8 = v64[0];
  if ( !v64[0] || (*(_DWORD *)(v64[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_62;
  }
  v9 = *(_QWORD *)(v64[0] + 80LL);
  v10 = 1;
  if ( (*(_DWORD *)(v9 + 312) & 1) != 0 )
  {
    --a2;
    --a4;
  }
  v11 = *(_DWORD *)(v9 + 8);
  v63.left = a2;
  v63.top = a3;
  v63.right = a4;
  v63.bottom = a5;
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v64[0], *(_QWORD *)(v9 + 16));
    v8 = v64[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)(v8 + 80) + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v67, (struct XDCOBJ *)v64, 516);
  v12 = *(_QWORD *)&v67[0].ulReserved;
  v13 = *(_DWORD *)(*(_QWORD *)&v67[0].ulReserved + 32LL);
  if ( (v13 & 1) == 0 || (v65 = *(_DWORD *)(v64[0] + 176LL), (v65 & 1) != 0) )
  {
LABEL_45:
    v57 = (LINEATTRS *)(v64[0] + 184LL);
    EBOX::EBOX((EBOX *)v68, (struct DCOBJ *)v64, (struct _RECTL *)&v63, (struct _LINEATTRS *)(v64[0] + 184LL), 0);
    if ( v68[0] )
      goto LABEL_20;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v71, (struct XDCOBJ *)v64, 1);
    if ( v72 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v71, 0LL, &v69)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v71, 0LL, &v70, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v71) )
      {
        if ( (*(_DWORD *)(v64[0] + 176LL) & 1) == 0 )
        {
          v58 = *(_QWORD *)(v64[0] + 152LL);
          if ( v68[1] )
          {
            v61 = *(_QWORD *)(v64[0] + 144LL);
            *(_QWORD *)(v64[0] + 144LL) = v58;
            *(_DWORD *)(v64[0] + 332LL) |= 1u;
            v60 = EPATHOBJ::bStrokeAndOrFill(&v71, (struct XDCOBJ *)v64, 0LL, 0LL, 2u);
            *(_QWORD *)(v64[0] + 144LL) = v61;
            *(_DWORD *)(v64[0] + 332LL) |= 1u;
          }
          else
          {
            iJoin = v57->iJoin;
            if ( (*(_DWORD *)(v58 + 48) & 0x800) != 0 )
              v57->iJoin = 2;
            v60 = EPATHOBJ::bStrokeAndOrFill(&v71, (struct XDCOBJ *)v64, v57, v67, 3u);
            v57->iJoin = iJoin;
          }
          v10 = v60;
        }
        goto LABEL_49;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = 0;
LABEL_49:
    EPATHOBJ::vUnlock((EPATHOBJ *)&v71);
    if ( v74 )
    {
      PopThreadGuardedObject(v73);
      v74 = 0;
    }
    goto LABEL_20;
  }
  if ( *(struct PEN **)(v64[0] + 152LL) != gpPenNull )
  {
    v66 = (LINEATTRS *)(v64[0] + 184LL);
    if ( (*(_DWORD *)(v64[0] + 184LL) & 1) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v64[0] + 80LL) + 68LL) == 2 )
      {
        if ( (v13 & 2) != 0 )
        {
          v47 = (*(_DWORD *)(*(_QWORD *)&v67[0].ulReserved + 24LL) + 15) >> 4;
          v63.left = a2 + v47;
          v48 = v47 + a4;
          v49 = *(_DWORD *)(*(_QWORD *)&v67[0].ulReserved + 28LL);
          v63.right = v48;
          v50 = (v49 + 15) >> 4;
          v63.top = v50 + a3;
          v63.bottom = v50 + a5;
        }
        else
        {
          v62 = 0;
          bFToL((float)a2 * **(float **)&v67[0].ulReserved, &v62, 0);
          v51 = v62;
          v62 &= v52;
          v63.left = (*(_DWORD *)(v12 + 24) + v51 + 15) >> 4;
          bFToL((float)a4 * *(float *)v12, &v62, v52);
          v53 = v62;
          v62 &= v54;
          v63.right = (*(_DWORD *)(v12 + 24) + v53 + 15) >> 4;
          bFToL((float)a3 * *(float *)(v12 + 12), &v62, v54);
          v55 = v62;
          v62 &= v56;
          v63.top = (*(_DWORD *)(v12 + 28) + v55 + 15) >> 4;
          bFToL((float)a5 * *(float *)(v12 + 12), &v62, v56);
          v63.bottom = (*(_DWORD *)(v12 + 28) + v62 + 15) >> 4;
        }
        ERECTL::vOrder((ERECTL *)&v63);
        left = v63.left;
      }
      else
      {
        if ( (v13 & 2) != 0 )
        {
          v21 = ((*(int *)(*(_QWORD *)&v67[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v63.left = a2 + v21;
          v22 = v21 + a4;
          v23 = *(int *)(*(_QWORD *)&v67[0].ulReserved + 28LL) >> 3;
          v63.right = v22;
          v24 = (v23 + 1) >> 1;
          v63.top = v24 + a3;
          v25 = v24 + a5;
        }
        else
        {
          v62 = 0;
          bFToL((float)a2 * **(float **)&v67[0].ulReserved, &v62, 0);
          v30 = *(_DWORD *)(v12 + 24) + v62;
          v62 &= v31;
          v63.left = ((v30 >> 3) + 1) >> 1;
          bFToL((float)a4 * *(float *)v12, &v62, v31);
          v32 = *(_DWORD *)(v12 + 24) + v62;
          v62 &= v33;
          v63.right = ((v32 >> 3) + 1) >> 1;
          bFToL((float)a3 * *(float *)(v12 + 12), &v62, v33);
          v34 = *(_DWORD *)(v12 + 28) + v62;
          v62 &= v35;
          v63.top = ((v34 >> 3) + 1) >> 1;
          bFToL((float)a5 * *(float *)(v12 + 12), &v62, v35);
          v25 = (((*(_DWORD *)(v12 + 28) + v62) >> 3) + 1) >> 1;
        }
        v63.bottom = v25;
        ERECTL::vOrder((ERECTL *)&v63);
        v27 = v63.bottom - 1;
        left = v63.left;
        --v63.right;
        --v63.bottom;
        if ( v63.left > v63.right || v63.top > v27 )
          goto LABEL_20;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, (struct _RECTL *)&v63, v26 & 4);
      if ( *(struct BRUSH **)(v64[0] + 144LL) == gpbrNull )
      {
        if ( (*(_DWORD *)(v64[0] + 36LL) & 0x40) != 0 )
        {
          v63.left = a2;
          v63.top = a3;
          v63.right = a4;
          v63.bottom = a5;
          XDCOBJ::vAccumulate((XDCOBJ *)v64, (struct ERECTL *)&v63);
        }
        goto LABEL_30;
      }
      v63.left = left + 1;
      v63.top = v29 + 1;
      if ( IsRectEmptyInl(&v63) || (unsigned int)GreRectBlt((struct DCOBJ *)v64, (struct ERECTL *)&v63) )
      {
LABEL_30:
        v19 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v64, v66, 0LL, 1u);
        goto LABEL_19;
      }
LABEL_62:
      v10 = 0;
      goto LABEL_20;
    }
    goto LABEL_45;
  }
  if ( *(struct BRUSH **)(v64[0] + 144LL) != gpbrNull || (*(_DWORD *)(v64[0] + 36LL) & 0x40) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v64[0] + 80LL) + 68LL) == 2 )
    {
      if ( (v13 & 2) != 0 )
      {
        v39 = (*(_DWORD *)(*(_QWORD *)&v67[0].ulReserved + 24LL) + 15) >> 4;
        v63.left = a2 + v39;
        v40 = v39 + a4;
        v41 = *(_DWORD *)(*(_QWORD *)&v67[0].ulReserved + 28LL);
        v63.right = v40;
        v42 = (v41 + 15) >> 4;
        v63.top = v42 + a3;
        v43 = v42 + a5;
      }
      else
      {
        v62 = 0;
        bFToL((float)a2 * **(float **)&v67[0].ulReserved, &v62, 0);
        v63.left = (*(_DWORD *)(v12 + 24) + v62 + 15) >> 4;
        v62 = 0;
        bFToL((float)a4 * *(float *)v12, &v62, v44);
        v63.right = (*(_DWORD *)(v12 + 24) + v62 + 15) >> 4;
        v62 = 0;
        bFToL((float)a3 * *(float *)(v12 + 12), &v62, v45);
        v63.top = (*(_DWORD *)(v12 + 28) + v62 + 15) >> 4;
        v62 = 0;
        bFToL((float)a5 * *(float *)(v12 + 12), &v62, v46);
        v43 = (*(_DWORD *)(v12 + 28) + v62 + 15) >> 4;
      }
      v63.bottom = v43;
      ERECTL::vOrder((ERECTL *)&v63);
    }
    else
    {
      if ( (v13 & 2) != 0 )
      {
        v14 = ((*(int *)(*(_QWORD *)&v67[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v63.left = a2 + v14;
        v15 = v14 + a4;
        v16 = *(int *)(*(_QWORD *)&v67[0].ulReserved + 28LL) >> 3;
        v63.right = v15;
        v17 = (v16 + 1) >> 1;
        v63.top = v17 + a3;
        v18 = v17 + a5;
      }
      else
      {
        v62 = 0;
        bFToL((float)a2 * **(float **)&v67[0].ulReserved, &v62, 0);
        v63.left = (((*(_DWORD *)(v12 + 24) + v62) >> 3) + 1) >> 1;
        v62 = 0;
        bFToL((float)a4 * *(float *)v12, &v62, v36);
        v63.right = (((*(_DWORD *)(v12 + 24) + v62) >> 3) + 1) >> 1;
        v62 = 0;
        bFToL((float)a3 * *(float *)(v12 + 12), &v62, v37);
        v63.top = (((*(_DWORD *)(v12 + 28) + v62) >> 3) + 1) >> 1;
        v62 = 0;
        bFToL((float)a5 * *(float *)(v12 + 12), &v62, v38);
        v18 = (((*(_DWORD *)(v12 + 28) + v62) >> 3) + 1) >> 1;
      }
      v63.bottom = v18;
      ERECTL::vOrder((ERECTL *)&v63);
      --v63.right;
      --v63.bottom;
    }
    if ( !IsRectEmptyInl(&v63) )
    {
      v19 = GreRectBlt((struct DCOBJ *)v64, (struct ERECTL *)&v63);
LABEL_19:
      v10 = v19;
    }
  }
LABEL_20:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v64);
  return v10;
}
