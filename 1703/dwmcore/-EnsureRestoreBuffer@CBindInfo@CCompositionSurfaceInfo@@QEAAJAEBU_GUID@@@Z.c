/*
 * XREFs of ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180175008
 * Callers:
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180175C08 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct _GUID *a2)
{
  unsigned int v2; // ebx
  void **v3; // r15
  __int64 *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  unsigned int *v11; // rdi
  char v12; // al
  int RenderTargetBitmap; // eax
  int v15; // [rsp+80h] [rbp-9h] BYREF
  int v16; // [rsp+84h] [rbp-5h] BYREF
  __int64 v17; // [rsp+88h] [rbp-1h]
  _BYTE v18[8]; // [rsp+90h] [rbp+7h] BYREF
  int v19[2]; // [rsp+98h] [rbp+Fh] BYREF
  int v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh] BYREF
  int v22; // [rsp+B0h] [rbp+27h]

  v2 = 0;
  v3 = (void **)((char *)this + 80);
  if ( !*((_QWORD *)this + 10) )
  {
    v6 = (__int64 *)*((_QWORD *)this + 9);
    v16 = 0;
    v15 = 0;
    v6 += 13;
    v22 = 0;
    v21 = 0x300000057LL;
    v7 = *v6;
    v17 = 1LL;
    (*(void (__fastcall **)(__int64 *, int *, int *))(v7 + 24))(v6, &v16, &v15);
    v20 = 40;
    *(_QWORD *)v19 = "DWM Rendertarget (DFlip+ restore buffer)";
    v8 = (_QWORD *)*((_QWORD *)this + 9);
    v9 = v8 + 13;
    v10 = v8[13];
    v11 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v8 + 88LL))(v8, v18);
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(v10 + 128))(v9);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_18023E818,
                           (__int64)v19,
                           v16,
                           v15,
                           v17,
                           0,
                           (struct PixelFormatInfo *)&v21,
                           1,
                           a2,
                           *(struct _LUID *)((char *)this + 128),
                           *v11,
                           v12,
                           0,
                           1,
                           v3);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x6B5u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_x(
        *(_QWORD *)this,
        &EVTDESC_ADVANCED_DIRECTFLIP_CREATERESTOREBUFFER,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
    }
  }
  return v2;
}
