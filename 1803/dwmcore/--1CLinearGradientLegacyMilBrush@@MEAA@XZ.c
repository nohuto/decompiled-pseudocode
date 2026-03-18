/*
 * XREFs of ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1801B2FF8
 * Callers:
 *     ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x18016E880 (--_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1801AC260 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(CLinearGradientLegacyMilBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CLinearGradientLegacyMilBrush::`vftable';
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 35);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 34);
  v2 = *((_QWORD *)this + 33);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CLegacyMilBrush::~CLegacyMilBrush(this);
}
