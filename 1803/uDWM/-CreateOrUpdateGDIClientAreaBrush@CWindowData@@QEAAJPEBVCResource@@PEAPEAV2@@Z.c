/*
 * XREFs of ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x18008382C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800083B8 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180074BB8 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x1800814C8 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowData::CreateOrUpdateGDIClientAreaBrush(
        CWindowData *this,
        const struct CResource *a2,
        struct CResource **a3)
{
  CBaseObject *v3; // rdi
  unsigned int v4; // esi
  bool v7; // zf
  LONG bottom; // ecx
  LONG right; // edx
  int top; // r8d
  int left; // r9d
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // r9d
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  float v24; // xmm0_4
  unsigned int v25; // eax
  __m128i v26; // xmm0
  CBaseObject *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // r9
  unsigned int v31; // edx
  int v32; // eax
  CBaseObject *v34; // [rsp+90h] [rbp+7h] BYREF
  struct tagRECT v35; // [rsp+98h] [rbp+Fh] BYREF
  float v36; // [rsp+A8h] [rbp+1Fh] BYREF
  float v37; // [rsp+ACh] [rbp+23h]
  float v38; // [rsp+B0h] [rbp+27h]
  float v39; // [rsp+B4h] [rbp+2Bh]
  __int128 v40; // [rsp+B8h] [rbp+2Fh] BYREF

  v3 = 0LL;
  v4 = 0;
  v34 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    v7 = (*((_BYTE *)this + 592) & 0x40) == 0;
    v40 = _xmm;
    if ( v7 && CDesktopManager::AdjustDesktopWindowSize(*((HWND *)this + 5), &v35) )
    {
      ShiftViewPortOrigin(&v35);
      bottom = v35.bottom;
      right = v35.right;
      top = v35.top;
      left = v35.left;
    }
    else
    {
      v12 = 0;
      v13 = *((_DWORD *)this + 47);
      v14 = 0;
      if ( (*((_BYTE *)this + 595) & 2) != 0 )
      {
        v15 = v13 - *((_DWORD *)this + 45);
        v16 = *((_DWORD *)this + 61);
        v17 = *((_DWORD *)this + 63);
        if ( v15 >= 0 )
          v12 = v15;
        v18 = v12 - *((_DWORD *)this + 62);
        if ( *((_DWORD *)this + 48) - *((_DWORD *)this + 46) >= 0 )
          v14 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
        v19 = v14 - *((_DWORD *)this + 64);
      }
      else
      {
        v16 = 0;
        v17 = 0;
        v20 = v13 - *((_DWORD *)this + 45);
        if ( v20 >= 0 )
          v12 = v20;
        v18 = v12 - *((_DWORD *)this + 61) - *((_DWORD *)this + 62);
        if ( *((_DWORD *)this + 48) - *((_DWORD *)this + 46) >= 0 )
          v14 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
        v19 = v14 - *((_DWORD *)this + 64) - *((_DWORD *)this + 63);
      }
      left = *((_DWORD *)this + 20) + v16;
      right = v18 - *((_DWORD *)this + 21);
      top = *((_DWORD *)this + 22) + v17;
      bottom = v19 - *((_DWORD *)this + 23);
      v35.bottom = bottom;
      v35.left = left;
      v35.right = right;
      v35.top = top;
    }
    v21 = right - left;
    v22 = 0;
    if ( v21 >= 0 )
      v22 = v21;
    v23 = bottom - top;
    v24 = (float)v22;
    v25 = 0;
    if ( v23 >= 0 )
      v25 = v23;
    v36 = (float)left + 0.60000002;
    v37 = (float)top + 0.60000002;
    v38 = fmaxf(v24 - 1.2, 0.0) + v36;
    v26 = _mm_cvtsi32_si128(v25);
    v27 = *a3;
    v34 = v27;
    v39 = fmaxf(_mm_cvtepi32_ps(v26).m128_f32[0] - 1.2, 0.0) + v37;
    if ( v27 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
    }
    else
    {
      v29 = CResource::Create(0x11u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v34);
      v4 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x19B7u);
LABEL_36:
        v3 = v34;
        goto LABEL_37;
      }
    }
    v3 = v34;
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, float *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD))(**((_QWORD **)v34 + 2) + 1208LL))(
            *((_QWORD *)v34 + 2),
            *((unsigned int *)v34 + 6),
            *((_QWORD *)v34 + 2),
            &v40,
            &v36,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            1,
            1,
            *(_DWORD *)(*((_QWORD *)this + 47) + 24LL));
    v4 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x19CAu);
LABEL_37:
      if ( v3 )
        CBaseObject::Release(v3);
      return v4;
    }
    v30 = 0LL;
    v31 = 0;
    if ( (*((_BYTE *)this + 368) & 2) != 0 )
    {
      v30 = *((_DWORD *)this + 93) & 0xFFFFFF;
      v31 = *((_DWORD *)this + 93) | 0xFF000000;
    }
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int))(**((_QWORD **)v3 + 2) + 344LL))(
            *((_QWORD *)v3 + 2),
            *((unsigned int *)v3 + 6),
            *((unsigned int *)this + 92),
            v30,
            v31);
    v4 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x19E0u);
      goto LABEL_37;
    }
  }
  if ( *a3 )
    CBaseObject::Release(*a3);
  *a3 = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
    goto LABEL_36;
  }
  return v4;
}
