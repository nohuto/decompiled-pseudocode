/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x1800AE5D4
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180078EA0 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x180195F90 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800ABDB0 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800AE630 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD2DContext::~CD2DContext(void **this)
{
  *this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources((CD2DContext *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 42);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 35);
  CCallbackRendererManager::DestroyDeviceResources((CCallbackRendererManager *)(this + 1));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 1);
}
