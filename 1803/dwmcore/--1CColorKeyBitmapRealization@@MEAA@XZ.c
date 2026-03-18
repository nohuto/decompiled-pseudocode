/*
 * XREFs of ??1CColorKeyBitmapRealization@@MEAA@XZ @ 0x180213424
 * Callers:
 *     ??_ECColorKeyBitmapRealization@@MEAAPEAXI@Z @ 0x180213490 (--_ECColorKeyBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CColorKeyBitmapRealization::~CColorKeyBitmapRealization(CColorKeyBitmapRealization *this)
{
  *(_QWORD *)this = &CColorKeyBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CColorKeyBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CColorKeyBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CColorKeyBitmapRealization::`vftable'{for `IBitmapRealization'};
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 96);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
