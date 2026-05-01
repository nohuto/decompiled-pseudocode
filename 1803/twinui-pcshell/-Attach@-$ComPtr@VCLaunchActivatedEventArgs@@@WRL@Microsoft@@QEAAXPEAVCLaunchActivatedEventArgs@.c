/*
 * XREFs of ?Attach@?$ComPtr@VCLaunchActivatedEventArgs@@@WRL@Microsoft@@QEAAXPEAVCLaunchActivatedEventArgs@@@Z @ 0x180080124
 * Callers:
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x180080070 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@AEAPEAUHSTRING__@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@AEAPEAUHSTRING__@@1@Z @ 0x180305B10 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@AEAPEAUHSTRING__@@AEAPEAU2@@Details@WRL@Micr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CLaunchActivatedEventArgs>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
