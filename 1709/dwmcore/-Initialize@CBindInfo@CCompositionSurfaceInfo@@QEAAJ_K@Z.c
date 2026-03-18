/*
 * XREFs of ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180076594
 * Callers:
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18004BBC4 (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BDE0 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x18007607C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18007615C (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800763B4 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180076684 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x180076A28 (--$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::Initialize(CCompositionSurfaceInfo::CBindInfo *this, __int64 a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-E0h]
  struct CBitmapRealization *v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[120]; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v16[97]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 v17[64]; // [rsp+3D0h] [rbp+2D0h] BYREF

  v13 = a2;
  v3 = 0;
  memset_0(v14, 0, 0x410uLL);
  if ( *((_QWORD *)this + 1) )
    CCompositionSurfaceInfo::CBindInfo::Reset(this);
  v4 = NtQueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), &v13, v14);
  if ( v4 < 0 )
  {
    v11 = 955;
    v3 = v4 | 0x10000000;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202508, 3u, v3, v11);
    goto LABEL_9;
  }
  v5 = v14[0];
  *((_QWORD *)this + 1) = v13;
  *((_DWORD *)this + 4) = v5;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v3 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202508, 3u, -2147024809, 0x3DDu);
        goto LABEL_13;
      }
      v7 = CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
             (struct CDecodeBitmap **)this,
             (const struct CSM_BUFFER_ATTRIBUTES *)v15,
             v16);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202508, 3u, v7, 0x3CFu);
      else
        CCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v17);
LABEL_9:
      if ( v3 >= 0 )
        return (unsigned int)v3;
LABEL_13:
      *((_QWORD *)this + 1) = 0LL;
      *((_DWORD *)this + 4) = 0;
      return (unsigned int)v3;
    }
    v12 = 0LL;
    v9 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
           (struct CDecodeBitmap **)this,
           (const struct CSM_BUFFER_ATTRIBUTES *)v15,
           (const struct CSM_REALIZATION_INFO *)v16,
           &v12);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18021AAB8, 3u, v9, 0x543u);
    }
    else
    {
      v10 = CCompositionSurfaceInfo::CBindInfo::AddRealization(this, v12);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18021AAB8, 3u, v10, 0x548u);
    }
    ReleaseInterfaceNoNULL<CBitmapRealization>(v12);
    if ( v3 < 0 )
    {
      v11 = 968;
      goto LABEL_21;
    }
  }
  return (unsigned int)v3;
}
