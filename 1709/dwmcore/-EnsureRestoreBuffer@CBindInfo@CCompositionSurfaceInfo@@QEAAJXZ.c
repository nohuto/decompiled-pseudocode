/*
 * XREFs of ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18017C048
 * Callers:
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x18017CC20 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer(CCompositionSurfaceInfo::CBindInfo *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // r15
  __int64 *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  unsigned int *v9; // rdi
  char v10; // al
  signed int RenderTargetBitmap; // eax
  unsigned int v13; // [rsp+78h] [rbp+7h] BYREF
  unsigned int v14; // [rsp+7Ch] [rbp+Bh] BYREF
  __int64 v15; // [rsp+80h] [rbp+Fh]
  _BYTE v16[8]; // [rsp+88h] [rbp+17h] BYREF
  const char *v17; // [rsp+90h] [rbp+1Fh] BYREF
  int v18; // [rsp+98h] [rbp+27h]
  _DWORD v19[4]; // [rsp+A0h] [rbp+2Fh] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 80);
  if ( !*((_QWORD *)this + 10) )
  {
    v4 = (__int64 *)*((_QWORD *)this + 9);
    v14 = 0;
    v13 = 0;
    v4 += 18;
    v19[2] = 0;
    v19[0] = 87;
    v19[1] = 3;
    v5 = *v4;
    v15 = 1LL;
    (*(void (__fastcall **)(__int64 *, unsigned int *, unsigned int *))(v5 + 32))(v4, &v14, &v13);
    v18 = 40;
    v17 = "DWM Rendertarget (DFlip+ restore buffer)";
    v6 = (_QWORD *)*((_QWORD *)this + 9);
    v7 = v6 + 18;
    v8 = v6[18];
    v9 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v6 + 48LL))(v6, v16);
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(v8 + 104))(v7);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_18026EEE8,
                           (__int64)&v17,
                           v14,
                           v13,
                           v15,
                           0,
                           (__int64)v19,
                           1,
                           *(struct _LUID *)((char *)this + 128),
                           *v9,
                           v10,
                           0,
                           1,
                           v2);
    v1 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmap, 0x6B6u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0x(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ADVANCED_DIRECTFLIP_CREATERESTOREBUFFER,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
    }
  }
  return v1;
}
