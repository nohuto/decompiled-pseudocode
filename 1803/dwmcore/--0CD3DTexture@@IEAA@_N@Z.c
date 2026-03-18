/*
 * XREFs of ??0CD3DTexture@@IEAA@_N@Z @ 0x18002184C
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180021E6C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801EB298 (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x180021A80 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CD3DTexture *__fastcall CD3DTexture::CD3DTexture(CD3DTexture *this, bool a2)
{
  __int64 v2; // rcx

  CD3DResource::CD3DResource(this, a2);
  *(_QWORD *)(v2 + 24) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)v2 = &CD3DTexture::`vftable'{for `CMILPoolResource'};
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 172) = 0LL;
  *(_DWORD *)(v2 + 180) = 0;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  return (CD3DTexture *)v2;
}
