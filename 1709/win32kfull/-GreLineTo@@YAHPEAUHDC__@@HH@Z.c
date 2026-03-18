/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E7D30
 * Callers:
 *     NtGdiLineTo @ 0x1C00E7C80 (NtGdiLineTo.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002C5DC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C012C3C4 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  unsigned int v4; // ebx
  LONG v5; // r12d
  unsigned int v6; // edi
  DC *v7; // r8
  __int64 v8; // rdx
  LINEATTRS *v9; // r15
  int v10; // esi
  DC *v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  BOOL (__stdcall *v14)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rax
  _DWORD *v15; // rcx
  int v16; // edx
  int v17; // r8d
  LONG v18; // r12d
  unsigned int *v19; // r10
  int v20; // r9d
  LONG v21; // r13d
  int x; // r14d
  int y; // esi
  LONG v24; // ecx
  DC *v25; // r8
  int v26; // eax
  unsigned int v27; // r14d
  int v28; // edx
  unsigned int v29; // r13d
  int v30; // esi
  int v31; // r12d
  unsigned __int64 v32; // rdx
  int v33; // r9d
  int v34; // r10d
  int v35; // r11d
  char *v36; // r15
  struct ECLIPOBJ *v37; // rdx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v41; // rcx
  char *v42; // r15
  struct REGION *v43; // rax
  struct _POINTFIX Current; // rax
  DC *v45; // r9
  __int64 v46; // rsi
  DC *v47; // rcx
  int v48; // edx
  DC *v49; // rcx
  int v50; // edx
  __int64 v51; // [rsp+28h] [rbp-D8h]
  DC *v52[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+60h] [rbp-A0h]
  unsigned int *v54; // [rsp+68h] [rbp-98h]
  struct _POINTL v55[2]; // [rsp+70h] [rbp-90h] BYREF
  LONG v56; // [rsp+80h] [rbp-80h]
  LONG v57; // [rsp+84h] [rbp-7Ch]
  struct _POINTL v58; // [rsp+88h] [rbp-78h] BYREF
  int v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+94h] [rbp-6Ch]
  LINEATTRS *v61; // [rsp+98h] [rbp-68h]
  BOOL (__stdcall *v62)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+A0h] [rbp-60h]
  struct _XFORMOBJ v63[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h]
  _BYTE v65[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  __int128 v68; // [rsp+110h] [rbp+10h] BYREF
  char v69[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v70; // [rsp+128h] [rbp+28h]
  char v71[32]; // [rsp+178h] [rbp+78h] BYREF
  int v72; // [rsp+198h] [rbp+98h]

  v3 = a2;
  v56 = a2;
  v57 = a3;
  v4 = 0;
  v5 = a3;
  v52[1] = 0LL;
  v6 = 1;
  XDCOBJ::vLock(v52, a1);
  if ( !v52[0] )
  {
    v6 = 0;
    EngSetLastError(6u);
    return v6;
  }
  if ( (*((_DWORD *)v52[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v6 = 0;
LABEL_56:
    XDCOBJ::vUnlockFast((XDCOBJ *)v52);
    return v6;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v63, (struct XDCOBJ *)v52, 516);
  v7 = v52[0];
  v8 = *((_QWORD *)v52[0] + 10);
  v9 = (LINEATTRS *)((char *)v52[0] + 184);
  v61 = (LINEATTRS *)((char *)v52[0] + 184);
  v10 = *(_DWORD *)(v8 + 8);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v52[0], *(_QWORD *)(v8 + 16));
    v7 = v52[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 10) + 24LL));
    v7 = v52[0];
  }
  if ( (v9->fl & 0xB) != 0
    || (*((_DWORD *)v7 + 44) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v63[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v7 + 10) + 68LL) == 2 )
  {
LABEL_51:
    v58.x = v3;
    v58.y = v5;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v69, (struct XDCOBJ *)v52, 1);
    if ( v70 )
    {
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)v69, (struct EXFORMOBJ *)v63, &v58, 1u) )
      {
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v69);
        v45 = v52[0];
        *(_DWORD *)(*((_QWORD *)v52[0] + 10) + 8LL) &= 0xFFFFFCFF;
        *(struct _POINTL *)(*((_QWORD *)v45 + 10) + 76LL) = v58;
        *(_DWORD *)(*((_QWORD *)v45 + 10) + 84LL) = *(_DWORD *)Current.x;
        *(_DWORD *)(*((_QWORD *)v45 + 10) + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
        if ( (*((_DWORD *)v52[0] + 44) & 1) == 0
          && !(unsigned int)EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v69, (struct XDCOBJ *)v52, v9, v63, 1u) )
        {
          v6 = 0;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v69);
    if ( v72 )
      PopThreadGuardedObject(v71);
    goto LABEL_56;
  }
  v66 = 0LL;
  v67 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v65, (struct XDCOBJ *)v52, 0);
  if ( (v65[24] & 1) == 0 )
  {
    v6 = XDCOBJ::bFullScreen((XDCOBJ *)v52);
    goto LABEL_43;
  }
  v11 = v52[0];
  v12 = *((_QWORD *)v52[0] + 64);
  v64 = v12;
  if ( !v12 )
    goto LABEL_70;
  v13 = *(_DWORD *)(v12 + 112);
  if ( (v13 & 0x100) != 0 )
  {
    v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v52[0] + 6) + 2952LL);
  }
  else
  {
    if ( *(_WORD *)(v12 + 100) || (v13 & 0x20) != 0 )
      goto LABEL_70;
    v14 = EngLineTo;
  }
  v62 = v14;
  if ( !v14 )
  {
LABEL_70:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
LABEL_71:
    v9 = v61;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v63[0].ulReserved + 32LL) & 2) != 0 )
  {
    v15 = (_DWORD *)*((_QWORD *)v52[0] + 10);
    v16 = *(int *)(*(_QWORD *)&v63[0].ulReserved + 24LL) >> 4;
    v17 = *(int *)(*(_QWORD *)&v63[0].ulReserved + 28LL) >> 4;
    v18 = v17 + v5;
    v19 = v15 + 2;
    v20 = v15[2];
    v21 = v3 + v16;
    if ( (v20 & 0x100) != 0 )
    {
      x = (int)v15[21] >> 4;
      y = (int)v15[22] >> 4;
    }
    else
    {
      x = v16 + v15[19];
      y = v17 + v15[20];
    }
  }
  else
  {
    v46 = *((_QWORD *)v52[0] + 10);
    v55[0].x = v3;
    v55[0].y = v5;
    v54 = (unsigned int *)(v46 + 8);
    v53 = *(_DWORD *)(v46 + 8);
    if ( (v53 & 0x200) != 0 )
    {
      v55[1] = *(struct _POINTL *)(v46 + 76);
      EXFORMOBJ::bXform((EXFORMOBJ *)v63, v55, 2LL);
      x = v55[1].x;
      y = v55[1].y;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v63, v55, 1LL);
      x = *(int *)(v46 + 84) >> 4;
      y = *(int *)(v46 + 88) >> 4;
    }
    v21 = v55[0].x;
    v18 = v55[0].y;
    v20 = v53;
    v19 = v54;
  }
  LODWORD(v54) = y;
  v60 = x;
  v59 = y;
  v53 = x;
  if ( (unsigned int)(v21 + 134217726) > 0xFFFFFFC || (unsigned int)(v18 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    goto LABEL_74;
  }
  v24 = v56;
  *v19 = v20 & 0xFFFFFCFF;
  *(_DWORD *)(*((_QWORD *)v11 + 10) + 76LL) = v24;
  *(_DWORD *)(*((_QWORD *)v11 + 10) + 80LL) = v57;
  *(_DWORD *)(*((_QWORD *)v11 + 10) + 84LL) = 16 * v21;
  *(_DWORD *)(*((_QWORD *)v11 + 10) + 88LL) = 16 * v18;
  v25 = v52[0];
  v26 = *((_DWORD *)v52[0] + 2 * (*((_DWORD *)v52[0] + 10) & 1) + 358);
  v27 = v26 + x;
  v28 = *((_DWORD *)v52[0] + 2 * (*((_DWORD *)v52[0] + 10) & 1) + 359);
  v29 = v26 + v21;
  v30 = v28 + y;
  v31 = v28 + v18;
  if ( v27 + 134217726 > 0xFFFFFFC
    || (unsigned int)(v30 + 134217726) > 0xFFFFFFC
    || v29 + 134217726 > 0xFFFFFFC
    || (unsigned int)(v31 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    v49 = v52[0];
    v50 = 16 * v60;
    *(_DWORD *)(*((_QWORD *)v52[0] + 10) + 8LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v49 + 10) + 8LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v49 + 10) + 84LL) = v50;
    *(_DWORD *)(*((_QWORD *)v49 + 10) + 88LL) = 16 * (_DWORD)v54;
LABEL_74:
    XDCOBJ::vUnlockFast((XDCOBJ *)v52);
    goto LABEL_44;
  }
  if ( (int)v27 > (int)v29 )
  {
    v32 = v29;
    v33 = v27 + 1;
  }
  else
  {
    v32 = v27;
    v33 = v29 + 1;
  }
  DWORD2(v68) = v33;
  LODWORD(v68) = v32;
  if ( v30 > v31 )
  {
    v34 = v31;
    DWORD1(v68) = v31;
    v35 = v30 + 1;
  }
  else
  {
    v34 = v30;
    DWORD1(v68) = v30;
    v35 = v31 + 1;
  }
  HIDWORD(v68) = v35;
  if ( (*((_DWORD *)v52[0] + 9) & 0xE0) != 0 )
  {
    *(_OWORD *)&v55[0].x = v68;
    XDCOBJ::vAccumulate((XDCOBJ *)v52, (struct ECLIPOBJ *)v32, (__m128i *)v55);
    v33 = DWORD2(v68);
    LODWORD(v32) = v68;
    v25 = v52[0];
    v35 = HIDWORD(v68);
    v34 = DWORD1(v68);
  }
  if ( *((struct PEN **)v25 + 19) == gpPenNull )
    goto LABEL_43;
  v54 = 0LL;
  if ( (int)v32 >= *((_DWORD *)v25 + 354)
    && v33 <= *((_DWORD *)v25 + 356)
    && v34 >= *((_DWORD *)v25 + 355)
    && v35 <= *((_DWORD *)v25 + 357) )
  {
    goto LABEL_37;
  }
  v42 = (char *)v25 + 2200;
  v54 = (unsigned int *)((char *)v25 + 2200);
  v43 = XDCOBJ::prgnEffRao(v52);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v42, v43, (struct ERECTL *)&v68, 0);
  if ( !ERECTL::bEmpty((ERECTL *)(v42 + 4)) )
  {
    v25 = v52[0];
LABEL_37:
    v36 = (char *)v25 + 1744;
    if ( *((_DWORD *)v25 + 436) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v25 + 10) + 8LL) |= 2u;
      v25 = v52[0];
    }
    v37 = (struct ECLIPOBJ *)*((_QWORD *)v25 + 10);
    v38 = *((_DWORD *)v37 + 2);
    if ( (((unsigned __int8)v38 | *((_BYTE *)v25 + 332)) & 2) != 0 )
    {
      *((_DWORD *)v37 + 2) = v38 & 0xFFFFFFFD;
      v41 = v64;
      v51 = v64;
      *((_DWORD *)v52[0] + 83) &= ~2u;
      EBRUSHOBJ::vInitBrush(
        v36,
        v52[0],
        *((_QWORD *)v52[0] + 19),
        *((_QWORD *)v52[0] + 12),
        *(_QWORD *)(v41 + 128),
        v51,
        0);
      v25 = v52[0];
    }
    if ( (*((_DWORD *)v25 + 9) & 0xE0) != 0 && (*((_DWORD *)v36 + 32) & 0x100) == 0 )
    {
      *(_OWORD *)&v55[0].x = v68;
      XDCOBJ::vAccumulateTight((XDCOBJ *)v52, v37, (__m128i *)v55);
    }
    v39 = v64;
    ++*(_DWORD *)(v64 + 92);
    if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, _QWORD, int, unsigned int, int, __int128 *, int))v62)(
           v39 + 24,
           v54,
           v36,
           v27,
           v30,
           v29,
           v31,
           &v68,
           (((*(_BYTE *)(*((_QWORD *)v52[0] + 10) + 72LL) - 1) & 0xF) + 1) | ((((*(_BYTE *)(*((_QWORD *)v52[0] + 10)
                                                                                          + 72LL)
                                                                               - 1) & 0xF)
                                                                             + 1) << 8)) )
    {
      goto LABEL_43;
    }
    v47 = v52[0];
    v48 = 16 * v53;
    *(_DWORD *)(*((_QWORD *)v52[0] + 10) + 8LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v47 + 10) + 8LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v47 + 10) + 84LL) = v48;
    *(_DWORD *)(*((_QWORD *)v47 + 10) + 88LL) = 16 * v59;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
    v3 = v56;
    v5 = v57;
    goto LABEL_71;
  }
LABEL_43:
  XDCOBJ::vUnlockFast((XDCOBJ *)v52);
  v4 = v6;
LABEL_44:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
  return v4;
}
