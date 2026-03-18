/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188
 * Callers:
 *     NtGdiLineTo @ 0x1C00A60E0 (NtGdiLineTo.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074B8C (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0123538 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C0123874 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
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
  LONG y; // r12d
  unsigned int *v19; // r10
  int v20; // r9d
  LONG x; // r13d
  int v22; // r14d
  int v23; // esi
  LONG v24; // ecx
  DC *v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // r14d
  int v28; // r13d
  int v29; // esi
  int v30; // r12d
  unsigned __int64 v31; // rdx
  __int32 v32; // r8d
  __int32 v33; // r10d
  __int32 v34; // r11d
  char *v35; // r15
  struct ECLIPOBJ *v36; // rdx
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v40; // rcx
  char *v41; // r15
  struct REGION *v42; // rax
  struct _POINTFIX Current; // rax
  DC *v44; // r9
  _DWORD *v45; // rsi
  DC *v46; // rcx
  int v47; // edx
  DC *v48; // rcx
  int v49; // edx
  __int64 v50; // [rsp+28h] [rbp-D8h]
  DC *v51[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v52; // [rsp+60h] [rbp-A0h]
  unsigned int *v53; // [rsp+68h] [rbp-98h]
  LONG v54; // [rsp+70h] [rbp-90h]
  LONG v55; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v56; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v57; // [rsp+80h] [rbp-80h] BYREF
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  int v60; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+94h] [rbp-6Ch]
  LINEATTRS *v62; // [rsp+98h] [rbp-68h]
  BOOL (__stdcall *v63)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+A0h] [rbp-60h]
  struct _XFORMOBJ v64[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-48h]
  __m128i v66; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v67; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v68[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __m128i v71; // [rsp+130h] [rbp+30h] BYREF
  PATHOBJ ppo; // [rsp+140h] [rbp+40h] BYREF
  __int64 v73; // [rsp+148h] [rbp+48h]
  char v74[32]; // [rsp+198h] [rbp+98h] BYREF
  int v75; // [rsp+1B8h] [rbp+B8h]

  v3 = a2;
  v54 = a2;
  v55 = a3;
  v4 = 0;
  v5 = a3;
  v51[1] = 0LL;
  v6 = 1;
  XDCOBJ::vLock(v51, a1);
  if ( !v51[0] )
  {
    v6 = 0;
    EngSetLastError(6u);
    return v6;
  }
  if ( (*((_DWORD *)v51[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v6 = 0;
LABEL_56:
    XDCOBJ::RestoreAttributes((XDCOBJ *)v51);
    _InterlockedDecrement((volatile signed __int32 *)v51[0] + 3);
    return v6;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v64, (struct XDCOBJ *)v51, 516);
  v7 = v51[0];
  v8 = *((_QWORD *)v51[0] + 10);
  v9 = (LINEATTRS *)((char *)v51[0] + 184);
  v62 = (LINEATTRS *)((char *)v51[0] + 184);
  v10 = *(_DWORD *)(v8 + 8);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v51[0], *(_QWORD *)(v8 + 16));
    v7 = v51[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 10) + 24LL));
    v7 = v51[0];
  }
  if ( (v9->fl & 0xB) != 0
    || (*((_DWORD *)v7 + 44) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v64[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v7 + 10) + 68LL) == 2 )
  {
LABEL_51:
    v56.x = v3;
    v56.y = v5;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v51, 1);
    if ( v73 )
    {
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v64, &v56, 1u) )
      {
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
        v44 = v51[0];
        *(_DWORD *)(*((_QWORD *)v51[0] + 10) + 8LL) &= 0xFFFFFCFF;
        *(struct _POINTL *)(*((_QWORD *)v44 + 10) + 76LL) = v56;
        *(_DWORD *)(*((_QWORD *)v44 + 10) + 84LL) = *(_DWORD *)Current.x;
        *(_DWORD *)(*((_QWORD *)v44 + 10) + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
        if ( (*((_DWORD *)v51[0] + 44) & 1) == 0
          && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v51, v9, v64, 1u) )
        {
          v6 = 0;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v75 )
      PopThreadGuardedObject(v74);
    goto LABEL_56;
  }
  v69 = 0LL;
  v70 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v68, (struct XDCOBJ *)v51, 0);
  if ( (v68[24] & 1) == 0 )
  {
    v6 = XDCOBJ::bFullScreen((XDCOBJ *)v51);
    goto LABEL_43;
  }
  v11 = v51[0];
  v12 = *((_QWORD *)v51[0] + 64);
  v65 = v12;
  if ( !v12 )
    goto LABEL_70;
  v13 = *(_DWORD *)(v12 + 112);
  if ( (v13 & 0x100) != 0 )
  {
    v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v51[0] + 6) + 2952LL);
  }
  else
  {
    if ( *(_WORD *)(v12 + 100) || (v13 & 0x20) != 0 )
      goto LABEL_70;
    v14 = EngLineTo;
  }
  v63 = v14;
  if ( !v14 )
  {
LABEL_70:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v68);
LABEL_71:
    v9 = v62;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v64[0].ulReserved + 32LL) & 2) != 0 )
  {
    v15 = (_DWORD *)*((_QWORD *)v51[0] + 10);
    v16 = *(int *)(*(_QWORD *)&v64[0].ulReserved + 24LL) >> 4;
    v17 = *(int *)(*(_QWORD *)&v64[0].ulReserved + 28LL) >> 4;
    y = v17 + v5;
    v19 = v15 + 2;
    v20 = v15[2];
    x = v3 + v16;
    if ( (v20 & 0x100) != 0 )
    {
      v22 = (int)v15[21] >> 4;
      v23 = (int)v15[22] >> 4;
    }
    else
    {
      v22 = v16 + v15[19];
      v23 = v17 + v15[20];
    }
  }
  else
  {
    v45 = (_DWORD *)*((_QWORD *)v51[0] + 10);
    v57.x = v3;
    v57.y = v5;
    v53 = v45 + 2;
    v52 = v45[2];
    if ( (v52 & 0x200) != 0 )
    {
      v58 = v45[19];
      v59 = v45[20];
      EXFORMOBJ::bXform((EXFORMOBJ *)v64, &v57, 2LL);
      v22 = v58;
      v23 = v59;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v64, &v57, 1LL);
      v22 = (int)v45[21] >> 4;
      v23 = (int)v45[22] >> 4;
    }
    x = v57.x;
    y = v57.y;
    v20 = v52;
    v19 = v53;
  }
  LODWORD(v53) = v23;
  v61 = v22;
  v60 = v23;
  v52 = v22;
  if ( (unsigned int)(x + 134217726) > 0xFFFFFFC || (unsigned int)(y + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    goto LABEL_74;
  }
  v24 = v54;
  *v19 = v20 & 0xFFFFFCFF;
  *(_DWORD *)(*((_QWORD *)v11 + 10) + 76LL) = v24;
  *(_DWORD *)(*((_QWORD *)v11 + 10) + 80LL) = v55;
  *(_DWORD *)(*((_QWORD *)v11 + 10) + 84LL) = 16 * x;
  *(_DWORD *)(*((_QWORD *)v11 + 10) + 88LL) = 16 * y;
  v25 = v51[0];
  v26 = (*((_DWORD *)v51[0] + 10) & 1) != 0 ? 8 : 0;
  v27 = *(_DWORD *)((char *)v51[0] + v26 + 1432) + v22;
  v28 = *(_DWORD *)((char *)v51[0] + v26 + 1432) + x;
  v29 = *(_DWORD *)((char *)v51[0] + v26 + 1436) + v23;
  v30 = *(_DWORD *)((char *)v51[0] + v26 + 1436) + y;
  if ( v27 + 134217726 > 0xFFFFFFC
    || (unsigned int)(v29 + 134217726) > 0xFFFFFFC
    || (unsigned int)(v28 + 134217726) > 0xFFFFFFC
    || (unsigned int)(v30 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    v48 = v51[0];
    v49 = 16 * v61;
    *(_DWORD *)(*((_QWORD *)v51[0] + 10) + 8LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v48 + 10) + 8LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v48 + 10) + 84LL) = v49;
    *(_DWORD *)(*((_QWORD *)v48 + 10) + 88LL) = 16 * (_DWORD)v53;
LABEL_74:
    XDCOBJ::RestoreAttributes((XDCOBJ *)v51);
    _InterlockedDecrement((volatile signed __int32 *)v51[0] + 3);
    goto LABEL_44;
  }
  if ( (int)v27 > v28 )
  {
    v31 = (unsigned int)v28;
    v32 = v27 + 1;
  }
  else
  {
    v31 = v27;
    v32 = v28 + 1;
  }
  v71.m128i_i32[2] = v32;
  v71.m128i_i32[0] = v31;
  if ( v29 > v30 )
  {
    v33 = v30;
    v71.m128i_i32[1] = v30;
    v34 = v29 + 1;
  }
  else
  {
    v33 = v29;
    v71.m128i_i32[1] = v29;
    v34 = v30 + 1;
  }
  v71.m128i_i32[3] = v34;
  if ( (*((_DWORD *)v51[0] + 9) & 0xE0) != 0 )
  {
    v66 = v71;
    XDCOBJ::vAccumulate((XDCOBJ *)v51, (struct ECLIPOBJ *)v31, &v66);
    v32 = v71.m128i_i32[2];
    LODWORD(v31) = v71.m128i_i32[0];
    v25 = v51[0];
    v34 = v71.m128i_i32[3];
    v33 = v71.m128i_i32[1];
  }
  if ( *((struct PEN **)v25 + 19) == gpPenNull )
    goto LABEL_43;
  v53 = 0LL;
  if ( (int)v31 >= *((_DWORD *)v25 + 354)
    && v32 <= *((_DWORD *)v25 + 356)
    && v33 >= *((_DWORD *)v25 + 355)
    && v34 <= *((_DWORD *)v25 + 357) )
  {
    goto LABEL_37;
  }
  v41 = (char *)v25 + 2200;
  v53 = (unsigned int *)((char *)v25 + 2200);
  v42 = XDCOBJ::prgnEffRao(v51);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v41, v42, (struct ERECTL *)&v71, 0);
  if ( !ERECTL::bEmpty((ERECTL *)(v41 + 4)) )
  {
    v25 = v51[0];
LABEL_37:
    v35 = (char *)v25 + 1744;
    if ( *((_DWORD *)v25 + 436) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v25 + 10) + 8LL) |= 2u;
      v25 = v51[0];
    }
    v36 = (struct ECLIPOBJ *)*((_QWORD *)v25 + 10);
    v37 = *((_DWORD *)v36 + 2);
    if ( (((unsigned __int8)v37 | *((_BYTE *)v25 + 332)) & 2) != 0 )
    {
      *((_DWORD *)v36 + 2) = v37 & 0xFFFFFFFD;
      v40 = v65;
      v50 = v65;
      *((_DWORD *)v51[0] + 83) &= ~2u;
      EBRUSHOBJ::vInitBrush(
        v35,
        v51[0],
        *((_QWORD *)v51[0] + 19),
        *((_QWORD *)v51[0] + 12),
        *(_QWORD *)(v40 + 128),
        v50,
        0);
      v25 = v51[0];
    }
    if ( (*((_DWORD *)v25 + 9) & 0xE0) != 0 && (*((_DWORD *)v35 + 32) & 0x100) == 0 )
    {
      v67 = v71;
      XDCOBJ::vAccumulateTight((XDCOBJ *)v51, v36, &v67);
    }
    v38 = v65;
    ++*(_DWORD *)(v65 + 92);
    if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, _QWORD, int, int, int, __m128i *, int))v63)(
           v38 + 24,
           v53,
           v35,
           v27,
           v29,
           v28,
           v30,
           &v71,
           ((((*(_BYTE *)(*((_QWORD *)v51[0] + 10) + 72LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v51[0] + 10)
                                                                                                + 72LL)
                                                                                     - 1) & 0xF)
                                                                                   + 1)) )
    {
      goto LABEL_43;
    }
    v46 = v51[0];
    v47 = 16 * v52;
    *(_DWORD *)(*((_QWORD *)v51[0] + 10) + 8LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v46 + 10) + 8LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v46 + 10) + 84LL) = v47;
    *(_DWORD *)(*((_QWORD *)v46 + 10) + 88LL) = 16 * v60;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v68);
    v3 = v54;
    v5 = v55;
    goto LABEL_71;
  }
LABEL_43:
  XDCOBJ::RestoreAttributes((XDCOBJ *)v51);
  v4 = v6;
  _InterlockedDecrement((volatile signed __int32 *)v51[0] + 3);
LABEL_44:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v68);
  return v4;
}
