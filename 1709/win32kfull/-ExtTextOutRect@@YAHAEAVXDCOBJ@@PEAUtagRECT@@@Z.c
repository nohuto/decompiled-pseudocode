/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001C99C
 * Callers:
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C001C7D8 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     GreExtTextOutRect @ 0x1C001CE28 (GreExtTextOutRect.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0018388 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001CDEC (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027C7C (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027FF8 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtTextOutRect(struct XDCOBJ *this, struct tagRECT *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  int v6; // eax
  LONG left; // ecx
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // r9d
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r11
  __int64 v17; // r12
  __int32 v18; // edx
  BOOL v19; // r15d
  __int32 v20; // r8d
  __int32 v21; // r9d
  int v22; // eax
  struct REGION *v23; // rax
  __m128i v24; // xmm1
  struct ECLIPOBJ *v25; // rdx
  __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // rcx
  __int32 v31; // eax
  __int32 v32; // eax
  __m128i *v33; // r13
  unsigned __int64 v34; // [rsp+60h] [rbp-19h] BYREF
  int v35; // [rsp+68h] [rbp-11h]
  int v36; // [rsp+6Ch] [rbp-Dh]
  __m128i v37; // [rsp+70h] [rbp-9h] BYREF
  __m128i v38; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)this || (*(_DWORD *)(v3 + 36) & 0x10000) != 0 )
    return 0;
  v5 = 1;
  v35 = *(_DWORD *)(*(_QWORD *)(v3 + 80) + 68LL);
  v36 = *(_DWORD *)(*(_QWORD *)(v3 + 80) + 312LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v34, this, 0x204u, 0x80000000);
  v6 = *(_DWORD *)(v34 + 32);
  if ( (v6 & 1) == 0 )
    return (unsigned int)GreExtTextOutWLocked(
                           this,
                           0,
                           0,
                           2u,
                           a2,
                           0LL,
                           0,
                           0LL,
                           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 73LL),
                           0LL,
                           0);
  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v38.m128i_i32[0] = a2->left;
  *(__int64 *)((char *)v38.m128i_i64 + 4) = __PAIR64__(right, top);
  v38.m128i_i32[3] = bottom;
  if ( (v6 & 0x43) != 0x43 )
  {
    bCvtPts1(v34, &v38, 2LL);
    bottom = v38.m128i_i32[3];
    right = v38.m128i_i32[2];
    top = v38.m128i_i32[1];
    left = v38.m128i_i32[0];
  }
  if ( v36 )
  {
    ++left;
    ++right;
    v38.m128i_i32[0] = left;
    v38.m128i_i32[2] = right;
  }
  if ( left > right )
  {
    v31 = left;
    v38.m128i_i32[0] = right;
    left = right;
    v38.m128i_i32[2] = v31;
    right = v31;
  }
  if ( top > bottom )
  {
    v32 = top;
    v38.m128i_i32[1] = bottom;
    top = bottom;
    v38.m128i_i32[3] = v32;
    bottom = v32;
  }
  if ( left == right || top == bottom )
    return v5;
  v11 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( (v11 & 0xE0) != 0 )
  {
    if ( (v11 & 0x20) != 0 )
      ERECTL::operator|=((_DWORD *)(*(_QWORD *)this + 1480LL), &v38);
    if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x80u) != 0 )
      ERECTL::operator|=((_DWORD *)(*(_QWORD *)this + 1512LL), &v38);
  }
  v12 = *(_QWORD *)(*(_QWORD *)this + 512LL);
  if ( !v12 )
    return v5;
  if ( ((*(_DWORD *)(v12 + 116) & 8) != 0 || *(_QWORD *)(v12 + 232)) && (*(_WORD *)(v12 + 102) & 0x200) != 0
    || !(unsigned int)_SurfaceAccessCheck(*(struct SURFACE **)(*(_QWORD *)this + 512LL)) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v13 = *(_QWORD *)this;
  v14 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1LL;
  v15 = *(int *)(*(_QWORD *)this + 8 * v14 + 1432);
  if ( (unsigned __int64)(v15 + v38.m128i_i32[0] + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v15 + v38.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v16 = *(int *)(v13 + 8 * v14 + 1436);
    if ( (unsigned __int64)(v16 + v38.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v16 + v38.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v37.m128i_i64[0] = 0LL;
      v38.m128i_i32[0] += v15;
      v17 = 0LL;
      v18 = *(_DWORD *)(v13 + 8 * v14 + 1432) + v38.m128i_i32[2];
      v19 = 0;
      v20 = *(_DWORD *)(v13 + 8 * v14 + 1436) + v38.m128i_i32[1];
      *(__int64 *)((char *)v38.m128i_i64 + 4) = __PAIR64__(v18, v20);
      v21 = *(_DWORD *)(v13 + 8 * v14 + 1436) + v38.m128i_i32[3];
      v38.m128i_i32[3] = v21;
      if ( v38.m128i_i32[0] >= *(_DWORD *)(v13 + 1416)
        && v18 <= *(_DWORD *)(v13 + 1424)
        && v20 >= *(_DWORD *)(v13 + 1420) )
      {
        v19 = v21 <= *(_DWORD *)(v13 + 1428);
      }
      v22 = *(_DWORD *)(v13 + 536);
      if ( (v22 & 1) != 0 && (v22 & 2) == 0 )
      {
        v33 = &v38;
        do
        {
          if ( !(unsigned int)bFToL(v14, (char *)&v38 + 4 * (unsigned int)v17, 6LL) )
            break;
          LODWORD(v17) = v17 + 1;
          v33 = (__m128i *)((char *)v33 + 4);
        }
        while ( (unsigned int)v17 < 4 );
        v17 = v37.m128i_i64[0];
      }
      if ( v19 )
      {
        v24 = v38;
      }
      else
      {
        v17 = v13 + 2200;
        if ( DC::prgnRao((DC *)v13) )
          v23 = DC::prgnRao((DC *)v13);
        else
          v23 = DC::prgnVisSnap((DC *)v13);
        XCLIPOBJ::vSetup((XCLIPOBJ *)(v13 + 2200), v23, (struct ERECTL *)&v38, 2);
        v38 = *(__m128i *)(v13 + 2204);
        v24 = v38;
        if ( _mm_cvtsi128_si32(v24) == _mm_cvtsi128_si32(_mm_srli_si128(v24, 8))
          || v38.m128i_i32[1] == _mm_srli_si128(v38, 8).m128i_i32[1] )
        {
          return v5;
        }
      }
      v25 = *(struct ECLIPOBJ **)(*(_QWORD *)this + 80LL);
      v26 = *(_QWORD *)this + 2032LL;
      v27 = *((_DWORD *)v25 + 2);
      if ( (((unsigned __int8)v27 | *(_BYTE *)(*(_QWORD *)this + 332LL)) & 8) != 0 )
      {
        *((_DWORD *)v25 + 2) = v27 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)this + 332LL) &= ~8u;
        EBRUSHOBJ::vInitBrush(
          v26,
          *(_QWORD *)this,
          gpbrBackground,
          *(_QWORD *)(*(_QWORD *)this + 96LL),
          *(_QWORD *)(v12 + 128),
          v12,
          (*(_DWORD *)(*(_QWORD *)this + 72LL) >> 15) & 1);
        v24 = v38;
      }
      if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 && (*(_DWORD *)(v26 + 128) & 0x100) == 0 )
      {
        v37 = v24;
        XDCOBJ::vAccumulateTight(this, v25, (struct ERECTL *)&v37);
      }
      ++*(_DWORD *)(v12 + 92);
      v28 = *(_QWORD *)this + 1592LL;
      if ( (*(_DWORD *)(v12 + 112) & 1) != 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v12 + 48) + 2848LL))(
                               v12 + 24,
                               0LL,
                               0LL,
                               v17,
                               0LL,
                               &v38,
                               0LL,
                               0LL,
                               v26,
                               v28,
                               61680);
      else
        return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                               v12 + 24,
                               0LL,
                               0LL,
                               v17,
                               0LL,
                               &v38,
                               0LL,
                               0LL,
                               v26,
                               v28,
                               61680);
    }
  }
  return 0LL;
}
