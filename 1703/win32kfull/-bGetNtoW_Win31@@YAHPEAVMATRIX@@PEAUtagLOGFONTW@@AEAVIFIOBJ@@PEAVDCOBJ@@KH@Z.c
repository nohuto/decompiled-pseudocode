/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C007EA00
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C007EF14 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C007DA94 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0128934 (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C01330E0 (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        char a5,
        int a6)
{
  __int64 v6; // r10
  unsigned int v7; // edi
  int v10; // r8d
  int v11; // r12d
  int v12; // r15d
  LONG lfHeight; // ebx
  int v14; // r13d
  struct IFIOBJ *v15; // r11
  __int64 v16; // rcx
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  struct tagLOGFONTW *v20; // r14
  int lfWidth; // edx
  __int64 v22; // rdx
  int v23; // r15d
  int v24; // r14d
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v30; // rbx
  int v31; // r12d
  int v32; // r13d
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  int v38; // ebx
  int v39; // ecx
  float v40; // xmm0_4
  struct IFIOBJ *v41; // r8
  __int64 v42; // rax
  __int64 v44; // rbx
  float v45; // xmm6_4
  float v46; // xmm5_4
  int v47; // r10d
  float v48; // xmm0_4
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // r8d
  float v53; // xmm1_4
  float v54; // xmm4_4
  int v55; // edx
  BOOL IsZero; // eax
  LONG DefaultWorldHeight; // eax
  __int64 v58; // rcx
  int *v59; // rax
  int v60; // edx
  float v61; // xmm2_4
  float v62; // xmm0_4
  int v63; // eax
  int v64; // eax
  int lfOrientation; // eax
  __m128i v66; // xmm0
  __int32 v67; // eax
  __int128 v68; // xmm1
  int v69; // eax
  __int128 v70; // xmm0
  float v71; // [rsp+28h] [rbp-A9h] BYREF
  float v72; // [rsp+2Ch] [rbp-A5h] BYREF
  float v73; // [rsp+30h] [rbp-A1h] BYREF
  float v74; // [rsp+38h] [rbp-99h] BYREF
  float v75; // [rsp+3Ch] [rbp-95h] BYREF
  float v76; // [rsp+40h] [rbp-91h] BYREF
  int v77; // [rsp+44h] [rbp-8Dh]
  __int64 v78; // [rsp+48h] [rbp-89h]
  _DWORD *v79; // [rsp+50h] [rbp-81h] BYREF
  __int64 v80; // [rsp+58h] [rbp-79h]
  struct tagLOGFONTW *v81; // [rsp+60h] [rbp-71h]
  struct IFIOBJ *v82; // [rsp+68h] [rbp-69h]
  struct MATRIX *v83; // [rsp+70h] [rbp-61h] BYREF
  int v84; // [rsp+7Ch] [rbp-55h]
  _DWORD v85[10]; // [rsp+80h] [rbp-51h] BYREF
  _OWORD v86[2]; // [rsp+A8h] [rbp-29h] BYREF
  int v87; // [rsp+C8h] [rbp-9h]

  v6 = *(_QWORD *)a4;
  v7 = 0;
  v82 = a3;
  v81 = a2;
  v10 = 1;
  if ( *(float *)(v6 + 468) == 0.0 || (IsZero = EFLOAT::bIsZero((EFLOAT *)(v6 + 472)), v11 = v10, IsZero) )
    v11 = 0;
  v77 = v11;
  if ( (a5 & 2) != 0 || !v11 && (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL) & 0x1000) != 0 )
    v12 = 0;
  else
    v12 = v10;
  lfHeight = a2->lfHeight;
  v14 = v10;
  LODWORD(v78) = v10;
  if ( !lfHeight )
  {
    DefaultWorldHeight = lGetDefaultWorldHeight(a4);
    a2 = v81;
    lfHeight = DefaultWorldHeight;
  }
  if ( gbShellFontCompatible && !_wcsicmp(a2->lfFaceName, L"MS Shell Dlg") && !a6 )
  {
    if ( lfHeight > 0 )
    {
      if ( lfHeight >= 12 )
      {
        if ( lfHeight <= 15 )
        {
          lfHeight = 14;
          goto LABEL_48;
        }
        if ( lfHeight <= 19 )
          lfHeight = 16;
      }
    }
    else
    {
      if ( (unsigned int)(lfHeight + 12) <= 3 )
      {
        lfHeight = -11;
        goto LABEL_12;
      }
      if ( (unsigned int)(lfHeight + 15) <= 2 )
        lfHeight = -13;
    }
  }
  if ( lfHeight <= 0 )
  {
LABEL_12:
    v15 = v82;
    lfHeight = -lfHeight;
    v16 = (unsigned int)*(__int16 *)(*(_QWORD *)v82 + 56LL);
    goto LABEL_13;
  }
LABEL_48:
  v15 = v82;
  v16 = (unsigned int)(*(__int16 *)(*(_QWORD *)v82 + 60LL) + *(__int16 *)(*(_QWORD *)v82 + 62LL));
LABEL_13:
  v17 = (float)lfHeight / (float)(int)v16;
  v18 = v17;
  v75 = v17;
  *((float *)a1 + 3) = v17;
  if ( !v12 )
  {
    v19 = v71;
    goto LABEL_15;
  }
  if ( v11 )
  {
    v19 = *(float *)(*(_QWORD *)a4 + 468LL);
    v53 = *(float *)(*(_QWORD *)a4 + 472LL);
  }
  else
  {
    v58 = *(_QWORD *)a4;
    v59 = *(int **)(*(_QWORD *)a4 + 80LL);
    v60 = v59[88];
    if ( (v60 & 0x1000) != 0 )
    {
      v19 = v71;
      v53 = v74;
      goto LABEL_65;
    }
    if ( (v60 & 2) == 0 )
    {
      v61 = (float)v59[87];
      v62 = (float)v59[83];
      v19 = (float)v59[86] / (float)v59[82];
      v71 = v19;
      v53 = v61 / v62;
      v74 = v61 / v62;
      goto LABEL_65;
    }
    v19 = *(float *)(v58 + 336) * 0.0625;
    v53 = *(float *)(v58 + 348) * 0.0625;
  }
  v71 = v19;
  v74 = v53;
LABEL_65:
  LODWORD(v78) = EFLOAT::bIs1((EFLOAT *)&v71);
  v14 = v78;
  if ( !(unsigned int)EFLOAT::bIs1((EFLOAT *)&v74) )
    v75 = v54 * v53;
  EFLOAT::vAbs((EFLOAT *)&v75);
  v18 = v75;
  if ( v55 )
    *((_DWORD *)a1 + 3) ^= _xmm;
LABEL_15:
  v79 = *(_DWORD **)(*(_QWORD *)a4 + 48LL);
  if ( v79 )
  {
    v20 = v81;
    lfWidth = v81->lfWidth;
    if ( !lfWidth )
      goto LABEL_17;
    v44 = *(_QWORD *)v15;
    v45 = (float)*(__int16 *)(*(_QWORD *)v15 + 76LL);
    v46 = v45 * v18;
    if ( lfWidth < 0 )
      lfWidth = -lfWidth;
    v47 = 1;
    v73 = *(float *)&lfWidth;
    v48 = (float)lfWidth;
    v76 = (float)lfWidth;
    if ( v12 )
    {
      if ( !v14 )
      {
        v76 = v48 * v19;
        bFToL(v16, &v73, 6LL);
      }
      EFLOAT::vAbs((EFLOAT *)&v76);
      v48 = v76;
      if ( lfWidth < 0 )
        lfWidth = -lfWidth;
    }
    v73 = v46;
    v49 = (unsigned __int8)(SLODWORD(v46) >> 23) - 118;
    if ( v49 <= 40 )
    {
      v50 = LODWORD(v46) & 0x7FFFFF | 0x800000LL;
      if ( v49 < 0 )
        v51 = v50 >> (118 - (unsigned __int8)(SLODWORD(v46) >> 23));
      else
        v51 = v50 << v49;
      v52 = -((unsigned __int64)(v51 + 0x80000000LL) >> 32);
      if ( v46 >= 0.0 )
        v52 = (unsigned __int64)(v51 + 0x80000000LL) >> 32;
      if ( v52 > 0 && v47 && lfWidth / 256 < v52 )
        goto LABEL_60;
    }
    if ( (*(_DWORD *)(v44 + 48) & 4) != 0 )
    {
LABEL_60:
      v40 = v48 / v45;
    }
    else
    {
LABEL_17:
      v22 = *(_QWORD *)v15;
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 48LL) & 4) != 0 )
      {
        v72 = v17;
        if ( !v14 )
        {
          v72 = v17 * v19;
          EFLOAT::vAbs((EFLOAT *)&v72);
        }
      }
      else
      {
        v72 = v18;
      }
      LOBYTE(v23) = 18;
      LOBYTE(v24) = 18;
      v80 = *(_QWORD *)(v22 + 128);
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        v28 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          if ( *(_QWORD *)(v28 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
          if ( *(_DWORD *)(v28 + 340) )
          {
            LOBYTE(v24) = *(_DWORD *)(v28 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27, v26);
            if ( CurrentProcessWin32Process )
              v24 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
      }
      v30 = v79;
      v31 = 96;
      if ( (v79[8] & 1) == 0 || (v32 = 96, (v24 & 0xFu) - 1 <= 1) )
        v32 = v79[548];
      v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v33 )
      {
        v36 = *v33;
        if ( *v33 )
        {
          if ( *(_QWORD *)(v36 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(*v33);
          if ( *(_DWORD *)(v36 + 340) )
          {
            LOBYTE(v23) = *(_DWORD *)(v36 + 340);
          }
          else
          {
            v37 = PsGetCurrentProcessWin32Process(v35, v34);
            if ( v37 )
              v23 = *(_DWORD *)(v37 + 280);
          }
        }
      }
      if ( (v30[8] & 1) == 0 || (v23 & 0xFu) - 1 <= 1 )
        v31 = v79[549];
      if ( v32 == v31 || v77 )
      {
        v38 = HIDWORD(v80);
        v39 = v80;
      }
      else
      {
        v63 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v79);
        v38 = v63 * HIDWORD(v80);
        v64 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v79);
        v39 = v64 * v80;
      }
      v19 = v71;
      v20 = v81;
      if ( v39 == v38 )
        v40 = v72;
      else
        v40 = (float)((float)v38 * v72) / (float)v39;
    }
    if ( !(_DWORD)v78 )
      v40 = v40 / v19;
    *(float *)a1 = v40;
    v41 = v82;
    *((_QWORD *)a1 + 2) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    v83 = a1;
    v42 = *(_QWORD *)v41;
    v84 = 0;
    if ( (*(_DWORD *)(v42 + 48) & 4) == 0 )
      goto LABEL_46;
    lfOrientation = v20->lfOrientation;
    if ( !lfOrientation )
      goto LABEL_46;
    v66 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
    *(float *)v66.m128i_i32 = *(float *)v66.m128i_i32 / 10.0;
    v85[0] = efCos((unsigned int)_mm_cvtsi128_si32(v66));
    v85[3] = v85[0];
    v67 = efSin((unsigned int)_mm_cvtsi128_si32(v66));
    v68 = *((_OWORD *)a1 + 1);
    v85[4] = 0;
    v85[5] = 0;
    v66.m128i_i32[0] = v67;
    v69 = *((_DWORD *)a1 + 8);
    v85[1] = v66.m128i_i32[0];
    v85[2] = v66.m128i_i32[0] ^ _xmm;
    v70 = *(_OWORD *)a1;
    v87 = v69;
    v86[1] = v68;
    v86[0] = v70;
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v83, (struct MATRIX *)v86, (struct MATRIX *)v85, 0) )
    {
LABEL_46:
      *((_DWORD *)a1 + 1) ^= _xmm;
      *((_DWORD *)a1 + 3) ^= _xmm;
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v83, 8u);
      return 1;
    }
  }
  return v7;
}
