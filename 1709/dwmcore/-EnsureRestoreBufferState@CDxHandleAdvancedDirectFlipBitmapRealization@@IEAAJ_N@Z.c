/*
 * XREFs of ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1801D1E30
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D1F3C (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D2600 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D26FC (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A52C0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, __int64, __int64 *); // rax
  signed int v7; // eax
  signed int RenderTargetBitmapFromTexture; // eax
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  int v11[2]; // [rsp+48h] [rbp-30h]
  int v12[4]; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  v10 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 53);
  if ( v4 )
  {
    v5 = *v4;
    v11[1] = 0;
    v12[2] = 0;
    v11[0] = 1;
    v6 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 360);
    v12[0] = 87;
    v12[1] = 3;
    v7 = v6(v4, a2, &v10);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x188u);
    }
    else
    {
      ReleaseInterface<ID2D1Geometry>((__int64 *)this + 52);
      RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                        (__int64)&qword_18026EEE8,
                                        *(__int64 *)v11,
                                        0LL,
                                        (__int64)v12,
                                        *(struct _LUID *)((char *)this + 288),
                                        *((_DWORD *)this + 100),
                                        (struct ID3D11Texture2D *)v10,
                                        (_QWORD *)this + 52);
      v2 = RenderTargetBitmapFromTexture;
      if ( RenderTargetBitmapFromTexture < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmapFromTexture, 0x192u);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v10);
  return v2;
}
