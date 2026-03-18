/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8
 * Callers:
 *     _ScrollDC @ 0x1C006B7C0 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     GetDCOrgOnScreen @ 0x1C00809E4 (GetDCOrgOnScreen.c)
 *     GreTransformPoints @ 0x1C00F5EFC (GreTransformPoints.c)
 *     UnionRect @ 0x1C00F8EC0 (UnionRect.c)
 *     SubtractRect @ 0x1C00FB1A0 (SubtractRect.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013D2A8 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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
  HRGN v11; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int ClipBox; // r12d
  __m128i *v19; // rcx
  struct tagRECT *v20; // rbx
  __m128i v21; // xmm6
  __int64 v22; // rbx
  __int64 v23; // rbx
  int v24; // ebx
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  HRGN v31; // rbx
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct tagRECT v38; // xmm0
  LONG v39; // edx
  int v40; // r9d
  int v41; // r8d
  int v42; // r10d
  __int64 v43; // r13
  __int64 v44; // rbx
  __int64 v45; // r12
  unsigned int v46; // eax
  HRGN v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ebx
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  LONG x; // ecx
  __int32 v61; // ecx
  LONG left; // ecx
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+68h] [rbp-98h] BYREF
  DC *v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h]
  unsigned int v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h]
  unsigned int v72; // [rsp+90h] [rbp-70h]
  HRGN EmptyRgn; // [rsp+98h] [rbp-68h]
  HRGN v74; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  struct tagRECT *v78; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v79; // [rsp+C8h] [rbp-38h]
  unsigned int v80; // [rsp+CCh] [rbp-34h]
  struct _POINTL v81; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v82; // [rsp+D8h] [rbp-28h]
  unsigned int v83; // [rsp+DCh] [rbp-24h]
  __m128i v84; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v85; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v86; // [rsp+F8h] [rbp-8h]
  struct tagRECT v87; // [rsp+100h] [rbp+0h] BYREF
  __m128i v88; // [rsp+110h] [rbp+10h] BYREF
  struct _POINTL v89; // [rsp+120h] [rbp+20h] BYREF
  LONG v90; // [rsp+128h] [rbp+28h]
  struct tagRECT v91; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v92; // [rsp+140h] [rbp+40h] BYREF

  v10 = a4;
  v11 = a8;
  v78 = a6;
  v74 = a7;
  v69 = a4;
  v70 = 0;
  EmptyRgn = 0LL;
  v75 = 0LL;
  v65 = 0LL;
  v76 = 0LL;
  v14 = *(_QWORD *)(gpDispInfo + 32LL);
  v77 = 0LL;
  v71 = 0LL;
  v72 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v14, a2) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v89, 1LL);
  if ( !ClipBox )
    goto LABEL_142;
  v19 = (__m128i *)&v89;
  if ( a5 )
    v19 = (__m128i *)a5;
  v20 = v78;
  v21 = *v19;
  v84 = *v19;
  if ( v78 )
    v92 = *v78;
  v80 = a3;
  v79 = v10;
  if ( a10 )
  {
    v67 = 0LL;
    v68 = 0LL;
    XDCOBJ::vLock(&v67, a2);
    if ( v67 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v88, (struct XDCOBJ *)&v67, -2147483132);
      if ( v88.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v88, &v89, &v89, 2uLL);
      if ( v67 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v67);
        v66 = 0;
        v22 = *(_QWORD *)v67;
        HmgDecrementExclusiveReferenceCountEx(v67, HIDWORD(v68), &v66);
        if ( v66 )
          bDeleteDCInternalEx(v22, 0LL);
      }
    }
    v68 = 0LL;
    v67 = 0LL;
    XDCOBJ::vLock(&v67, a2);
    if ( v67 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v88, (struct XDCOBJ *)&v67, -2147483132);
      if ( v88.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v88, (struct _POINTL *)&v84, (struct _POINTL *)&v84, 2uLL);
      if ( v67 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v67);
        v66 = 0;
        v23 = *(_QWORD *)v67;
        HmgDecrementExclusiveReferenceCountEx(v67, HIDWORD(v68), &v66);
        if ( v66 )
          bDeleteDCInternalEx(v23, 0LL);
      }
    }
    v67 = 0LL;
    v68 = 0LL;
    LOBYTE(v24) = -1;
    XDCOBJ::vLock(&v67, a2);
    if ( v67 )
    {
      v24 = *(_DWORD *)(*((_QWORD *)v67 + 10) + 312LL);
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v67);
      v66 = 0;
      v25 = *(_QWORD *)v67;
      HmgDecrementExclusiveReferenceCountEx(v67, HIDWORD(v68), &v66);
      if ( v66 )
        bDeleteDCInternalEx(v25, 0LL);
      v10 = v69;
    }
    if ( (v24 & 1) != 0 )
    {
      x = v89.x;
      v89.x = v90;
      v90 = x;
      v61 = v84.m128i_i32[0];
      v84.m128i_i32[0] = v84.m128i_i32[2];
      v84.m128i_i32[2] = v61;
      v70 = 1;
    }
    if ( v78 )
    {
      v67 = 0LL;
      v68 = 0LL;
      XDCOBJ::vLock(&v67, a2);
      if ( v67 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v88, (struct XDCOBJ *)&v67, -2147483132);
        if ( v88.m128i_i64[0] )
          EXFORMOBJ::bXform((EXFORMOBJ *)&v88, (struct _POINTL *)&v92, (struct _POINTL *)&v92, 2uLL);
        if ( v67 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v67);
          v66 = 0;
          v26 = *(_QWORD *)v67;
          HmgDecrementExclusiveReferenceCountEx(v67, HIDWORD(v68), &v66);
          if ( v66 )
            bDeleteDCInternalEx(v26, 0LL);
        }
      }
      if ( v70 )
      {
        left = v92.left;
        v92.left = v92.right;
        v92.right = left;
      }
    }
    v81 = 0LL;
    v68 = 0LL;
    v82 = a3;
    v83 = v10;
    v67 = 0LL;
    XDCOBJ::vLock(&v67, a2);
    if ( v67 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v88, (struct XDCOBJ *)&v67, -2147483132);
      if ( v88.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v88, &v81, &v81, 2uLL);
      if ( v67 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v67);
        v70 = 0;
        v27 = *(_QWORD *)v67;
        HmgDecrementExclusiveReferenceCountEx(v67, HIDWORD(v68), &v70);
        if ( v70 )
          bDeleteDCInternalEx(v27, 0LL);
      }
    }
    a3 = v82 - v81.x;
    v10 = v83 - v81.y;
    v21 = v84;
    v20 = v78;
    v69 = v83 - v81.y;
  }
  if ( ClipBox == 1 )
    goto LABEL_49;
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1, v15, v16, v17);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_142;
    v21 = v84;
    v28 = 1LL;
    v72 = 1;
  }
  else
  {
    v28 = v72;
  }
  v29 = a3 + _mm_cvtsi128_si32(v21);
  v87.left = v29;
  v87.right = a3 + _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
  v87.top = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v21, 4));
  v30 = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
  v87.bottom = v30;
  if ( !v20 )
  {
LABEL_55:
    if ( ClipBox != 2 )
    {
LABEL_90:
      if ( !v72 )
      {
        EmptyRgn = (HRGN)CreateEmptyRgn(v30, v29, v28, v17);
        if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
          goto LABEL_142;
      }
      v76 = CreateEmptyRgn(v30, v29, v28, v17);
      SetRectRgnIndirect(v76, &v84);
      v47 = EmptyRgn;
      if ( !(unsigned int)GreCombineRgn(v76, v76, EmptyRgn, 1LL) )
        goto LABEL_142;
      v77 = CreateEmptyRgn(v49, v48, v50, v51);
      SetRectRgnIndirect(v77, &v87);
      if ( !(unsigned int)GreCombineRgn(v77, v77, v47, 1LL) )
        goto LABEL_142;
      v56 = 1;
      if ( v74 == (HRGN)1 )
      {
        v43 = 0LL;
        goto LABEL_103;
      }
      v71 = CreateEmptyRgn(v53, v52, v54, v55);
      if ( (unsigned int)GreCombineRgn(v71, v76, 0LL, 5LL) )
      {
        v57 = v71;
        GreOffsetRgn(v71, a3, v69);
        v56 = GreCombineRgn(v57, v57, v77, 1LL);
        if ( (unsigned __int64)v74 <= 1 )
          goto LABEL_120;
        v58 = CreateEmptyRgn(v53, v52, v54, v55);
        v65 = v58;
        if ( !v56 )
        {
          v43 = v58;
          goto LABEL_143;
        }
        if ( v56 != 1 )
        {
          GetDCOrgOnScreen(a2, &v78);
          GreCombineRgn(v65, v74, 0LL, 5LL);
          GreOffsetRgn(v65, (unsigned int)-(int)v78, (unsigned int)-HIDWORD(v78));
          v56 = GreCombineRgn(v71, v71, v65, 4LL);
          v58 = v65;
        }
        if ( !v56 )
          goto LABEL_142;
        if ( v56 == 1 )
        {
LABEL_120:
          v43 = v65;
        }
        else
        {
          GreOffsetRgn(v58, a3, v69);
          v43 = v65;
          v56 = GreCombineRgn(v71, v71, v65, 4LL);
        }
        if ( !v56 )
        {
LABEL_143:
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
          GreDeleteObject(EmptyRgn);
          GreDeleteObject(v75);
          GreDeleteObject(v43);
          GreDeleteObject(v76);
          GreDeleteObject(v77);
          GreDeleteObject(v71);
          return 0LL;
        }
LABEL_103:
        if ( a8 )
          goto LABEL_151;
        if ( a9 )
        {
          v59 = v65;
          if ( !v65 )
          {
            v59 = CreateEmptyRgn(v53, v52, v54, v55);
            v65 = v59;
          }
          v43 = v65;
          v11 = (HRGN)v59;
          if ( v59 )
          {
LABEL_151:
            ClipBox = GreCombineRgn(v11, v77, v76, 2LL);
            if ( !ClipBox )
              goto LABEL_143;
            if ( v56 != 1 )
              ClipBox = GreCombineRgn(v11, v11, v71, 4LL);
            if ( a9 && !(unsigned int)GreGetRgnBox(v11, a9) )
              goto LABEL_143;
          }
        }
        if ( v56 != 1 )
        {
          GreGetDCOrg(a2, &v74);
          v44 = v71;
          GreOffsetRgn(v71, (unsigned int)v74, HIDWORD(v74));
          GreSelectVisRgnShared(a2, v44, 4LL);
          if ( a10 )
            GreTransformPoints(a2, 0);
          NtGdiBitBltInternal(
            a2,
            v87.left,
            v87.top,
            v87.right - v87.left,
            v87.bottom - v87.top,
            a2,
            v87.left - v80,
            v87.top - v79,
            13369376,
            0,
            0);
          GreSelectVisRgnShared(a2, v44, 4LL);
          goto LABEL_75;
        }
LABEL_74:
        v44 = v71;
LABEL_75:
        if ( a10 && a9 )
          GreTransformPoints(a2, 0);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
        GreDeleteObject(EmptyRgn);
        GreDeleteObject(v75);
        GreDeleteObject(v43);
        GreDeleteObject(v76);
        GreDeleteObject(v77);
        GreDeleteObject(v44);
        return ClipBox;
      }
LABEL_142:
      v43 = v65;
      goto LABEL_143;
    }
LABEL_56:
    if ( (unsigned __int64)v74 <= 1 )
    {
      v88 = v21;
      IntersectRect(&v87, &v87, &v89);
      v33 = IntersectRect(&v84, &v84, &v89);
      if ( v74 == (HRGN)1 )
      {
        v85 = 0LL;
        v86 = 0LL;
      }
      else
      {
        LODWORD(v85) = a3 + v84.m128i_i32[0];
        LODWORD(v86) = a3 + v84.m128i_i32[2];
        HIDWORD(v85) = v10 + v84.m128i_i32[1];
        HIDWORD(v86) = v10 + v84.m128i_i32[3];
        IntersectRect(&v85, &v85, &v87);
      }
      if ( v33 )
      {
        if ( (unsigned int)IntersectRect(&v91, &v84, &v87) )
        {
          if ( a3 && v10 )
            goto LABEL_133;
          UnionRect(&v91, &v84, &v87);
          SubtractRect(&v91, &v91, &v85);
          v38 = v91;
LABEL_63:
          if ( a9 )
            *a9 = v38;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v91) )
            goto LABEL_142;
          ClipBox = 2;
          if ( v91.left >= v91.right || v91.top >= v91.bottom )
            ClipBox = 1;
LABEL_68:
          v39 = v85;
          v40 = v86;
          if ( (int)v85 < (int)v86 )
          {
            v41 = HIDWORD(v85);
            v42 = HIDWORD(v86);
            if ( SHIDWORD(v85) < SHIDWORD(v86) )
            {
              if ( a10 )
              {
                GreTransformPoints(a2, 0);
                v42 = HIDWORD(v86);
                v40 = v86;
                v41 = HIDWORD(v85);
                v39 = v85;
              }
              NtGdiBitBltInternal(a2, v39, v41, v40 - v39, v42 - v41, a2, v39 - v80, v41 - v79, 13369376, 0, 0);
            }
          }
          v43 = v65;
          goto LABEL_74;
        }
        v63 = v84.m128i_i64[0] - v88.m128i_i64[0];
        if ( v84.m128i_i64[0] == v88.m128i_i64[0] )
          v63 = v84.m128i_i64[1] - v88.m128i_i64[1];
        if ( v63 )
        {
LABEL_133:
          if ( a8 || a9 && (v65 = CreateEmptyRgn(v35, v34, v36, v37), (v11 = (HRGN)v65) != 0LL) )
          {
            v64 = v75;
            if ( !v75 )
            {
              v64 = CreateEmptyRgn(v35, v34, v36, v37);
              v75 = v64;
            }
            SetRectRgnIndirect(v64, &v84);
            SetRectRgnIndirect(v11, &v87);
            if ( !(unsigned int)GreCombineRgn(v11, v11, v64, 2LL) )
              goto LABEL_142;
            SetRectRgnIndirect(v64, &v85);
            ClipBox = GreCombineRgn(v11, v11, v64, 4LL);
            if ( !ClipBox || a9 && !(unsigned int)GreGetRgnBox(v11, a9) )
              goto LABEL_142;
          }
          goto LABEL_68;
        }
        v38 = (struct tagRECT)v84;
      }
      else
      {
        v38 = v87;
      }
      v91 = v38;
      goto LABEL_63;
    }
    goto LABEL_90;
  }
  if ( (unsigned __int64)v74 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v89, &v89, &v92) )
    {
LABEL_49:
      v31 = EmptyRgn;
      goto LABEL_50;
    }
    goto LABEL_56;
  }
  if ( (_DWORD)v28 )
  {
    v31 = EmptyRgn;
  }
  else
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v30, v29, v28, v17);
    v31 = EmptyRgn;
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_142;
    v72 = 1;
  }
  v75 = CreateEmptyRgn(v30, v29, v28, v17);
  v45 = v75;
  SetRectRgnIndirect(v75, &v92);
  v46 = GreCombineRgn(v31, v45, v31, 1LL);
  ClipBox = v46;
  if ( !v46 )
    goto LABEL_142;
  v29 = v46 - 1;
  if ( v46 != 1 )
  {
    if ( v46 == 2 )
    {
      if ( !(unsigned int)GreGetRgnBox(v31, &v89) )
        goto LABEL_142;
      v21 = v84;
      goto LABEL_56;
    }
    v21 = v84;
    goto LABEL_55;
  }
LABEL_50:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_142;
  if ( a9 )
  {
    *(_QWORD *)&a9->left = 0LL;
    *(_QWORD *)&a9->right = 0LL;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  GreDeleteObject(v31);
  GreDeleteObject(v75);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
