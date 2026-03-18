/*
 * XREFs of ??0CD3DTexture@@IEAA@_N@Z @ 0x180045D40
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D10C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18019DEB8 (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18004C004 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CD3DTexture *__fastcall CD3DTexture::CD3DTexture(CD3DTexture *this, bool a2)
{
  __int64 v2; // rcx

  CD3DResource::CD3DResource(this, a2);
  *(_QWORD *)(v2 + 24) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)v2 = &CD3DTexture::`vftable'{for `CMILPoolResource'};
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 180) = 0LL;
  *(_DWORD *)(v2 + 188) = 0;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_QWORD *)(v2 + 248) = 0LL;
  return (CD3DTexture *)v2;
}
