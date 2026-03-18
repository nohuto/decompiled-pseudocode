/*
 * XREFs of ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x18002E36C
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180082404 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800928BC (--0CD3DResource@@IEAA@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CD3DSurface *__fastcall CD3DSurface::CD3DSurface(CD3DSurface *this, struct ID3D11Texture2D *a2)
{
  __int64 v3; // r9

  CD3DResource::CD3DResource(this, 0);
  *((_QWORD *)this + 16) = v3;
  *((_QWORD *)this + 3) = &CD3DSurface::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CD3DSurface::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 15) = &CD3DSurface::`vftable';
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
