/*
 * XREFs of GreRectangle @ 0x1C01057D0
 * Callers:
 *     NtGdiRectangle @ 0x1C0105710 (NtGdiRectangle.c)
 * Callees:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000B808 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0105D00 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C013A0C8 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  LONG v6; // ebx
  POINTL *v8; // rcx
  POINTL v9; // rdx
  unsigned int v10; // edi
  int v11; // esi
  __int64 v12; // r14
  POINTL *v13; // rsi
  int v14; // edx
  int v15; // ecx
  LONG v16; // eax
  int v17; // ecx
  int v18; // ecx
  LONG v19; // eax
  unsigned int v20; // eax
  int v22; // ecx
  LONG v23; // eax
  int v24; // ecx
  int v25; // ecx
  LONG v26; // eax
  char v27; // r8
  LONG v28; // eax
  LONG left; // r14d
  int v30; // r11d
  POINTL v31; // rax
  LONG y; // ebx
  unsigned int v33; // ecx
  float v34; // xmm1_4
  int v35; // ebx
  int v36; // ecx
  int v37; // r8d
  int v38; // eax
  float v39; // xmm1_4
  int v40; // r8d
  int v41; // ebx
  int v42; // ecx
  int v43; // r8d
  int v44; // eax
  float v45; // xmm1_4
  int v46; // ebx
  int v47; // ecx
  char v48; // r8
  float v49; // xmm1_4
  int v50; // eax
  char v51; // r8
  int v52; // ebx
  char v53; // r8
  int v54; // ecx
  LONG v55; // eax
  int v56; // ecx
  int v57; // ecx
  LONG v58; // eax
  float v59; // xmm1_4
  int v60; // ebx
  char v61; // r8
  float v62; // xmm1_4
  char v63; // r8
  int v64; // ebx
  char v65; // r8
  int v66; // ecx
  LONG v67; // eax
  int v68; // ecx
  int v69; // ecx
  float v70; // xmm1_4
  int v71; // ebx
  char v72; // r8
  float v73; // xmm1_4
  char v74; // r8
  int v75; // ebx
  char v76; // r8
  int v77; // ecx
  POINTL v78; // rbx
  int v79; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v80; // [rsp+38h] [rbp-C8h] BYREF
  int v81; // [rsp+48h] [rbp-B8h]
  POINTL *v82[2]; // [rsp+50h] [rbp-B0h] BYREF
  LONG x; // [rsp+60h] [rbp-A0h]
  LINEATTRS *v84; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ v85[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v86[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v87; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v88; // [rsp+90h] [rbp-70h] BYREF
  PATHOBJ v89[11]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v90[32]; // [rsp+128h] [rbp+28h] BYREF
  int v91; // [rsp+148h] [rbp+48h]
  PATHOBJ v92[60]; // [rsp+3A0h] [rbp+2A0h] BYREF

  v6 = a3;
  v81 = a3;
  DCOBJ::DCOBJ((DCOBJ *)v82, a1);
  v8 = v82[0];
  if ( !v82[0] || (v82[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_65;
  }
  v9 = v82[0][10];
  v10 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)&v9 + 312LL) & 1) != 0 )
  {
    --a2;
    --a4;
  }
  v11 = *(_DWORD *)(*(_QWORD *)&v9 + 8LL);
  v80.left = a2;
  v80.top = v6;
  v80.right = a4;
  v80.bottom = a5;
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v82[0], *(_QWORD *)(*(_QWORD *)&v9 + 16LL));
    v8 = v82[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[10] + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v85, (struct XDCOBJ *)v82, 516);
  v12 = *(_QWORD *)&v85[0].ulReserved;
  v13 = v82[0];
  v14 = *(_DWORD *)(*(_QWORD *)&v85[0].ulReserved + 32LL);
  if ( (v14 & 1) == 0 || (x = v82[0][22].x, (x & 1) != 0) )
  {
LABEL_36:
    EBOX::EBOX((EBOX *)v86, (struct DCOBJ *)v82, (struct _RECTL *)&v80, (struct _LINEATTRS *)&v82[0][23], 0);
    if ( v86[0] )
      goto LABEL_20;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v89, (DC **)v82, 1);
    if ( v89[1] )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v89, 0LL, &v87)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v89, 0LL, &v88, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v89) )
      {
        if ( (v82[0][22].x & 1) == 0 )
        {
          v31 = v82[0][19];
          if ( v86[1] )
          {
            v78 = v82[0][18];
            v82[0][18] = v31;
            v82[0][41].y |= 1u;
            v33 = EPATHOBJ::bStrokeAndOrFill(v89, v82, 0LL, 0LL, 2u);
            v82[0][18] = v78;
            v82[0][41].y |= 1u;
          }
          else
          {
            y = v13[23].y;
            if ( (*(_DWORD *)(*(_QWORD *)&v31 + 48LL) & 0x800) != 0 )
              v13[23].y = 2;
            v33 = EPATHOBJ::bStrokeAndOrFill(v89, v82, (LINEATTRS *)&v13[23], v85, 3u);
            v13[23].y = y;
          }
          v10 = v33;
        }
        goto LABEL_47;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = 0;
LABEL_47:
    EPATHOBJ::vUnlock((EPATHOBJ *)v89);
    if ( v91 )
    {
      PopThreadGuardedObject(v90);
      v91 = 0;
    }
    goto LABEL_20;
  }
  if ( (struct PEN *)v82[0][19] != gpPenNull )
  {
    v84 = (LINEATTRS *)&v82[0][23];
    if ( (v82[0][23].x & 1) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v82[0][10] + 68LL) == 2 )
      {
        if ( (v14 & 2) != 0 )
        {
          v66 = (*(_DWORD *)(*(_QWORD *)&v85[0].ulReserved + 24LL) + 15) >> 4;
          v80.left = a2 + v66;
          v67 = v66 + a4;
          v68 = *(_DWORD *)(*(_QWORD *)&v85[0].ulReserved + 28LL);
          v80.right = v67;
          v69 = (v68 + 15) >> 4;
          v80.top = v69 + v6;
          v80.bottom = v69 + a5;
        }
        else
        {
          v70 = **(float **)&v85[0].ulReserved;
          v79 = 0;
          bFToL((float)a2 * v70, &v79, 0);
          v71 = *(_DWORD *)(v12 + 24);
          v80.left = (v71 + v79 + 15) >> 4;
          v79 = 0;
          bFToL((float)a4 * v70, &v79, v72);
          v73 = *(float *)(v12 + 12);
          v80.right = (v71 + v79 + 15) >> 4;
          v79 = 0;
          bFToL((float)v81 * v73, &v79, v74);
          v75 = *(_DWORD *)(v12 + 28);
          v80.top = (v75 + v79 + 15) >> 4;
          v79 = 0;
          bFToL((float)a5 * v73, &v79, v76);
          v77 = v79 + v75 + 15;
          v6 = v81;
          v80.bottom = v77 >> 4;
        }
        ERECTL::vOrder((ERECTL *)&v80);
        left = v80.left;
      }
      else
      {
        if ( (v14 & 2) != 0 )
        {
          v22 = ((*(int *)(*(_QWORD *)&v85[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v80.left = a2 + v22;
          v23 = v22 + a4;
          v24 = *(int *)(*(_QWORD *)&v85[0].ulReserved + 28LL) >> 3;
          v80.right = v23;
          v25 = (v24 + 1) >> 1;
          v80.top = v25 + v6;
          v26 = v25 + a5;
        }
        else
        {
          v34 = **(float **)&v85[0].ulReserved;
          v79 = 0;
          bFToL((float)a2 * v34, &v79, 0);
          v35 = *(_DWORD *)(v12 + 24);
          v36 = v35 + v79;
          v79 &= v37;
          v80.left = ((v36 >> 3) + 1) >> 1;
          bFToL((float)a4 * v34, &v79, v37);
          v38 = v35 + v79;
          v39 = *(float *)(v12 + 12);
          v79 &= v40;
          v80.right = ((v38 >> 3) + 1) >> 1;
          bFToL((float)v81 * v39, &v79, v40);
          v41 = *(_DWORD *)(v12 + 28);
          v42 = v41 + v79;
          v79 &= v43;
          v80.top = ((v42 >> 3) + 1) >> 1;
          bFToL((float)a5 * v39, &v79, v43);
          v44 = v41 + v79;
          v6 = v81;
          v26 = ((v44 >> 3) + 1) >> 1;
        }
        v80.bottom = v26;
        ERECTL::vOrder((ERECTL *)&v80);
        v28 = v80.bottom - 1;
        left = v80.left;
        --v80.right;
        --v80.bottom;
        if ( v80.left > v80.right || v80.top > v28 )
          goto LABEL_21;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)v92, (struct _RECTL *)&v80, v27 & 4);
      if ( (struct BRUSH *)v82[0][18] == gpbrNull )
      {
        if ( (v82[0][4].y & 0x40) != 0 )
        {
          v80.left = a2;
          v80.top = v6;
          v80.right = a4;
          v80.bottom = a5;
          XDCOBJ::vAccumulate((XDCOBJ *)v82, (struct ERECTL *)&v80);
        }
        goto LABEL_33;
      }
      v80.left = left + 1;
      v80.top = v30 + 1;
      if ( IsRectEmptyInl(&v80) || (unsigned int)GreRectBlt((struct DCOBJ *)v82, (struct ERECTL *)&v80) )
      {
LABEL_33:
        v20 = EPATHOBJ::bStrokeAndOrFill(v92, v82, v84, 0LL, 1u);
        goto LABEL_19;
      }
LABEL_65:
      v10 = 0;
      goto LABEL_20;
    }
    goto LABEL_36;
  }
  if ( (struct BRUSH *)v82[0][18] != gpbrNull || (v82[0][4].y & 0x40) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&v82[0][10] + 68LL) == 2 )
    {
      if ( (v14 & 2) != 0 )
      {
        v54 = (*(_DWORD *)(*(_QWORD *)&v85[0].ulReserved + 24LL) + 15) >> 4;
        v80.left = a2 + v54;
        v55 = v54 + a4;
        v56 = *(_DWORD *)(*(_QWORD *)&v85[0].ulReserved + 28LL);
        v80.right = v55;
        v57 = (v56 + 15) >> 4;
        v80.top = v57 + v6;
        v58 = v57 + a5;
      }
      else
      {
        v59 = **(float **)&v85[0].ulReserved;
        v79 = 0;
        bFToL((float)a2 * v59, &v79, 0);
        v60 = *(_DWORD *)(v12 + 24);
        v80.left = (v60 + v79 + 15) >> 4;
        v79 = 0;
        bFToL((float)a4 * v59, &v79, v61);
        v62 = *(float *)(v12 + 12);
        v80.right = (v60 + v79 + 15) >> 4;
        v79 = 0;
        bFToL((float)v81 * v62, &v79, v63);
        v64 = *(_DWORD *)(v12 + 28);
        v80.top = (v64 + v79 + 15) >> 4;
        v79 = 0;
        bFToL((float)a5 * v62, &v79, v65);
        v58 = (v64 + v79 + 15) >> 4;
      }
      v80.bottom = v58;
      ERECTL::vOrder((ERECTL *)&v80);
    }
    else
    {
      if ( (v14 & 2) != 0 )
      {
        v15 = ((*(int *)(*(_QWORD *)&v85[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v80.left = a2 + v15;
        v16 = v15 + a4;
        v17 = *(int *)(*(_QWORD *)&v85[0].ulReserved + 28LL) >> 3;
        v80.right = v16;
        v18 = (v17 + 1) >> 1;
        v80.top = v18 + v6;
        v19 = v18 + a5;
      }
      else
      {
        v45 = **(float **)&v85[0].ulReserved;
        v79 = 0;
        bFToL((float)a2 * v45, &v79, 0);
        v46 = *(_DWORD *)(v12 + 24);
        v47 = ((v46 + v79) >> 3) + 1;
        v79 = 0;
        v80.left = v47 >> 1;
        bFToL((float)a4 * v45, &v79, v48);
        v49 = *(float *)(v12 + 12);
        v50 = ((v46 + v79) >> 3) + 1;
        v79 = 0;
        v80.right = v50 >> 1;
        bFToL((float)v81 * v49, &v79, v51);
        v52 = *(_DWORD *)(v12 + 28);
        v80.top = (((v52 + v79) >> 3) + 1) >> 1;
        v79 = 0;
        bFToL((float)a5 * v49, &v79, v53);
        v19 = (((v52 + v79) >> 3) + 1) >> 1;
      }
      v80.bottom = v19;
      ERECTL::vOrder((ERECTL *)&v80);
      --v80.right;
      --v80.bottom;
    }
    if ( !IsRectEmptyInl(&v80) )
    {
      v20 = GreRectBlt((struct DCOBJ *)v82, (struct ERECTL *)&v80);
LABEL_19:
      v10 = v20;
LABEL_20:
      v13 = v82[0];
    }
  }
LABEL_21:
  if ( v13 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v82);
  return v10;
}
