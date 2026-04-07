/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180012A68
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013600 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x1800124E0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180012638 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x1800273A8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x1800814C8 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  _DWORD *v4; // rcx
  LONG v5; // edx
  __int64 v6; // r9
  char v7; // al
  __int64 j; // rax
  LONG top; // edx
  bool v10; // sf
  LONG v11; // ecx
  LONG bottom; // eax
  LONG v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 i; // rax
  __m128i v18; // xmm6
  int v19; // ebx
  int v20; // eax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  struct tagPOINT v27[2]; // [rsp+38h] [rbp-9h] BYREF
  struct tagRECT v28; // [rsp+48h] [rbp+7h]
  struct tagRECT v29; // [rsp+58h] [rbp+17h] BYREF
  __int64 v30; // [rsp+68h] [rbp+27h] BYREF
  __int64 v31; // [rsp+70h] [rbp+2Fh]

  v2 = 0;
  if ( !*((_QWORD *)this + 49) || !*((_QWORD *)this + 46) )
    return v2;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v30 = 0LL;
    v22 = 0;
    v23 = *((_QWORD *)this + 47);
    v24 = *(_QWORD *)(v23 + 512);
    if ( v24 )
      v22 = *(_DWORD *)(v24 + 120);
    v25 = 0;
    *(float *)&v31 = (float)v22;
    v26 = *(_QWORD *)(v23 + 512);
    if ( v26 )
      v25 = *(_DWORD *)(v26 + 124);
    *((float *)&v31 + 1) = (float)v25;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)this + 46);
  if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
  {
    for ( i = 0LL; i < 4; ++i )
      *((float *)&v30 + i) = (float)*(int *)(v3 + 4 * i + 56);
    top = *(_DWORD *)(v3 + 60);
    v11 = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 56);
    v10 = v11 < 0;
    v27[0].x = *(_DWORD *)(v3 + 56);
    bottom = *(_DWORD *)(v3 + 68);
LABEL_13:
    if ( v10 )
      v11 = 0;
    v27[0].y = top;
    v13 = bottom - top;
    v27[1].x = v11;
    if ( v13 < 0 )
      v13 = 0;
    v27[1].y = v13;
    goto LABEL_18;
  }
  v4 = (_DWORD *)*((_QWORD *)this + 47);
  if ( v4 )
  {
    v29.left = v4[22];
    v29.top = v4[24];
    v5 = v4[20] - v4[23];
    v29.right = v5;
    v29.bottom = v4[21] - v4[25];
    v6 = *(_QWORD *)(v3 + 24);
    v7 = *(_BYTE *)(v6 + 596);
    if ( (v7 & 4) != 0 && !*(_DWORD *)(v3 + 77) && v4[18] == 2 && ((*(_DWORD *)(v6 + 100) & 0x1000000) != 0 || v7 < 0) )
    {
      v29.right = v5 - *(_DWORD *)(v6 + 284) - *(_DWORD *)(v6 + 280);
      v29.bottom -= *(_DWORD *)(v6 + 288) + *(_DWORD *)(v6 + 292);
    }
    if ( *(_BYTE *)(v3 + 32) )
    {
      *(_QWORD *)&v28.right = *((_QWORD *)v4 + 10);
      *(_QWORD *)&v28.left = 0LL;
      v29 = v28;
    }
    else if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 56),
                                                                                *(_QWORD *)(*(_QWORD *)(v3 + 24) + 120LL)) )
    {
      ShiftViewPortOrigin(&v29);
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v30 + j) = (float)*(int *)((char *)&v29.left + j);
    top = v29.top;
    v10 = v29.right - v29.left < 0;
    v11 = v29.right - v29.left;
    v27[0].x = v29.left;
    bottom = v29.bottom;
    goto LABEL_13;
  }
LABEL_18:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v18 = *(__m128i *)((char *)this + 500);
    v19 = MulDiv(*((_DWORD *)this + 129) - v27[0].x, _mm_cvtsi128_si32(_mm_srli_si128(v18, 8)), *((_DWORD *)this + 131))
        + _mm_cvtsi128_si32(v18);
    v20 = MulDiv(
            *((_DWORD *)this + 130) - v27[0].y,
            _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)),
            *((_DWORD *)this + 132));
    v21 = *((_QWORD *)this + 46);
    v27[0].x = v19 + *(_DWORD *)(v21 + 40);
    v27[0].y = v20 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 4)) + *(_DWORD *)(v21 + 44);
    CVisual::SetOffset(this, v27);
  }
  else
  {
    v14 = *((_QWORD *)this + 49);
    *(_OWORD *)((char *)this + 516) = *(_OWORD *)&v27[0].x;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v14 + 16) + 312LL))(
            *(_QWORD *)(v14 + 16),
            *(unsigned int *)(v14 + 24),
            &v30);
    v2 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3B0u);
  }
  return v2;
}
