/*
 * XREFs of ??1CD3DResource@@MEAA@XZ @ 0x18004BFCC
 * Callers:
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x1800216E0 (--1CD3DConstantBuffer@@MEAA@XZ.c)
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x180043770 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x180045C50 (--1CD3DTexture@@MEAA@XZ.c)
 *     ??1CD3DSurface@@MEAA@XZ @ 0x1800732F0 (--1CD3DSurface@@MEAA@XZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1800CDB58 (--1CSwapChainBase@@MEAA@XZ.c)
 *     ??_ECD3DResource@@MEAAPEAXI@Z @ 0x18019A8B0 (--_ECD3DResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD3DResource::~CD3DResource(CD3DResource *this)
{
  *(_QWORD *)this = &CD3DResource::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 80);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
