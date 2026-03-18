/*
 * XREFs of ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00393A0
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038EA8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0039510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     UserIsGDIScalingApplicable @ 0x1C0071560 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C0097D60 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C0098070 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00E8B34 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall DC::bMakeInfoDC(DC *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  void *v5; // rcx
  int v6; // eax
  struct tagSIZE v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  void *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __m128 v15; // xmm0
  unsigned __int64 v16; // rdx
  __m128 v17; // xmm0
  int HwndDpi; // eax
  __int64 v19; // [rsp+40h] [rbp+20h] BYREF
  __int64 v20; // [rsp+50h] [rbp+30h] BYREF
  __int64 v21; // [rsp+58h] [rbp+38h] BYREF

  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 1) != 0 )
    return v3;
  if ( !a2 )
  {
    if ( (v2 & 0x800) == 0 || *((_DWORD *)this + 8) != 2 )
      return v3;
    v9 = *((_QWORD *)this + 316);
    *((_DWORD *)this + 9) = v2 & 0xFFFFF7FF;
    *((_DWORD *)this + 8) = 0;
    *((_QWORD *)this + 64) = v9;
    if ( v9 && (unsigned int)DC::bDpiScaledSurface(this) )
    {
      v16 = *(_QWORD *)(v10 + 596);
    }
    else
    {
      v11 = (void *)*((_QWORD *)this + 60);
      if ( !v11
        || !(unsigned int)UserIsGDIScalingApplicable(v11)
        || (HwndDpi = UserGetHwndDpi(*((void **)this + 60)), !HwndDpi || (_WORD)v19 == 96) )
      {
        v12 = *((_DWORD *)this + 134);
        if ( (v12 & 1) != 0 )
        {
          *(_QWORD *)((char *)this + 548) = 0LL;
          *((_DWORD *)this + 9) |= 0x10u;
          *(_QWORD *)((char *)this + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          *((_DWORD *)this + 134) = v12 & 0xFFFFFFF8 | 4;
        }
        goto LABEL_20;
      }
      v17 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v17.m128_f32[0] = v17.m128_f32[0] / 96.0;
      v16 = _mm_unpacklo_ps(v17, v17).m128_u64[0];
    }
    DC::vSetDpiScaling(this, v16);
LABEL_20:
    v13 = *((_QWORD *)this + 64);
    *((_QWORD *)this + 316) = 0LL;
    if ( !v13 || *(_QWORD *)(v13 + 56) == *((_QWORD *)this + 66) )
      return 1;
    *((_QWORD *)this + 66) = *(_QWORD *)(v13 + 56);
LABEL_37:
    DC::bSetDefaultRegion(this);
    return 1;
  }
  if ( (v2 & 0x200000) == 0 && (v2 & 0x800) == 0 && !*((_DWORD *)this + 8) )
  {
    *((_DWORD *)this + 8) = 2;
    v5 = (void *)*((_QWORD *)this + 60);
    *((_DWORD *)this + 9) = v2 | 0x800;
    *((_QWORD *)this + 316) = *((_QWORD *)this + 64);
    *((_QWORD *)this + 64) = 0LL;
    if ( v5
      && (unsigned int)UserIsGDIScalingApplicable(v5)
      && (v14 = UserGetHwndDpi(*((void **)this + 60)), v14 && (_WORD)v19 != 96) )
    {
      v15 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v15.m128_f32[0] = v15.m128_f32[0] / 96.0;
      DC::vSetDpiScaling(this, _mm_unpacklo_ps(v15, v15).m128_u64[0]);
    }
    else
    {
      v6 = *((_DWORD *)this + 134);
      if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)((char *)this + 548) = 0LL;
        *((_DWORD *)this + 9) |= 0x10u;
        *(_QWORD *)((char *)this + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        *((_DWORD *)this + 134) = v6 & 0xFFFFFFF8 | 4;
      }
    }
    v19 = *((_QWORD *)this + 6);
    if ( *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v19, &v20).cx == *((_DWORD *)this + 132) )
    {
      v20 = *((_QWORD *)this + 66);
      v7 = PDEVOBJ::sizl((PDEVOBJ *)&v19, &v21);
      if ( *(_DWORD *)(*(_QWORD *)&v7 + 4LL) == HIDWORD(v20) )
        return 1;
    }
    *((_QWORD *)this + 66) = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v19, &v20);
    goto LABEL_37;
  }
  return v3;
}
