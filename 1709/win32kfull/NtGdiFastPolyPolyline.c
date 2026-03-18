/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1C0135E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B184 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002C5DC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C01364F0 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0142F08 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C014327C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _POINTL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  struct ECLIPOBJ *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  ULONG64 v12; // rdx
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int *v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  struct _PATHRECORD *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  int v24; // r13d
  struct _POINTL *v25; // r10
  int v26; // edx
  int v27; // r8d
  struct _POINTL *v28; // rdi
  unsigned int *v29; // r10
  int v30; // r13d
  FIX xRight; // r8d
  FIX yBottom; // edx
  struct ECLIPOBJ *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r9
  char *v37; // r13
  __int64 v38; // r10
  int v39; // r8d
  struct REGION *v40; // rax
  struct ECLIPOBJ *v41; // rdx
  unsigned int v42; // eax
  int v43; // eax
  int v44; // [rsp+54h] [rbp-404h]
  struct ECLIPOBJ *v45[2]; // [rsp+58h] [rbp-400h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-3F0h]
  int v47; // [rsp+6Ch] [rbp-3ECh]
  int v48; // [rsp+70h] [rbp-3E8h]
  int v49; // [rsp+74h] [rbp-3E4h]
  unsigned int v50; // [rsp+78h] [rbp-3E0h]
  _BYTE *v51; // [rsp+80h] [rbp-3D8h]
  struct _POINTL *v52; // [rsp+88h] [rbp-3D0h]
  int v53; // [rsp+90h] [rbp-3C8h]
  int v54; // [rsp+94h] [rbp-3C4h]
  unsigned int v55; // [rsp+9Ch] [rbp-3BCh]
  int v56; // [rsp+A0h] [rbp-3B8h]
  unsigned int *v57; // [rsp+A8h] [rbp-3B0h]
  unsigned int *v58; // [rsp+B0h] [rbp-3A8h]
  char *v59; // [rsp+B8h] [rbp-3A0h]
  _QWORD v60[2]; // [rsp+C0h] [rbp-398h] BYREF
  unsigned int *v61; // [rsp+D0h] [rbp-388h]
  __m128i v62; // [rsp+D8h] [rbp-380h] BYREF
  int v63; // [rsp+F0h] [rbp-368h]
  int v64; // [rsp+F4h] [rbp-364h]
  char *v65; // [rsp+F8h] [rbp-360h]
  __int128 v66; // [rsp+100h] [rbp-358h]
  __int128 v67; // [rsp+110h] [rbp-348h]
  int v68; // [rsp+120h] [rbp-338h]
  __int64 v69; // [rsp+128h] [rbp-330h]
  int v70; // [rsp+130h] [rbp-328h]
  __int64 v71; // [rsp+138h] [rbp-320h]
  __int64 v72; // [rsp+140h] [rbp-318h]
  _BYTE v73[80]; // [rsp+150h] [rbp-308h] BYREF
  char v74; // [rsp+1A0h] [rbp-2B8h] BYREF
  struct _PATHRECORD *v75; // [rsp+1C0h] [rbp-298h]
  struct _PATHRECORD *v76; // [rsp+1C8h] [rbp-290h] BYREF
  struct _RECTFX v77; // [rsp+1D0h] [rbp-288h] BYREF
  int v78; // [rsp+1E8h] [rbp-270h]
  __int64 v79; // [rsp+1F0h] [rbp-268h]
  __m128i v80; // [rsp+2F0h] [rbp-168h] BYREF
  _BYTE v81[112]; // [rsp+300h] [rbp-158h] BYREF
  char v82[4]; // [rsp+370h] [rbp-E8h] BYREF
  __m128i v83[9]; // [rsp+374h] [rbp-E4h] BYREF

  v4 = a4;
  v57 = a3;
  v52 = a2;
  v51 = a2;
  v58 = a3;
  v50 = a4;
  v7 = 0;
  v46 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v45, a1);
  if ( !v45[0] || (*((_DWORD *)v45[0] + 9) & 0x10000) != 0 )
    goto LABEL_26;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v60, (struct XDCOBJ *)v45, 516);
  v9 = v45[0];
  v59 = (char *)v45[0] + 184;
  v10 = *((_QWORD *)v45[0] + 10);
  v11 = *(_DWORD *)(v10 + 8);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v45[0], *(_QWORD *)(v10 + 16));
    v9 = v45[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*((_QWORD *)v9 + 10) + 24LL));
    v9 = v45[0];
  }
  if ( !(_DWORD)v4 )
  {
    v8 = 1;
LABEL_26:
    DCOBJ::~DCOBJ((DCOBJ *)v45);
    return v8;
  }
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v12 = (ULONG64)&a3[v4];
      if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v45[0];
      }
    }
    v13 = 0;
    v55 = 0;
    v14 = v4;
    v56 = v4;
    v15 = a3;
    v61 = a3;
    do
    {
      v13 += *v15;
      v55 = v13;
      v61 = ++v15;
      v16 = v14-- == 1;
      v56 = v14;
    }
    while ( !v16 );
    if ( v13 <= 0x1FFFFFFF )
    {
      v17 = v13;
      if ( v17 * 8 && ((unsigned __int64)&a2[v17] > MmUserProbeAddress || &a2[v17] < a2) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v45[0];
      }
      v7 = v13;
      v46 = v13;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*((_DWORD *)v9 + 44) & 1) != 0
    || (*(_DWORD *)v59 & 3) != 0
    || *((_QWORD *)v59 + 3) )
  {
    goto LABEL_26;
  }
  v72 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v70 = 0;
  v68 = 0;
  v71 = 0LL;
  v69 = 0LL;
  v19 = 0LL;
  v51 = 0LL;
  v20 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v20 > 0x64 )
  {
    if ( (unsigned int)v20 <= 0x2710000 )
    {
      v19 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v20);
      v51 = v19;
    }
    if ( !v19 )
      goto LABEL_67;
  }
  else
  {
    v19 = (struct _PATHRECORD *)v81;
    v51 = v81;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v73, (struct XDCOBJ *)v45, 0);
  if ( (v73[24] & 1) == 0 )
  {
    v42 = XDCOBJ::bFullScreen((XDCOBJ *)v45);
    goto LABEL_57;
  }
  v21 = *((_DWORD *)v45[0] + 10) & 1;
  v22 = *((_DWORD *)v45[0] + 2 * v21 + 358);
  v53 = v22;
  v48 = v22;
  v23 = *((_DWORD *)v45[0] + 2 * v21 + 359);
  v54 = v23;
  v49 = v23;
  v24 = 1;
  v47 = 1;
  v44 = 0;
  v25 = v52;
  if ( (*(_DWORD *)(v60[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*((_QWORD *)v45[0] + 10) + 68LL) == 1
     || ((*(_BYTE *)(v60[0] + 24LL) | *(_BYTE *)(v60[0] + 28LL)) & 0xF) == 0) )
  {
    v26 = (*(int *)(v60[0] + 24LL) >> 4) + v22;
    v48 = v26;
    v27 = (*(int *)(v60[0] + 28LL) >> 4) + v23;
    v49 = v27;
    v28 = v52;
    v29 = v57;
  }
  else
  {
    v28 = (struct _POINTL *)((char *)v19 + v20 - 8LL * v7);
    v52 = v28;
    if ( *(_DWORD *)(*((_QWORD *)v45[0] + 10) + 68LL) == 2 )
    {
      v47 = 0;
      v43 = EXFORMOBJ::bXform((EXFORMOBJ *)v60, (struct _VECTORL *)v25, (struct _VECTORFX *)v28, v7);
      v26 = *(_DWORD *)(v60[0] + 24LL) + 16 * v53;
      v48 = v26;
      v27 = *(_DWORD *)(v60[0] + 28LL) + 16 * v54;
      v49 = v27;
    }
    else
    {
      v47 = 1;
      v43 = EXFORMOBJ::bXform((EXFORMOBJ *)v60, v25, v28, v7);
      v26 = v53;
      v27 = v54;
    }
    v24 = v43;
    v29 = v57;
  }
  v63 = v47 != 0 ? 4 : 0;
  v30 = bMakePathRecords(v19, v29, v7, v28, v4, v26, v27, &v77, &v76) & v24;
  if ( v47 )
  {
    v80 = (__m128i)v77;
    xRight = v77.xRight;
    yBottom = v77.yBottom;
    if ( (v77.xLeft & 0xF8000000) != 0
      || (v77.xRight & 0xF8000000) != 0
      || (v77.yTop & 0xF8000000) != 0
      || (v77.yBottom & 0xF8000000) != 0 )
    {
      v44 = 1;
    }
    v77.xLeft *= 16;
    v77.xRight *= 16;
    v77.yTop *= 16;
    v77.yBottom *= 16;
  }
  else
  {
    v80.m128i_i32[0] = v77.xLeft >> 4;
    v80.m128i_i32[1] = v77.yTop >> 4;
    xRight = (v77.xRight + 15) >> 4;
    v80.m128i_i32[2] = xRight;
    yBottom = (v77.yBottom + 15) >> 4;
    v80.m128i_i32[3] = yBottom;
    if ( (v77.xRight ^ xRight) < 0 || (v77.yBottom ^ yBottom) < 0 )
      v44 = 1;
  }
  if ( yBottom == 0x7FFFFFFF || xRight == 0x7FFFFFFF )
  {
    v44 = 1;
  }
  else
  {
    v80.m128i_i32[3] = yBottom + 1;
    v80.m128i_i32[2] = xRight + 1;
  }
  if ( v30 )
  {
    v75 = v19;
    v78 = 0;
    v79 = 0LL;
    v64 = v7 - v4;
    v65 = &v74;
    v33 = v45[0];
    if ( (*((_DWORD *)v45[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v45, v45[0], &v80);
      v33 = v45[0];
    }
    if ( *((struct PEN **)v33 + 19) == gpPenNull )
      goto LABEL_61;
    v34 = *((_QWORD *)v33 + 64);
    if ( !v34 )
      goto LABEL_61;
    v35 = *(_QWORD *)(v34 + 128);
    v36 = *((_QWORD *)v33 + 12);
    v37 = (char *)v33 + 1744;
    if ( *((_DWORD *)v33 + 436) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v33 + 10) + 8LL) |= 2u;
      v33 = v45[0];
    }
    v38 = *((_QWORD *)v33 + 10);
    v39 = *(_DWORD *)(v38 + 8);
    if ( (((unsigned __int8)v39 | *((_BYTE *)v33 + 332)) & 2) != 0 )
    {
      *(_DWORD *)(v38 + 8) = v39 & 0xFFFFFFFD;
      *((_DWORD *)v45[0] + 83) &= ~2u;
      EBRUSHOBJ::vInitBrush(v37, v45[0], *((_QWORD *)v45[0] + 19), v36, v35, v34, 0);
    }
    v40 = XDCOBJ::prgnEffRao(v45);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v82, v40, (struct ERECTL *)&v80, v44);
    if ( ERECTL::bEmpty((ERECTL *)v83) )
    {
LABEL_61:
      v8 = 1;
      goto LABEL_58;
    }
    if ( (*((_DWORD *)v45[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v37 + 32) & 0x100) == 0 )
    {
      v62 = v83[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v45, v41, &v62);
    }
    ++*(_DWORD *)(v34 + 92);
    v42 = _guard_dispatch_icall_fptr();
LABEL_57:
    v8 = v42;
LABEL_58:
    if ( v19 != (struct _PATHRECORD *)v81 )
      FreeTmpBuffer(v19);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v73);
    goto LABEL_26;
  }
  if ( v19 != (struct _PATHRECORD *)v81 )
    FreeTmpBuffer(v19);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v73);
LABEL_67:
  DCOBJ::~DCOBJ((DCOBJ *)v45);
  return 0LL;
}
