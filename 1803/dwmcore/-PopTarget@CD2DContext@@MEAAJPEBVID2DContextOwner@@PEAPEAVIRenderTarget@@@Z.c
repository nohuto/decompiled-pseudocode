/*
 * XREFs of ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800961C0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006589C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180094F78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180095BF0 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C3D28 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCDrawListEntry@@@@QEAAXI@Z @ 0x1800C7D98 (-Optimize@-$ShrinkableReferenceArray@PEAVCDrawListEntry@@@@QEAAXI@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z @ 0x1800C9100 (-Optimize@-$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  __int64 v3; // rbx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rcx
  int v14; // edx
  int v15; // ebp
  __int64 *v16; // rsi
  unsigned int v17; // edx
  int v18; // eax
  int v19; // eax
  struct ID2D1PrivateCompositorRenderer **v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  CD2DTarget *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  unsigned int v31; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 56);
  if ( v3 )
  {
    v6 = *((_DWORD *)this + 86);
    v7 = 0LL;
    if ( v6 )
      v7 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v6 - 1));
    v8 = *(_QWORD *)(v7 + 24);
    *(_DWORD *)(v3 + 92) = *((_DWORD *)this + 8);
    v9 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 24LL))(v8, v33) + 8);
    *(_DWORD *)(v3 + 112) = v9;
    if ( v9 == 1 )
      *(float *)(v3 + 116) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v8 + 168LL))(v8);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 112LL))(v8);
    *(float *)(v3 + 96) = 2.0 / (float)*(int *)(v10 + 140);
    LODWORD(v10) = *(_DWORD *)(v10 + 144);
    *(_DWORD *)(v3 + 104) = -1082130432;
    *(_DWORD *)(v3 + 108) = 1065353216;
    *(float *)(v3 + 100) = -2.0 / (float)(int)v10;
    v11 = *((_QWORD *)this + 56);
    CD2DContext::EnsureBeginDraw(this);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 120LL))(*((_QWORD *)this + 23), v11);
    v12 = *((_QWORD *)this + 56);
    if ( v12 )
    {
      v13 = (volatile signed __int32 *)(v12 + 8);
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 && v13 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 16LL))(v13, 1LL);
      *((_QWORD *)this + 56) = 0LL;
    }
  }
  else
  {
    v21 = (struct ID2D1PrivateCompositorRenderer **)((char *)this + 456);
    v22 = *((_QWORD *)this + 57);
    if ( v22 )
    {
      *(_DWORD *)(v22 + 44) = *((_DWORD *)this + 8);
      *(_OWORD *)(v22 + 48) = *(_OWORD *)((char *)this + 424);
      *(_DWORD *)(v22 + 64) = *((_DWORD *)this + 110);
      *(_BYTE *)(v22 + 68) = 1;
      v30 = CD2DContext::DrawCustomCallbackRendererInternal(this, *v21);
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x331u);
      else
        ReleaseInterface<CWARPCallbackRenderer>(v21);
    }
  }
  v14 = *((_DWORD *)this + 86);
  v15 = 0;
  v16 = 0LL;
  v31 = 0;
  if ( v14 )
  {
    v17 = v14 - 1;
    v16 = *(__int64 **)(*((_QWORD *)this + 40) + 8LL * v17);
  }
  else
  {
    v17 = -1;
  }
  *((_DWORD *)this + 86) = v17;
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 86) )
  {
    v23 = *((_DWORD *)this + 86);
    v24 = 0LL;
    if ( v23 )
      v24 = *(CD2DTarget **)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v23 - 1));
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v24 + 3) + 8LL))(*((_QWORD **)v24 + 3));
      *a3 = (struct IRenderTarget *)*((_QWORD *)v24 + 3);
    }
    if ( *((_BYTE *)this + 464) )
      CD2DTarget::ApplyState(v24, this);
  }
  else
  {
    if ( *((_BYTE *)this + 464) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 17LL, 0LL);
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 392LL))(
              *((_QWORD *)this + 22),
              0LL,
              0LL);
      v31 = v18;
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3E4u);
      *((_WORD *)this + 232) = 0;
      v19 = *((_DWORD *)this + 29);
      if ( !v19 )
      {
        v26 = *((unsigned int *)this + 30);
        *((_DWORD *)this + 29) = 512;
        ShrinkableReferenceArray<CDrawListEntry *>::Optimize((char *)this + 8, v26);
        v27 = *((unsigned int *)this + 32);
        *((_DWORD *)this + 30) = 0;
        ShrinkableReferenceArray<CWARPCallbackRenderer *>::Optimize((char *)this + 40, v27);
        v28 = *((unsigned int *)this + 34);
        *(_QWORD *)((char *)this + 124) = *((unsigned int *)this + 16);
        ShrinkableReferenceArray<CWARPCallbackRenderer *>::Optimize((char *)this + 72, v28);
        v29 = *((_DWORD *)this + 24);
        *((_DWORD *)this + 34) = 0;
        *((_DWORD *)this + 33) = v29;
        v19 = *((_DWORD *)this + 29);
      }
      *((_DWORD *)this + 29) = v19 - 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 17LL, 0LL);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v16[3])(
           v16[3],
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v32) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      *((_QWORD *)this + 52) = v16;
      goto LABEL_25;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 23) + 56LL))(*((_QWORD *)this + 23), 0LL, 0LL);
  }
  if ( v16 )
  {
    v25 = v16[5];
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    ReleaseInterfaceNoNULL<IWICBitmap>(v16[4]);
    ReleaseInterfaceNoNULL<IWICBitmap>(v16[3]);
    operator delete(v16, 0x50uLL);
  }
LABEL_25:
  TranslateDXGIorD3DErrorInContext(v15, 0, &v31);
  return v31;
}
