/*
 * XREFs of ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1801B50A0
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B51BC (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B57F0 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B58EC (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180135BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, __int64, __int64 *); // rax
  int v7; // eax
  int RenderTargetBitmapFromTexture; // eax
  __int64 v10; // [rsp+50h] [rbp-38h] BYREF
  int v11[2]; // [rsp+58h] [rbp-30h]
  int v12[4]; // [rsp+60h] [rbp-28h] BYREF

  v2 = 0;
  v10 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 55);
  if ( v4 )
  {
    v5 = *v4;
    v11[1] = 0;
    v12[2] = 0;
    v11[0] = 1;
    v6 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 352);
    v12[0] = 87;
    v12[1] = 3;
    v7 = v6(v4, a2, &v10);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x17Eu);
    }
    else
    {
      ReleaseInterface<ID2D1Geometry>((__int64 *)this + 54);
      RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                        (__int64)&qword_18023E818,
                                        *(__int64 *)v11,
                                        0LL,
                                        (__int64)v12,
                                        (struct _GUID *)this + 2,
                                        *(struct _LUID *)((char *)this + 256),
                                        *((_DWORD *)this + 104),
                                        (struct ID3D11Texture2D *)v10,
                                        (_QWORD *)this + 54);
      v2 = RenderTargetBitmapFromTexture;
      if ( RenderTargetBitmapFromTexture < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x189u);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v10);
  return v2;
}
