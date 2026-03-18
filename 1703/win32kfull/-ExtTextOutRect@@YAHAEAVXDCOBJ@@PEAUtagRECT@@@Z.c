/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009324C
 * Callers:
 *     GreExtTextOutRect @ 0x1C0092F90 (GreExtTextOutRect.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C0093088 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B1C8 (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00936C4 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     GreScaleValues @ 0x1C027D8CC (GreScaleValues.c)
 */

__int64 __fastcall ExtTextOutRect(struct XDCOBJ *a1, struct tagRECT *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v6; // r10d
  LONG left; // ecx
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // r9d
  __int32 v11; // eax
  __int32 v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r14
  BOOL v18; // r14d
  __int64 v19; // r15
  __int32 v20; // r8d
  __int32 v21; // r9d
  __int32 v22; // r10d
  DC *v23; // r10
  struct REGION *v24; // rax
  __m128i v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // r14
  struct ECLIPOBJ *v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v32; // [rsp+60h] [rbp-9h] BYREF
  int v33; // [rsp+68h] [rbp-1h]
  int v34; // [rsp+6Ch] [rbp+3h]
  __m128i v35; // [rsp+70h] [rbp+7h] BYREF
  __m128i v36; // [rsp+80h] [rbp+17h] BYREF

  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v4 + 36) & 0x10000) == 0 )
  {
    v5 = 1;
    v33 = *(_DWORD *)(*(_QWORD *)(v4 + 80) + 68LL);
    v34 = *(_DWORD *)(*(_QWORD *)(v4 + 80) + 312LL) & 1;
    EXFORMOBJ::vInit((EXFORMOBJ *)&v32, a1, 0x204u, 0x80000000);
    v6 = *(_DWORD *)(v32 + 32);
    if ( (*(_BYTE *)(v32 + 32) & 1) == 0 )
      return (unsigned int)GreExtTextOutWLocked(
                             a1,
                             0,
                             0,
                             2,
                             a2,
                             0LL,
                             0,
                             0LL,
                             *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 73LL),
                             0LL,
                             0);
    left = a2->left;
    top = a2->top;
    right = a2->right;
    bottom = a2->bottom;
    v36.m128i_i32[0] = a2->left;
    *(__int64 *)((char *)v36.m128i_i64 + 4) = __PAIR64__(right, top);
    v36.m128i_i32[3] = bottom;
    if ( (v6 & 0x43) != 0x43 )
    {
      bCvtPts1(v32, &v36, 2LL);
      bottom = v36.m128i_i32[3];
      right = v36.m128i_i32[2];
      top = v36.m128i_i32[1];
      left = v36.m128i_i32[0];
    }
    if ( v34 )
    {
      ++left;
      ++right;
      v36.m128i_i32[0] = left;
      v36.m128i_i32[2] = right;
    }
    if ( left > right )
    {
      v11 = left;
      v36.m128i_i32[0] = right;
      left = right;
      v36.m128i_i32[2] = v11;
      right = v11;
    }
    if ( top > bottom )
    {
      v12 = top;
      v36.m128i_i32[1] = bottom;
      top = bottom;
      v36.m128i_i32[3] = v12;
      bottom = v12;
    }
    if ( left == right || top == bottom )
      return v5;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
      XDCOBJ::vAccumulate(a1, (struct ERECTL *)&v36);
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
    if ( !v13 )
      return v5;
    if ( ((*(_DWORD *)(v13 + 116) & 8) == 0 && !*(_QWORD *)(v13 + 232) || (*(_WORD *)(v13 + 102) & 0x200) == 0)
      && (unsigned int)_SurfaceAccessCheck(*(struct SURFACE **)(*(_QWORD *)a1 + 512LL)) )
    {
      v14 = *(_QWORD *)a1;
      v15 = (*(_BYTE *)(*(_QWORD *)a1 + 40LL) & 1) != 0 ? 8 : 0;
      v16 = *(int *)(v15 + *(_QWORD *)a1 + 1432);
      if ( (unsigned __int64)(v16 + v36.m128i_i32[0] + 0x80000000LL) > 0xFFFFFFFF )
        return 0LL;
      if ( (unsigned __int64)(v16 + v36.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
        return 0LL;
      v17 = *(int *)(v15 + v14 + 1436);
      if ( (unsigned __int64)(v17 + v36.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
        || (unsigned __int64)(v17 + v36.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
      {
        return 0LL;
      }
      v18 = 0;
      v36.m128i_i32[0] += v16;
      v19 = 0LL;
      v20 = *(_DWORD *)(v15 + v14 + 1432) + v36.m128i_i32[2];
      v21 = *(_DWORD *)(v15 + v14 + 1436) + v36.m128i_i32[1];
      *(__int64 *)((char *)v36.m128i_i64 + 4) = __PAIR64__(v20, v21);
      v22 = *(_DWORD *)(v15 + v14 + 1436) + v36.m128i_i32[3];
      v36.m128i_i32[3] = v22;
      if ( v36.m128i_i32[0] >= *(_DWORD *)(v14 + 1416)
        && v20 <= *(_DWORD *)(v14 + 1424)
        && v21 >= *(_DWORD *)(v14 + 1420) )
      {
        v18 = v22 <= *(_DWORD *)(v14 + 1428);
      }
      GreScaleValues(*(HDC *)v14);
      if ( v18 )
      {
        v25 = v36;
      }
      else
      {
        v19 = *(_QWORD *)a1 + 2200LL;
        if ( DC::prgnRao(*(DC **)a1) )
          v24 = DC::prgnRao(v23);
        else
          v24 = DC::prgnVisSnap(v23);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v19, v24, (struct ERECTL *)&v36, 2);
        v36 = *(__m128i *)(v19 + 4);
        v25 = v36;
        if ( _mm_cvtsi128_si32(v25) == _mm_cvtsi128_si32(_mm_srli_si128(v25, 8))
          || v36.m128i_i32[1] == _mm_srli_si128(v36, 8).m128i_i32[1] )
        {
          return v5;
        }
      }
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
      v27 = *(_QWORD *)a1 + 2032LL;
      v28 = (struct ECLIPOBJ *)(unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 332LL) | *(_DWORD *)(v26 + 8));
      if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v26 + 8)) & 8) != 0 )
      {
        *(_DWORD *)(v26 + 8) &= ~8u;
        *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= ~8u;
        EBRUSHOBJ::vInitBrush(
          v27,
          *(_QWORD *)a1,
          gpbrBackground,
          *(_QWORD *)(*(_QWORD *)a1 + 96LL),
          *(_QWORD *)(v13 + 128),
          v13,
          (*(_DWORD *)(*(_QWORD *)a1 + 72LL) >> 15) & 1);
        v25 = v36;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 && (*(_DWORD *)(v27 + 128) & 0x100) == 0 )
      {
        v35 = v25;
        XDCOBJ::vAccumulateTight(a1, v28, &v35);
      }
      ++*(_DWORD *)(v13 + 92);
      v29 = *(_QWORD *)a1 + 1592LL;
      if ( (*(_DWORD *)(v13 + 112) & 1) != 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v13 + 48) + 2848LL))(
                               v13 + 24,
                               0LL,
                               0LL,
                               v19,
                               0LL,
                               &v36,
                               0LL,
                               0LL,
                               v27,
                               v29,
                               61680);
      else
        return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                               v13 + 24,
                               0LL,
                               0LL,
                               v19,
                               0LL,
                               &v36,
                               0LL,
                               0LL,
                               v27,
                               v29,
                               61680);
    }
    EngSetLastError(5u);
  }
  return 0;
}
