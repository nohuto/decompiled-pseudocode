/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1C0121530
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00743F8 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074B8C (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C01213C4 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C013C0B0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _POINTL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  struct ECLIPOBJ *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int *v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  struct _PATHRECORD *v18; // r14
  __int64 v19; // rdi
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // r13d
  struct _POINTL *v24; // r10
  int v25; // r8d
  int v26; // edx
  struct _POINTL *v27; // rdi
  unsigned int *v28; // r10
  int v29; // r13d
  FIX xRight; // r8d
  FIX yBottom; // edx
  struct ECLIPOBJ *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r9
  char *v36; // r13
  __int64 v37; // r10
  int v38; // r8d
  struct REGION *v39; // rax
  struct ECLIPOBJ *v40; // rdx
  unsigned int v41; // eax
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
    goto LABEL_60;
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
LABEL_60:
    DCOBJ::~DCOBJ((DCOBJ *)v45);
    return v8;
  }
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v12 = &a3[v4];
      if ( (unsigned __int64)v12 > W32UserProbeAddress || v12 < a3 )
      {
        *W32UserProbeAddress = 0;
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
      if ( v17 * 8 && ((unsigned __int64)&a2[v17] > W32UserProbeAddress || &a2[v17] < a2) )
      {
        *W32UserProbeAddress = 0;
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
    goto LABEL_60;
  }
  v72 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v70 = 0;
  v68 = 0;
  v71 = 0LL;
  v69 = 0LL;
  v18 = 0LL;
  v51 = 0LL;
  v19 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v19 > 0x64 )
  {
    if ( (unsigned int)v19 <= 0x2710000 )
    {
      v18 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v19);
      v51 = v18;
    }
    if ( !v18 )
      goto LABEL_67;
  }
  else
  {
    v18 = (struct _PATHRECORD *)v81;
    v51 = v81;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v73, (struct XDCOBJ *)v45, 0);
  if ( (v73[24] & 1) == 0 )
  {
    v41 = XDCOBJ::bFullScreen((XDCOBJ *)v45);
    goto LABEL_56;
  }
  v20 = *((_DWORD *)v45[0] + 10) & 1;
  v21 = *(_DWORD *)((char *)v45[0] + (v20 != 0 ? 8 : 0) + 1432);
  v53 = v21;
  v48 = v21;
  v22 = *(_DWORD *)((char *)v45[0] + (v20 != 0 ? 8 : 0) + 1436);
  v54 = v22;
  v49 = v22;
  v23 = 1;
  v47 = 1;
  v44 = 0;
  v24 = v52;
  if ( (*(_DWORD *)(v60[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*((_QWORD *)v45[0] + 10) + 68LL) == 1
     || ((*(_BYTE *)(v60[0] + 24LL) | *(_BYTE *)(v60[0] + 28LL)) & 0xF) == 0) )
  {
    v25 = (*(int *)(v60[0] + 24LL) >> 4) + v21;
    v48 = v25;
    v26 = (*(int *)(v60[0] + 28LL) >> 4) + v22;
    v49 = v26;
    v27 = v52;
    v28 = v57;
  }
  else
  {
    v27 = (struct _POINTL *)((char *)v18 + v19 - 8LL * v7);
    v52 = v27;
    if ( *(_DWORD *)(*((_QWORD *)v45[0] + 10) + 68LL) == 2 )
    {
      v47 = 0;
      v43 = EXFORMOBJ::bXform((EXFORMOBJ *)v60, (struct _VECTORL *)v24, (struct _VECTORFX *)v27, v7);
      v25 = *(_DWORD *)(v60[0] + 24LL) + 16 * v53;
      v48 = v25;
      v26 = *(_DWORD *)(v60[0] + 28LL) + 16 * v54;
      v49 = v26;
    }
    else
    {
      v47 = 1;
      v43 = EXFORMOBJ::bXform((EXFORMOBJ *)v60, v24, v27, v7);
      v25 = v53;
      v26 = v54;
    }
    v23 = v43;
    v28 = v57;
  }
  v63 = v47 != 0 ? 4 : 0;
  v29 = bMakePathRecords(v18, v28, v7, v27, v4, v25, v26, &v77, &v76) & v23;
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
  if ( v29 )
  {
    v75 = v18;
    v78 = 0;
    v79 = 0LL;
    v64 = v7 - v4;
    v65 = &v74;
    v32 = v45[0];
    if ( (*((_DWORD *)v45[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v45, v45[0], &v80);
      v32 = v45[0];
    }
    if ( *((struct PEN **)v32 + 19) == gpPenNull )
      goto LABEL_61;
    v33 = *((_QWORD *)v32 + 64);
    if ( !v33 )
      goto LABEL_61;
    v34 = *(_QWORD *)(v33 + 128);
    v35 = *((_QWORD *)v32 + 12);
    v36 = (char *)v32 + 1744;
    if ( *((_DWORD *)v32 + 436) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v32 + 10) + 8LL) |= 2u;
      v32 = v45[0];
    }
    v37 = *((_QWORD *)v32 + 10);
    v38 = *(_DWORD *)(v37 + 8);
    if ( (((unsigned __int8)v38 | *((_BYTE *)v32 + 332)) & 2) != 0 )
    {
      *(_DWORD *)(v37 + 8) = v38 & 0xFFFFFFFD;
      *((_DWORD *)v45[0] + 83) &= ~2u;
      EBRUSHOBJ::vInitBrush(v36, v45[0], *((_QWORD *)v45[0] + 19), v35, v34, v33, 0);
    }
    v39 = XDCOBJ::prgnEffRao(v45);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v82, v39, (struct ERECTL *)&v80, v44);
    if ( ERECTL::bEmpty((ERECTL *)v83) )
    {
LABEL_61:
      v8 = 1;
      goto LABEL_57;
    }
    if ( (*((_DWORD *)v45[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v36 + 32) & 0x100) == 0 )
    {
      v62 = v83[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v45, v40, &v62);
    }
    ++*(_DWORD *)(v33 + 92);
    v41 = _guard_dispatch_icall_fptr();
LABEL_56:
    v8 = v41;
LABEL_57:
    if ( v18 != (struct _PATHRECORD *)v81 )
      FreeTmpBuffer(v18);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v73);
    goto LABEL_60;
  }
  if ( v18 != (struct _PATHRECORD *)v81 )
    FreeTmpBuffer(v18);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v73);
LABEL_67:
  DCOBJ::~DCOBJ((DCOBJ *)v45);
  return 0LL;
}
