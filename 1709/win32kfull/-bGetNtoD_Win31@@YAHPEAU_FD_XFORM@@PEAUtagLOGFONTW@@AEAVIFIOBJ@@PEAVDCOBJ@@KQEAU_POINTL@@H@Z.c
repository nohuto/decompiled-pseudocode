/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00AE5DC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C003BCB0 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C003E0E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00B0340 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C0121A4C (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

int __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        unsigned int a5,
        struct _POINTL *const a6,
        int a7)
{
  int v7; // edi
  int v12; // ecx
  int v13; // edx
  __int64 lfEscapement; // rcx
  int v15; // edx
  int v16; // edx
  __int64 y; // rax
  __int64 v18; // rax
  FLOATL v19; // eax
  __int64 x; // rax
  __int64 v21; // rax
  int result; // eax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  __m128 v26; // xmm0
  __int64 v27; // rax
  int v28; // ecx
  int v29; // eax
  LONG v30; // ebx
  int v31; // eax
  int v32; // ecx
  __m128i v33; // xmm0
  int v34; // eax
  int v35; // r15d
  struct _KTHREAD *CurrentThread; // rbx
  int v37; // r12d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v43; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v45; // r13d
  bool v46; // cc
  int v47; // r12d
  __int64 v48; // rdx
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r13
  __int64 v52; // rax
  float v53; // xmm6_4
  __int64 v54; // rdx
  float v55; // xmm6_4
  __int128 v56; // xmm1
  int v57; // eax
  _DWORD *v58; // [rsp+30h] [rbp-D0h] BYREF
  struct _KTHREAD *v59; // [rsp+38h] [rbp-C8h]
  struct DCOBJ *v60; // [rsp+40h] [rbp-C0h]
  __m128 *v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62; // [rsp+54h] [rbp-ACh]
  _OWORD v63[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v64; // [rsp+78h] [rbp-88h]
  __m128 v65; // [rsp+80h] [rbp-80h] BYREF
  __int128 v66; // [rsp+90h] [rbp-70h]
  int v67; // [rsp+A0h] [rbp-60h]
  _DWORD v68[10]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v69[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v70; // [rsp+F0h] [rbp-10h]
  _OWORD v71[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v72; // [rsp+118h] [rbp+18h]

  v7 = 0;
  v60 = a4;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      v13 = 0;
      if ( gbDBCSCodePage && (v12 & 0x200000) != 0 )
      {
        lfEscapement = (unsigned int)a2->lfEscapement;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 80LL) + 352LL) & 0x40) != 0 )
          v13 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4;
        else
          v13 = (int)lNormAngle(lfEscapement) / 900;
      }
      if ( v13 )
      {
        v15 = v13 - 1;
        if ( !v15 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1;
        }
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1;
        }
        v18 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v18);
        v19 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v21 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v21);
        v19 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v19;
      return 1;
    }
  }
  result = bGetNtoW_Win31((struct MATRIX *)v69, a2, a3, a4, a5, a7);
  if ( result )
  {
    v25 = *(_QWORD *)a4;
    v61 = &v65;
    v62 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v25 + 80) + 352LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v26 = (__m128)v69[0];
      v67 = v70;
      v66 = v69[1];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v61, (struct MATRIX *)v69, (struct MATRIX *)(v25 + 336), 0) )
        return v7;
      v26 = _mm_mul_ps(v65, (__m128)_xmm);
    }
    v27 = *(_QWORD *)a3;
    v65 = v26;
    v28 = *(_DWORD *)(v27 + 48);
    if ( (v28 & 4) != 0 )
    {
LABEL_66:
      v7 = 1;
      *a1 = (struct _FD_XFORM)v65;
      return v7;
    }
    if ( (v28 & 0x200000) != 0 )
    {
      v29 = lNormAngle((unsigned int)a2->lfEscapement);
      v23 = (v29 / 900) & 0x80000003;
      if ( v29 / 900 < 0 )
        v23 = ((unsigned __int8)(((v29 / 900) & 3) - 1) | 0xFFFFFFFC) + 1;
      v30 = 900 * v23;
    }
    else
    {
      v30 = a2->lfEscapement;
    }
    if ( v30 && ((a5 & 1) == 0 || gbDBCSCodePage) )
    {
      v31 = bParityViolatingXform(a4);
      v32 = -v30;
      if ( !v31 )
        v32 = v30;
      v33 = (__m128i)COERCE_UNSIGNED_INT((float)v32);
      *(float *)v33.m128i_i32 = *(float *)v33.m128i_i32 / 10.0;
      v68[0] = efCos((unsigned int)_mm_cvtsi128_si32(v33));
      v68[3] = v68[0];
      v34 = efSin((unsigned int)_mm_cvtsi128_si32(v33));
      v68[4] = 0;
      v68[5] = 0;
      v68[2] = v34;
      v68[1] = v34 ^ _xmm;
      v72 = v67;
      v71[1] = v66;
      v71[0] = v65;
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v61, (struct MATRIX *)v71, (struct MATRIX *)v68, 0) )
        return v7;
    }
    LOBYTE(v35) = 18;
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v37) = 18;
    v58 = *(_DWORD **)(*(_QWORD *)a4 + 48LL);
    if ( !(unsigned int)IsThreadCrossSessionAttached(v58, v23, v25, v24) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v43 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          if ( *(_QWORD *)(v43 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
          if ( *(_DWORD *)(v43 + 340) )
          {
            LOBYTE(v37) = *(_DWORD *)(v43 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v39);
            if ( CurrentProcessWin32Process )
              v37 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
      }
    }
    v45 = 96;
    if ( (v58[8] & 1) == 0 || (v46 = (v37 & 0xFu) - 1 <= 1, v47 = 96, v46) )
      v47 = v58[548];
    v59 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v38, v40, v41) )
    {
      v49 = (__int64 *)PsGetThreadWin32Thread(v59);
      if ( v49 )
      {
        v51 = *v49;
        if ( *v49 )
        {
          if ( *(_QWORD *)(v51 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(*v49);
          if ( !*(_DWORD *)(v51 + 340) )
          {
            v52 = PsGetCurrentProcessWin32Process(v50);
            v45 = 96;
            if ( v52 )
              v35 = *(_DWORD *)(v52 + 280);
            goto LABEL_58;
          }
          LOBYTE(v35) = *(_DWORD *)(v51 + 340);
        }
        v45 = 96;
      }
    }
LABEL_58:
    if ( (v58[8] & 1) == 0 || (v35 & 0xFu) - 1 <= 1 )
      v45 = v58[549];
    if ( v47 != v45 )
    {
      v53 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v58, v48);
      v55 = v53 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v58, v54);
      v56 = *(_OWORD *)(*(_QWORD *)v60 + 352LL);
      v57 = *(_DWORD *)(*(_QWORD *)v60 + 368LL);
      v63[0] = *(_OWORD *)(*(_QWORD *)v60 + 336LL);
      v64 = v57;
      v63[1] = v56;
      if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v63 + 4))
        && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)v63 + 8)) )
      {
        v65.m128_f32[1] = v65.m128_f32[1] / v55;
        v65.m128_f32[2] = v65.m128_f32[2] * v55;
      }
      else
      {
        v65.m128_f32[0] = v65.m128_f32[0] * v55;
        v65.m128_f32[3] = v65.m128_f32[3] / v55;
      }
    }
    goto LABEL_66;
  }
  return result;
}
