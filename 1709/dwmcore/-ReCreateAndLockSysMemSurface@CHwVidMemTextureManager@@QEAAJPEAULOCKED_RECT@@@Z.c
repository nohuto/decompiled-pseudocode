/*
 * XREFs of ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801BCDD0
 * Callers:
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801BC7F0 (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18002E430 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?CreateSysMemSurface@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIW4DXGI_FORMAT@@PEAXPEAPEAVCD3DSurface@@@Z @ 0x1801A6F94 (-CreateSysMemSurface@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIW4DXGI_FORMAT@@PEAXPEAPEAVCD3DSu.c)
 *     ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x1801BC95C (-IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CHwVidMemTextureManager::ReCreateAndLockSysMemSurface(
        CHwVidMemTextureManager *this,
        struct LOCKED_RECT *a2)
{
  signed int SysMemSurface; // eax
  unsigned int v5; // ebx
  LONG v6; // eax
  CD3DSurface *v7; // rcx
  signed int v8; // eax
  void *v10; // [rsp+28h] [rbp-30h]
  struct tagRECT v11; // [rsp+40h] [rbp-18h] BYREF

  if ( CHwVidMemTextureManager::IsSysMemSurfaceValid(this)
    || (ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 1),
        SysMemSurface = CD3DDeviceLevel1::CreateSysMemSurface(
                          *(CD3DDeviceLevel1 ***)this,
                          (CHwVidMemTextureManager *)((char *)this + 24),
                          *((_DWORD *)this + 10),
                          *((_DWORD *)this + 11),
                          (enum DXGI_FORMAT)*((_DWORD *)this + 14),
                          v10,
                          (struct CD3DSurface **)this + 1),
        v5 = SysMemSurface,
        SysMemSurface >= 0) )
  {
    v6 = *((_DWORD *)this + 10);
    v7 = (CD3DSurface *)*((_QWORD *)this + 1);
    v11.left = 0;
    v11.top = 0;
    v11.right = v6;
    v11.bottom = *((_DWORD *)this + 11);
    v8 = CD3DSurface::LockRect(v7, a2, &v11, 4LL);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xE3u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SysMemSurface, 0xD3u);
  }
  return v5;
}
