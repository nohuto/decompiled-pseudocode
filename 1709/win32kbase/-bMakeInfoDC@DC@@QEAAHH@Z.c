/*
 * XREFs of ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0052070
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003DFBC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C00A0480 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C00A2100 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00EDCC8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall DC::bMakeInfoDC(DC *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  void *v5; // rcx
  int v6; // eax
  struct tagSIZE v7; // rax
  void *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  __m128 v14; // xmm0
  unsigned __int64 v15; // rdx
  __m128 v16; // xmm0
  int HwndDpi; // eax
  __int64 v18; // [rsp+40h] [rbp+20h] BYREF
  __int64 v19; // [rsp+50h] [rbp+30h] BYREF
  __int64 v20; // [rsp+58h] [rbp+38h] BYREF

  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 1) != 0 )
    return v3;
  if ( !a2 )
  {
    if ( (v2 & 0x800) == 0 || *((_DWORD *)this + 8) != 2 )
      return v3;
    v12 = (_DWORD *)*((_QWORD *)this + 316);
    *((_DWORD *)this + 9) = v2 & 0xFFFFF7FF;
    *((_DWORD *)this + 8) = 0;
    *((_QWORD *)this + 64) = v12;
    if ( v12 && (v12[29] & 0x800) != 0 )
    {
      v15 = _mm_unpacklo_ps((__m128)(unsigned int)v12[149], (__m128)(unsigned int)v12[150]).m128_u64[0];
    }
    else
    {
      v8 = (void *)*((_QWORD *)this + 60);
      if ( !v8
        || !(unsigned int)UserIsGDIScalingApplicable(v8)
        || (HwndDpi = UserGetHwndDpi(*((void **)this + 60)), !HwndDpi || (_WORD)v18 == 96) )
      {
        v9 = *((_DWORD *)this + 134);
        if ( (v9 & 1) != 0 )
        {
          *(_QWORD *)((char *)this + 540) = 0LL;
          *(_QWORD *)((char *)this + 548) = 0LL;
          *((_DWORD *)this + 9) |= 0x10u;
          *((_DWORD *)this + 134) = v9 & 0xFFFFFFF8 | 4;
        }
        goto LABEL_16;
      }
      v16 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v16.m128_f32[0] = v16.m128_f32[0] / 96.0;
      v15 = _mm_unpacklo_ps(v16, v16).m128_u64[0];
    }
    DC::vSetDpiScaling(this, v15);
LABEL_16:
    v10 = *((_QWORD *)this + 64);
    *((_QWORD *)this + 316) = 0LL;
    if ( !v10 || *(_QWORD *)(v10 + 56) == *((_QWORD *)this + 66) )
      return 1;
    *((_QWORD *)this + 66) = *(_QWORD *)(v10 + 56);
LABEL_38:
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
      && (v13 = UserGetHwndDpi(*((void **)this + 60)), v13 && (_WORD)v18 != 96) )
    {
      v14 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v14.m128_f32[0] = v14.m128_f32[0] / 96.0;
      DC::vSetDpiScaling(this, _mm_unpacklo_ps(v14, v14).m128_u64[0]);
    }
    else
    {
      v6 = *((_DWORD *)this + 134);
      if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)((char *)this + 540) = 0LL;
        *(_QWORD *)((char *)this + 548) = 0LL;
        *((_DWORD *)this + 9) |= 0x10u;
        *((_DWORD *)this + 134) = v6 & 0xFFFFFFF8 | 4;
      }
    }
    v18 = *((_QWORD *)this + 6);
    if ( *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v18, &v19).cx == *((_DWORD *)this + 132) )
    {
      v19 = *((_QWORD *)this + 66);
      v7 = PDEVOBJ::sizl((PDEVOBJ *)&v18, &v20);
      if ( *(_DWORD *)(*(_QWORD *)&v7 + 4LL) == HIDWORD(v19) )
        return 1;
    }
    *((_QWORD *)this + 66) = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v18, &v19);
    goto LABEL_38;
  }
  return v3;
}
