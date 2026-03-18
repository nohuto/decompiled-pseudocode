/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C007EF14
 * Callers:
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C002FEF4 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C007EA00 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C01173C8 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        char a5,
        struct _POINTL *const a6,
        int a7)
{
  unsigned int v7; // edi
  struct DCOBJ *v8; // r12
  int v12; // ecx
  __int64 v13; // r8
  __m128 v14; // xmm0
  __int64 v15; // rax
  int v16; // ecx
  LONG v17; // r15d
  __int64 v18; // rax
  int v19; // r15d
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v25; // r13d
  bool v26; // cc
  int v27; // r12d
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r13
  __int64 v32; // rax
  int v34; // edx
  __int64 v35; // rax
  FLOATL v36; // eax
  int v37; // eax
  int v38; // ecx
  __m128i v39; // xmm0
  int v40; // eax
  __int64 lfEscapement; // rcx
  int v42; // edx
  int v43; // edx
  __int64 y; // rax
  __int64 v45; // rax
  __int64 x; // rax
  float v47; // xmm6_4
  float v48; // xmm6_4
  __int128 v49; // xmm1
  int v50; // eax
  _DWORD *v51; // [rsp+38h] [rbp-D0h] BYREF
  struct DCOBJ *v52; // [rsp+40h] [rbp-C8h]
  __m128 *v53; // [rsp+48h] [rbp-C0h] BYREF
  int v54; // [rsp+54h] [rbp-B4h]
  _OWORD v55[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v56; // [rsp+78h] [rbp-90h]
  __m128 v57; // [rsp+80h] [rbp-88h] BYREF
  __int128 v58; // [rsp+90h] [rbp-78h]
  int v59; // [rsp+A0h] [rbp-68h]
  _DWORD v60[10]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v61[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v62; // [rsp+F0h] [rbp-18h]
  _OWORD v63[2]; // [rsp+F8h] [rbp-10h] BYREF
  int v64; // [rsp+118h] [rbp+10h]

  v7 = 0;
  v8 = a4;
  v52 = a4;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v34 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
          v34 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4;
        else
          v34 = (int)lNormAngle(lfEscapement) / 900;
      }
      if ( v34 )
      {
        v42 = v34 - 1;
        if ( !v42 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1LL;
        }
        v43 = v42 - 1;
        if ( v43 )
        {
          if ( v43 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1LL;
        }
        v45 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v45);
        v36 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v35 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v35);
        v36 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v36;
      return 1LL;
    }
  }
  if ( (unsigned int)bGetNtoW_Win31((struct MATRIX *)v61, a2, a3, a4, a5, a7) )
  {
    v13 = *(_QWORD *)v8;
    v53 = &v57;
    v54 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 80) + 352LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v14 = (__m128)v61[0];
      v59 = v62;
      v58 = v61[1];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v53, (struct MATRIX *)v61, (struct MATRIX *)(v13 + 336), 0) )
        return v7;
      v14 = _mm_mul_ps(v57, (__m128)_xmm);
    }
    v15 = *(_QWORD *)a3;
    v57 = v14;
    v16 = *(_DWORD *)(v15 + 48);
    if ( (v16 & 4) != 0 )
    {
LABEL_31:
      v7 = 1;
      *a1 = (struct _FD_XFORM)v57;
      return v7;
    }
    if ( (v16 & 0x200000) != 0 )
      v17 = 900 * ((int)lNormAngle((unsigned int)a2->lfEscapement) / 900 % 4);
    else
      v17 = a2->lfEscapement;
    if ( v17 && ((a5 & 1) == 0 || gbDBCSCodePage) )
    {
      v37 = bParityViolatingXform(v8);
      v38 = -v17;
      if ( !v37 )
        v38 = v17;
      v39 = (__m128i)COERCE_UNSIGNED_INT((float)v38);
      *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32 / 10.0;
      v60[0] = efCos((unsigned int)_mm_cvtsi128_si32(v39));
      v60[3] = v60[0];
      v40 = efSin((unsigned int)_mm_cvtsi128_si32(v39));
      v60[4] = 0;
      v60[5] = 0;
      v60[2] = v40;
      v60[1] = v40 ^ _xmm;
      v64 = v59;
      v63[1] = v58;
      v63[0] = v57;
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v53, (struct MATRIX *)v63, (struct MATRIX *)v60, 0) )
        return v7;
    }
    v18 = *(_QWORD *)v8;
    LOBYTE(v19) = 18;
    LOBYTE(v8) = 18;
    v51 = *(_DWORD **)(v18 + 48);
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v23 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v23 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v23 + 340) )
        {
          LOBYTE(v8) = *(_DWORD *)(v23 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22, v21);
          if ( CurrentProcessWin32Process )
            LODWORD(v8) = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
    v25 = 96;
    if ( (v51[8] & 1) == 0 || (v26 = ((unsigned __int8)v8 & 0xFu) - 1 <= 1, v27 = 96, v26) )
      v27 = v51[548];
    v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v28 )
    {
      v31 = *v28;
      if ( *v28 )
      {
        if ( *(_QWORD *)(v31 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*v28);
        if ( !*(_DWORD *)(v31 + 340) )
        {
          v32 = PsGetCurrentProcessWin32Process(v30, v29);
          v25 = 96;
          if ( v32 )
            v19 = *(_DWORD *)(v32 + 280);
          goto LABEL_27;
        }
        LOBYTE(v19) = *(_DWORD *)(v31 + 340);
      }
      v25 = 96;
    }
LABEL_27:
    if ( (v51[8] & 1) == 0 || (v19 & 0xFu) - 1 <= 1 )
      v25 = v51[549];
    if ( v27 != v25 )
    {
      v47 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v51);
      v48 = v47 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v51);
      v49 = *(_OWORD *)(*(_QWORD *)v52 + 352LL);
      v50 = *(_DWORD *)(*(_QWORD *)v52 + 368LL);
      v55[0] = *(_OWORD *)(*(_QWORD *)v52 + 336LL);
      v56 = v50;
      v55[1] = v49;
      if ( EFLOAT::bIsZero((EFLOAT *)((char *)v55 + 4)) && EFLOAT::bIsZero((EFLOAT *)((char *)v55 + 8)) )
      {
        v57.m128_f32[1] = v57.m128_f32[1] / v48;
        v57.m128_f32[2] = v57.m128_f32[2] * v48;
      }
      else
      {
        v57.m128_f32[0] = v57.m128_f32[0] * v48;
        v57.m128_f32[3] = v57.m128_f32[3] / v48;
      }
    }
    goto LABEL_31;
  }
  return 0LL;
}
