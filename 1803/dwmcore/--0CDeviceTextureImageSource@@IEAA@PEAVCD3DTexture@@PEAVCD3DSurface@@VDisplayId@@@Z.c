/*
 * XREFs of ??0CDeviceTextureImageSource@@IEAA@PEAVCD3DTexture@@PEAVCD3DSurface@@VDisplayId@@@Z @ 0x1802164B4
 * Callers:
 *     ?Create@CDeviceTextureImageSource@@SAJPEAVCD3DTexture@@VDisplayId@@PEAPEAV1@@Z @ 0x1802165D4 (-Create@CDeviceTextureImageSource@@SAJPEAVCD3DTexture@@VDisplayId@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceTextureImageSource::CDeviceTextureImageSource(
        __int64 a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD),
        int a4)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CDeviceTextureImageSource::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 16) = &CDeviceTextureImageSource::`vftable'{for `IImageSource'};
  *(_QWORD *)(a1 + 24) = &CDeviceTextureImageSource::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(a1 + 32) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))a2)(a2);
  *(_QWORD *)(a1 + 40) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 80LL) + 728LL);
  return a1;
}
