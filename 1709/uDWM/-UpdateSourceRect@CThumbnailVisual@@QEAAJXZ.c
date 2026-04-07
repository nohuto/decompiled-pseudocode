/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000FB98
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800106B0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000F610 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000F768 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180027F6C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x1800780B8 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  _DWORD *v4; // rcx
  LONG v5; // r9d
  __int64 v6; // rdx
  __int64 j; // rax
  LONG top; // edx
  bool v9; // sf
  LONG v10; // ecx
  LONG bottom; // eax
  LONG v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 i; // rax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // r8d
  __m128i v24; // xmm0
  int v25; // ebx
  int v26; // eax
  __int64 v27; // r8
  struct tagPOINT v28[2]; // [rsp+38h] [rbp-9h] BYREF
  int nNumerator[4]; // [rsp+48h] [rbp+7h]
  struct tagRECT v30; // [rsp+58h] [rbp+17h] BYREF
  __int64 v31; // [rsp+68h] [rbp+27h] BYREF
  __int64 v32; // [rsp+70h] [rbp+2Fh]

  v2 = 0;
  if ( !*((_QWORD *)this + 49) || !*((_QWORD *)this + 46) )
    return v2;
  v28[0] = 0LL;
  v28[1] = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v31 = 0LL;
    v17 = 0;
    v18 = *((_QWORD *)this + 47);
    v19 = *(_QWORD *)(v18 + 512);
    if ( v19 )
      v17 = *(_DWORD *)(v19 + 120);
    v20 = 0;
    *(float *)&v32 = (float)v17;
    v21 = *(_QWORD *)(v18 + 512);
    if ( v21 )
      v20 = *(_DWORD *)(v21 + 124);
    *((float *)&v32 + 1) = (float)v20;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)this + 46);
  if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
  {
    for ( i = 0LL; i < 4; ++i )
      *((float *)&v31 + i) = (float)*(int *)(v3 + 4 * i + 56);
    top = *(_DWORD *)(v3 + 60);
    v10 = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 56);
    v9 = v10 < 0;
    v28[0].x = *(_DWORD *)(v3 + 56);
    bottom = *(_DWORD *)(v3 + 68);
LABEL_13:
    if ( v9 )
      v10 = 0;
    v28[0].y = top;
    v12 = bottom - top;
    v28[1].x = v10;
    if ( v12 < 0 )
      v12 = 0;
    v28[1].y = v12;
    goto LABEL_18;
  }
  v4 = (_DWORD *)*((_QWORD *)this + 47);
  if ( v4 )
  {
    v30.left = v4[22];
    v30.top = v4[24];
    v5 = v4[20] - v4[23];
    v30.right = v5;
    v30.bottom = v4[21] - v4[25];
    v6 = *(_QWORD *)(v3 + 24);
    if ( (*(_BYTE *)(v6 + 596) & 8) != 0
      && !*(_DWORD *)(v3 + 77)
      && v4[18] == 2
      && ((*(_DWORD *)(v6 + 100) & 0x1000000) != 0 || (*(_BYTE *)(v6 + 597) & 1) != 0) )
    {
      v30.right = v5 - *(_DWORD *)(v6 + 292) - *(_DWORD *)(v6 + 288);
      v30.bottom -= *(_DWORD *)(v6 + 296) + *(_DWORD *)(v6 + 300);
    }
    if ( *(_BYTE *)(v3 + 32) )
    {
      nNumerator[2] = v4[20];
      nNumerator[3] = v4[21];
      *(_QWORD *)nNumerator = 0LL;
      v30 = *(struct tagRECT *)nNumerator;
    }
    else if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 57),
                                                                                *(_QWORD *)(*(_QWORD *)(v3 + 24) + 120LL)) )
    {
      ShiftViewPortOrigin(&v30);
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v31 + j) = (float)*(int *)((char *)&v30.left + j);
    top = v30.top;
    v9 = v30.right - v30.left < 0;
    v10 = v30.right - v30.left;
    v28[0].x = v30.left;
    bottom = v30.bottom;
    goto LABEL_13;
  }
LABEL_18:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v22 = *((_DWORD *)this + 129) - v28[0].x;
    v23 = *((_DWORD *)this + 131);
    v24 = _mm_srli_si128(*(__m128i *)((char *)this + 500), 8);
    *(_OWORD *)nNumerator = *(_OWORD *)((char *)this + 500);
    v25 = MulDiv(v22, _mm_cvtsi128_si32(v24), v23) + _mm_cvtsi128_si32(*(__m128i *)nNumerator);
    v26 = MulDiv(*((_DWORD *)this + 130) - v28[0].y, nNumerator[3], *((_DWORD *)this + 132));
    v27 = *((_QWORD *)this + 46);
    v28[0].x = v25 + *(_DWORD *)(v27 + 40);
    v28[0].y = v26 + nNumerator[1] + *(_DWORD *)(v27 + 44);
    CVisual::SetOffset(this, v28);
  }
  else
  {
    v13 = *((_QWORD *)this + 49);
    *(_OWORD *)((char *)this + 516) = *(_OWORD *)&v28[0].x;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v13 + 16) + 304LL))(
            *(_QWORD *)(v13 + 16),
            *(unsigned int *)(v13 + 24),
            &v31);
    v2 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x3B0u);
  }
  return v2;
}
