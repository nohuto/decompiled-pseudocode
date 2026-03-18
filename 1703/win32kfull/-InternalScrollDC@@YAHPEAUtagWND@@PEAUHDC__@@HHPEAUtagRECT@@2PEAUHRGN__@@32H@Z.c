/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067408
 * Callers:
 *     _ScrollDC @ 0x1C0067304 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 * Callees:
 *     UnionRect @ 0x1C0020BD4 (UnionRect.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GreTransformPoints @ 0x1C00E53AC (GreTransformPoints.c)
 *     SubtractRect @ 0x1C00EE518 (SubtractRect.c)
 *     GetDCOrgOnScreen @ 0x1C00F85B8 (GetDCOrgOnScreen.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0136C58 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  unsigned int v10; // r14d
  HRGN v12; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int ClipBox; // r12d
  __m128i *v18; // rax
  struct tagRECT *v19; // rbx
  __m128i v20; // xmm6
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  HRGN v25; // rbx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct tagRECT v32; // xmm0
  __int64 v33; // rdx
  int v34; // r9d
  __int64 v35; // r8
  __int64 v36; // r13
  __int64 v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rax
  LONG x; // ecx
  __int32 v51; // ecx
  LONG left; // ecx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  int v57; // [rsp+78h] [rbp-90h]
  HRGN EmptyRgn; // [rsp+80h] [rbp-88h]
  unsigned int v59; // [rsp+88h] [rbp-80h]
  __int64 v60; // [rsp+98h] [rbp-70h]
  __int64 v61; // [rsp+A0h] [rbp-68h]
  __int64 v62; // [rsp+A8h] [rbp-60h]
  int v63; // [rsp+B0h] [rbp-58h]
  struct _POINTL v64; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v65; // [rsp+C8h] [rbp-40h]
  unsigned int v66; // [rsp+CCh] [rbp-3Ch]
  _QWORD v67[2]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v68[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-18h] BYREF
  int v70; // [rsp+F8h] [rbp-10h]
  int v71; // [rsp+FCh] [rbp-Ch]
  __int64 v72; // [rsp+100h] [rbp-8h] BYREF
  int v73; // [rsp+108h] [rbp+0h]
  int v74; // [rsp+10Ch] [rbp+4h]
  _QWORD v75[2]; // [rsp+110h] [rbp+8h] BYREF
  struct tagRECT *v76; // [rsp+120h] [rbp+18h]
  _DWORD v77[2]; // [rsp+128h] [rbp+20h] BYREF
  _DWORD v78[2]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v79[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v80[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v81[2]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v82[2]; // [rsp+168h] [rbp+60h] BYREF
  __m128i v83; // [rsp+178h] [rbp+70h] BYREF
  __int64 v84; // [rsp+188h] [rbp+80h] BYREF
  __int64 v85; // [rsp+190h] [rbp+88h]
  struct tagRECT v86; // [rsp+198h] [rbp+90h] BYREF
  struct _POINTL v87; // [rsp+1A8h] [rbp+A0h] BYREF
  LONG v88; // [rsp+1B0h] [rbp+A8h]
  struct tagRECT v89; // [rsp+1B8h] [rbp+B0h] BYREF
  struct tagRECT v90; // [rsp+1C8h] [rbp+C0h] BYREF
  __m128i v91; // [rsp+1D8h] [rbp+D0h]

  v10 = a4;
  v12 = a8;
  v76 = a6;
  v63 = 0;
  EmptyRgn = 0LL;
  v60 = 0LL;
  v55 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v59 = a4;
  GreLockVisRgnSharedOrExclusive(*(_QWORD *)(gpDispInfo + 32LL));
  ClipBox = GreGetClipBox(a2, &v87, 1LL);
  if ( !ClipBox )
    goto LABEL_73;
  v18 = (__m128i *)&v87;
  if ( a5 )
    v18 = (__m128i *)a5;
  v19 = v76;
  v20 = *v18;
  v83 = *v18;
  if ( v76 )
    v90 = *v76;
  if ( a10 )
  {
    v67[0] = 0LL;
    v67[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v67, a2);
    if ( v67[0] )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v79, (struct XDCOBJ *)v67, 0x80000204);
      if ( v79[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)v79, &v87, &v87, 2uLL);
      if ( v67[0] )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)v67);
        _InterlockedDecrement((volatile signed __int32 *)(v67[0] + 12LL));
      }
    }
    v68[0] = 0LL;
    v68[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v68, a2);
    if ( v68[0] )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v80, (struct XDCOBJ *)v68, 0x80000204);
      if ( v80[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)v80, (struct _POINTL *)&v83, (struct _POINTL *)&v83, 2uLL);
      if ( v68[0] )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)v68);
        _InterlockedDecrement((volatile signed __int32 *)(v68[0] + 12LL));
      }
    }
    v75[0] = 0LL;
    v75[1] = 0LL;
    LOBYTE(v21) = -1;
    XDCOBJ::vLock((XDCOBJ *)v75, a2);
    if ( v75[0] )
    {
      v21 = *(_DWORD *)(*(_QWORD *)(v75[0] + 80LL) + 312LL);
      XDCOBJ::RestoreAttributes((XDCOBJ *)v75);
      _InterlockedDecrement((volatile signed __int32 *)(v75[0] + 12LL));
    }
    if ( (v21 & 1) != 0 )
    {
      x = v87.x;
      v87.x = v88;
      v88 = x;
      v51 = v83.m128i_i32[0];
      v83.m128i_i32[0] = v83.m128i_i32[2];
      v83.m128i_i32[2] = v51;
      v63 = 1;
    }
    v19 = v76;
    if ( v76 )
    {
      v69 = 0LL;
      v70 = 0;
      v71 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v69, a2);
      if ( v69 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v81, (struct XDCOBJ *)&v69, 0x80000204);
        if ( v81[0] )
          EXFORMOBJ::bXform((EXFORMOBJ *)v81, (struct _POINTL *)&v90, (struct _POINTL *)&v90, 2uLL);
        if ( v69 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v69);
          _InterlockedDecrement((volatile signed __int32 *)(v69 + 12));
        }
      }
      if ( v63 )
      {
        left = v90.left;
        v90.left = v90.right;
        v90.right = left;
      }
    }
    v64.y = 0;
    v64.x = 0;
    v72 = 0LL;
    v73 = 0;
    v74 = 0;
    v65 = a3;
    v66 = v10;
    XDCOBJ::vLock((XDCOBJ *)&v72, a2);
    if ( v72 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v82, (struct XDCOBJ *)&v72, 0x80000204);
      if ( v82[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)v82, &v64, &v64, 2uLL);
      if ( v72 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v72);
        _InterlockedDecrement((volatile signed __int32 *)(v72 + 12));
      }
    }
    a3 = v65 - v64.x;
    v10 = v66 - v64.y;
    v20 = v83;
    v59 = v66 - v64.y;
  }
  if ( ClipBox == 1 )
    goto LABEL_42;
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1, v14, v15, v16);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_73;
    v20 = v83;
    v22 = 1LL;
    v57 = 1;
  }
  else
  {
    v22 = 0LL;
  }
  v23 = a3 + _mm_cvtsi128_si32(v20);
  v86.left = v23;
  v86.right = a3 + _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
  v86.top = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
  v24 = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v20, 12));
  v86.bottom = v24;
  if ( !v19 )
  {
LABEL_48:
    if ( ClipBox != 2 )
    {
LABEL_82:
      if ( !v57 )
      {
        EmptyRgn = (HRGN)CreateEmptyRgn(v24, v23, v22, v16);
        if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
          goto LABEL_73;
      }
      v61 = CreateEmptyRgn(v24, v23, v22, v16);
      SetRectRgnIndirect(v61, &v83);
      if ( !(unsigned int)GreCombineRgn(v61, v61, EmptyRgn, 1LL) )
        goto LABEL_73;
      v62 = CreateEmptyRgn(v40, v39, v41, v42);
      SetRectRgnIndirect(v62, &v86);
      if ( !(unsigned int)GreCombineRgn(v62, v62, EmptyRgn, 1LL) )
        goto LABEL_73;
      v47 = 1;
      if ( a7 == (HRGN)1 )
      {
        v36 = 0LL;
        goto LABEL_95;
      }
      v56 = CreateEmptyRgn(v44, v43, v45, v46);
      if ( (unsigned int)GreCombineRgn(v56, v61, 0LL, 5LL) )
      {
        GreOffsetRgn(v56, a3, v59);
        v47 = GreCombineRgn(v56, v56, v62, 1LL);
        if ( (unsigned __int64)a7 <= 1 )
          goto LABEL_111;
        v48 = CreateEmptyRgn(v44, v43, v45, v46);
        v55 = v48;
        if ( !v47 )
        {
          v36 = v48;
          goto LABEL_137;
        }
        if ( v47 != 1 )
        {
          GetDCOrgOnScreen(a2, v77);
          GreCombineRgn(v55, a7, 0LL, 5LL);
          GreOffsetRgn(v55, (unsigned int)-v77[0], (unsigned int)-v77[1]);
          v47 = GreCombineRgn(v56, v56, v55, 4LL);
          v48 = v55;
        }
        if ( !v47 )
          goto LABEL_73;
        if ( v47 == 1 )
        {
LABEL_111:
          v36 = v55;
        }
        else
        {
          GreOffsetRgn(v48, a3, v59);
          v36 = v55;
          v47 = GreCombineRgn(v56, v56, v55, 4LL);
        }
        if ( !v47 )
          goto LABEL_137;
LABEL_95:
        if ( a8 )
          goto LABEL_96;
        if ( a9 )
        {
          v49 = v55;
          if ( !v55 )
          {
            v49 = CreateEmptyRgn(v44, v43, v45, v46);
            v55 = v49;
          }
          v36 = v55;
          v12 = (HRGN)v49;
          if ( v49 )
          {
LABEL_96:
            ClipBox = GreCombineRgn(v12, v62, v61, 2LL);
            if ( !ClipBox )
              goto LABEL_137;
            if ( v47 != 1 )
              ClipBox = GreCombineRgn(v12, v12, v56, 4LL);
            if ( a9 )
              GreGetRgnBox(v12, a9);
          }
        }
        if ( v47 != 1 )
        {
          GreGetDCOrg(a2, v78);
          v37 = v56;
          GreOffsetRgn(v56, v78[0], v78[1]);
          GreSelectVisRgnShared(a2, v56, 4LL);
          if ( a10 )
            GreTransformPoints(a2, 0);
          NtGdiBitBltInternal(a2, (unsigned int)v86.left, (unsigned int)v86.top, (unsigned int)(v86.right - v86.left));
          GreSelectVisRgnShared(a2, v56, 4LL);
          goto LABEL_68;
        }
LABEL_67:
        v37 = v56;
LABEL_68:
        if ( a10 && a9 )
          GreTransformPoints(a2, 0);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
        GreDeleteObject(EmptyRgn);
        GreDeleteObject(v60);
        GreDeleteObject(v36);
        GreDeleteObject(v61);
        GreDeleteObject(v62);
        GreDeleteObject(v37);
        return ClipBox;
      }
LABEL_73:
      v36 = v55;
LABEL_137:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      GreDeleteObject(EmptyRgn);
      GreDeleteObject(v60);
      GreDeleteObject(v36);
      GreDeleteObject(v61);
      GreDeleteObject(v62);
      GreDeleteObject(v56);
      return 0LL;
    }
LABEL_49:
    if ( (unsigned __int64)a7 <= 1 )
    {
      v91 = v20;
      IntersectRect(&v86, &v86, &v87);
      v27 = IntersectRect(&v83, &v83, &v87);
      if ( a7 == (HRGN)1 )
      {
        v84 = 0LL;
        v85 = 0LL;
      }
      else
      {
        LODWORD(v84) = a3 + v83.m128i_i32[0];
        LODWORD(v85) = a3 + v83.m128i_i32[2];
        HIDWORD(v84) = v10 + v83.m128i_i32[1];
        HIDWORD(v85) = v10 + v83.m128i_i32[3];
        IntersectRect(&v84, &v84, &v86);
      }
      if ( v27 )
      {
        if ( (unsigned int)IntersectRect(&v89, &v83, &v86) )
        {
          if ( a3 && v10 )
            goto LABEL_124;
          UnionRect(&v89, &v83, &v86);
          SubtractRect(&v89, &v89, &v84);
          v32 = v89;
LABEL_56:
          if ( a9 )
            *a9 = v32;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v89) )
            goto LABEL_73;
          ClipBox = 2;
          if ( v89.left >= v89.right || v89.top >= v89.bottom )
            ClipBox = 1;
LABEL_61:
          v33 = (unsigned int)v84;
          v34 = v85;
          if ( (int)v84 < (int)v85 )
          {
            v35 = HIDWORD(v84);
            if ( SHIDWORD(v84) < SHIDWORD(v85) )
            {
              if ( a10 )
              {
                GreTransformPoints(a2, 0);
                v34 = v85;
                v35 = HIDWORD(v84);
                v33 = (unsigned int)v84;
              }
              NtGdiBitBltInternal(a2, v33, v35, (unsigned int)(v34 - v33));
            }
          }
          v36 = v55;
          goto LABEL_67;
        }
        v53 = v83.m128i_i64[0] - v91.m128i_i64[0];
        if ( v83.m128i_i64[0] == v91.m128i_i64[0] )
          v53 = v83.m128i_i64[1] - v91.m128i_i64[1];
        if ( v53 )
        {
LABEL_124:
          if ( a8 || a9 && (v55 = CreateEmptyRgn(v29, v28, v30, v31), (v12 = (HRGN)v55) != 0LL) )
          {
            v54 = v60;
            if ( !v60 )
            {
              v54 = CreateEmptyRgn(v29, v28, v30, v31);
              v60 = v54;
            }
            SetRectRgnIndirect(v54, &v83);
            SetRectRgnIndirect(v12, &v86);
            if ( !(unsigned int)GreCombineRgn(v12, v12, v54, 2LL) )
              goto LABEL_73;
            SetRectRgnIndirect(v54, &v84);
            ClipBox = GreCombineRgn(v12, v12, v54, 4LL);
            if ( !ClipBox )
              goto LABEL_73;
            if ( a9 )
              GreGetRgnBox(v12, a9);
          }
          goto LABEL_61;
        }
        v32 = (struct tagRECT)v83;
      }
      else
      {
        v32 = v86;
      }
      v89 = v32;
      goto LABEL_56;
    }
    goto LABEL_82;
  }
  if ( (unsigned __int64)a7 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v87, &v87, &v90) )
    {
LABEL_42:
      v25 = EmptyRgn;
      goto LABEL_43;
    }
    goto LABEL_49;
  }
  if ( !(_DWORD)v22 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v24, v23, v22, v16);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_73;
    v57 = 1;
  }
  v60 = CreateEmptyRgn(v24, v23, v22, v16);
  SetRectRgnIndirect(v60, &v90);
  v25 = EmptyRgn;
  v38 = GreCombineRgn(EmptyRgn, v60, EmptyRgn, 1LL);
  ClipBox = v38;
  if ( !v38 )
    goto LABEL_73;
  v23 = v38 - 1;
  if ( v38 != 1 )
  {
    if ( v38 == 2 )
    {
      GreGetRgnBox(EmptyRgn, &v87);
      v20 = v83;
      goto LABEL_49;
    }
    v20 = v83;
    goto LABEL_48;
  }
LABEL_43:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_73;
  if ( a9 )
  {
    *(_QWORD *)&a9->left = 0LL;
    *(_QWORD *)&a9->right = 0LL;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  GreDeleteObject(v25);
  GreDeleteObject(v60);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
