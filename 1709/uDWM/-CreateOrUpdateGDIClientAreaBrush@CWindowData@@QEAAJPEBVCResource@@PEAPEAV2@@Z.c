/*
 * XREFs of ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x18007A4B4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18006DE68 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x1800780B8 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowData::CreateOrUpdateGDIClientAreaBrush(
        CWindowData *this,
        const struct CResource *a2,
        struct CResource **a3)
{
  unsigned int v5; // esi
  CBaseObject *v6; // rdi
  bool v7; // zf
  LONG bottom; // edx
  LONG right; // ecx
  LONG top; // r8d
  LONG left; // r9d
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // r9d
  int v17; // r8d
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  CBaseObject *v21; // rdi
  int v22; // ecx
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  int v25; // edx
  float v26; // xmm3_4
  int v27; // eax
  int v28; // eax
  __int64 v29; // r9
  unsigned int v30; // edx
  int v31; // eax
  CBaseObject *v33; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v34; // [rsp+98h] [rbp-1h] BYREF
  float v35; // [rsp+A8h] [rbp+Fh] BYREF
  float v36; // [rsp+ACh] [rbp+13h]
  float v37; // [rsp+B0h] [rbp+17h]
  float v38; // [rsp+B4h] [rbp+1Bh]
  __int128 v39; // [rsp+B8h] [rbp+1Fh] BYREF

  v5 = 0;
  v6 = 0LL;
  v33 = 0LL;
  if ( *((_QWORD *)this + 48) )
  {
    v7 = (*((_BYTE *)this + 592) & 0x40) == 0;
    v39 = _xmm;
    if ( v7 && CDesktopManager::AdjustDesktopWindowSize(*((HWND *)this + 5), &v34) )
    {
      ShiftViewPortOrigin(&v34);
      bottom = v34.bottom;
      right = v34.right;
      top = v34.top;
      left = v34.left;
    }
    else
    {
      v12 = 0;
      v13 = *((_DWORD *)this + 49);
      v14 = 0;
      if ( (*((_BYTE *)this + 595) & 4) != 0 )
      {
        v15 = v13 - *((_DWORD *)this + 47);
        v16 = *((_DWORD *)this + 63);
        v17 = *((_DWORD *)this + 65);
        if ( v15 >= 0 )
          v12 = v15;
        v18 = v12 - *((_DWORD *)this + 64);
        if ( *((_DWORD *)this + 50) - *((_DWORD *)this + 48) >= 0 )
          v14 = *((_DWORD *)this + 50) - *((_DWORD *)this + 48);
        v19 = v14 - *((_DWORD *)this + 66);
      }
      else
      {
        v20 = v13 - *((_DWORD *)this + 47);
        v16 = 0;
        v17 = 0;
        if ( v20 >= 0 )
          v12 = v20;
        v18 = v12 - *((_DWORD *)this + 64) - *((_DWORD *)this + 63);
        if ( *((_DWORD *)this + 50) - *((_DWORD *)this + 48) >= 0 )
          v14 = *((_DWORD *)this + 50) - *((_DWORD *)this + 48);
        v19 = v14 - *((_DWORD *)this + 66) - *((_DWORD *)this + 65);
      }
      left = *((_DWORD *)this + 20) + v16;
      right = v18 - *((_DWORD *)this + 21);
      top = *((_DWORD *)this + 22) + v17;
      bottom = v19 - *((_DWORD *)this + 23);
      v34.bottom = bottom;
      v34.left = left;
      v34.right = right;
      v34.top = top;
    }
    v21 = *a3;
    v22 = right - left;
    v23 = _mm_cvtsi32_si128(left);
    if ( v22 < 0 )
      v22 = 0;
    v24 = _mm_cvtsi32_si128(top);
    v25 = bottom - top;
    v33 = *a3;
    LODWORD(v26) = _mm_cvtepi32_ps(v23).m128_u32[0];
    if ( v25 < 0 )
      v25 = 0;
    v35 = v26 + 0.60000002;
    v36 = _mm_cvtepi32_ps(v24).m128_f32[0] + 0.60000002;
    v37 = fmaxf((float)v22 - 1.2, 0.0) + (float)(v26 + 0.60000002);
    v38 = fmaxf((float)v25 - 1.2, 0.0) + v36;
    if ( !v21 || (_InterlockedIncrement((volatile signed __int32 *)v21 + 2), (v6 = v33) == 0LL) )
    {
      v27 = CResource::Create(0x11u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v33);
      v5 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x187Eu);
LABEL_37:
        v6 = v33;
        goto LABEL_38;
      }
      v6 = v33;
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, float *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD))(**((_QWORD **)v6 + 2) + 1192LL))(
            *((_QWORD *)v6 + 2),
            *((unsigned int *)v6 + 6),
            *((_QWORD *)v6 + 2),
            &v39,
            &v35,
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
            *(_DWORD *)(*((_QWORD *)this + 48) + 24LL));
    v5 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x1891u);
LABEL_38:
      if ( v6 )
        CBaseObject::Release(v6);
      return v5;
    }
    v29 = 0LL;
    v30 = 0;
    if ( (*((_BYTE *)this + 376) & 2) != 0 )
    {
      v29 = *((_DWORD *)this + 95) & 0xFFFFFF;
      v30 = *((_DWORD *)this + 95) | 0xFF000000;
    }
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int))(**((_QWORD **)v6 + 2) + 336LL))(
            *((_QWORD *)v6 + 2),
            *((unsigned int *)v6 + 6),
            *((unsigned int *)this + 94),
            v29,
            v30);
    v5 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x18A7u);
      goto LABEL_38;
    }
  }
  if ( *a3 )
    CBaseObject::Release(*a3);
  *a3 = v6;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    goto LABEL_37;
  }
  return v5;
}
