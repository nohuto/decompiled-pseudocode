/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800388F4
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180039390 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002EF9C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180038430 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180038590 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18007FD7C (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  int v5; // r9d
  __int64 v6; // r8
  __int64 i; // rax
  LONG top; // edx
  bool v9; // sf
  LONG v10; // ecx
  LONG bottom; // eax
  LONG v12; // eax
  __int64 v13; // rax
  int v14; // eax
  LONG *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // r8d
  __m128i v26; // xmm0
  int v27; // ebx
  int v28; // eax
  __int64 v29; // r8
  struct tagPOINT v30[2]; // [rsp+38h] [rbp-19h] BYREF
  __m128i nNumerator; // [rsp+48h] [rbp-9h]
  struct tagRECT v32; // [rsp+68h] [rbp+17h] BYREF
  __int64 v33; // [rsp+78h] [rbp+27h] BYREF
  __int64 v34; // [rsp+80h] [rbp+2Fh]

  v2 = 0;
  if ( !*((_QWORD *)this + 49) || !*((_QWORD *)this + 46) )
    return v2;
  v30[0] = 0LL;
  v30[1] = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v33 = 0LL;
    v19 = 0;
    v20 = *((_QWORD *)this + 47);
    v21 = *(_QWORD *)(v20 + 512);
    if ( v21 )
      v19 = *(_DWORD *)(v21 + 120);
    v22 = 0;
    *(float *)&v34 = (float)v19;
    v23 = *(_QWORD *)(v20 + 512);
    if ( v23 )
      v22 = *(_DWORD *)(v23 + 124);
    *((float *)&v34 + 1) = (float)v22;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)this + 46);
  if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
  {
    v16 = (LONG *)(v3 + 56);
    v17 = 0LL;
    v18 = v3 + 56 - (_QWORD)&v33;
    do
    {
      *((float *)&v33 + v17) = (float)*(int *)((char *)&v33 + 4 * v17 + v18);
      ++v17;
    }
    while ( v17 < 4 );
    top = v16[1];
    v10 = v16[2] - *v16;
    v9 = v10 < 0;
    v30[0].x = *v16;
    bottom = v16[3];
LABEL_13:
    if ( v9 )
      v10 = 0;
    v30[0].y = top;
    v12 = bottom - top;
    v30[1].x = v10;
    if ( v12 < 0 )
      v12 = 0;
    v30[1].y = v12;
    goto LABEL_18;
  }
  v4 = (_DWORD *)*((_QWORD *)this + 47);
  if ( v4 )
  {
    v5 = v4[20] - v4[23];
    nNumerator.m128i_i32[0] = v4[22];
    nNumerator.m128i_i32[1] = v4[24];
    nNumerator.m128i_i32[3] = v4[21] - v4[25];
    nNumerator.m128i_i32[2] = v5;
    v32 = (struct tagRECT)nNumerator;
    v6 = *(_QWORD *)(v3 + 24);
    if ( (*(_BYTE *)(v6 + 596) & 8) != 0
      && !*(_DWORD *)(v3 + 77)
      && v4[18] == 2
      && ((*(_DWORD *)(v6 + 100) & 0x1000000) != 0 || (*(_BYTE *)(v6 + 597) & 1) != 0) )
    {
      v32.right = v5 - *(_DWORD *)(v6 + 292) - *(_DWORD *)(v6 + 288);
      v32.bottom -= *(_DWORD *)(v6 + 296) + *(_DWORD *)(v6 + 300);
    }
    if ( *(_BYTE *)(v3 + 32) )
    {
      nNumerator.m128i_i32[2] = v4[20];
      nNumerator.m128i_i32[3] = v4[21];
      nNumerator.m128i_i64[0] = 0LL;
      v32 = (struct tagRECT)nNumerator;
    }
    else if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 51),
                                                                                *(_QWORD *)(*(_QWORD *)(v3 + 24) + 120LL)) )
    {
      ShiftViewPortOrigin(&v32);
    }
    for ( i = 0LL; i < 16; i += 4LL )
      *(float *)((char *)&v33 + i) = (float)*(int *)((char *)&v32.left + i);
    top = v32.top;
    v9 = v32.right - v32.left < 0;
    v10 = v32.right - v32.left;
    v30[0].x = v32.left;
    bottom = v32.bottom;
    goto LABEL_13;
  }
LABEL_18:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v24 = *((_DWORD *)this + 129) - v30[0].x;
    v25 = *((_DWORD *)this + 131);
    v26 = _mm_srli_si128(*(__m128i *)((char *)this + 500), 8);
    nNumerator = *(__m128i *)((char *)this + 500);
    v27 = MulDiv(v24, _mm_cvtsi128_si32(v26), v25) + _mm_cvtsi128_si32(nNumerator);
    v28 = MulDiv(*((_DWORD *)this + 130) - v30[0].y, nNumerator.m128i_i32[3], *((_DWORD *)this + 132));
    v29 = *((_QWORD *)this + 46);
    v30[0].x = v27 + *(_DWORD *)(v29 + 40);
    v30[0].y = v28 + nNumerator.m128i_i32[1] + *(_DWORD *)(v29 + 44);
    CVisual::SetOffset((struct tagPOINT *)this, v30);
  }
  else
  {
    v13 = *((_QWORD *)this + 49);
    *(_OWORD *)((char *)this + 516) = *(_OWORD *)&v30[0].x;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v13 + 16) + 304LL))(
            *(_QWORD *)(v13 + 16),
            *(unsigned int *)(v13 + 24),
            &v33);
    v2 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x3B0u);
  }
  return v2;
}
