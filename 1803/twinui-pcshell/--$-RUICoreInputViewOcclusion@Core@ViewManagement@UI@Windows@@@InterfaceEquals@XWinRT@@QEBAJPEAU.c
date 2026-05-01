/*
 * XREFs of ??$?RUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@0PEA_N@Z @ 0x1802459FC
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@IPEAU67895@PEAIPEAE@Z @ 0x180249BF8 (-IndexOfInternal@-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XWinRT::InterfaceEquals::operator()<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>(
        CWinRTApplicationView *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, CWinRTApplicationView **),
        __int64 (__fastcall ***a3)(_QWORD, GUID *, CWinRTApplicationView **),
        bool *a4)
{
  int v7; // edi
  CWinRTApplicationView *v9; // [rsp+50h] [rbp+8h] BYREF
  CWinRTApplicationView *v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = a1;
  *a4 = 0;
  v7 = 0;
  if ( a2 == a3 )
  {
    *a4 = 1;
  }
  else if ( a2 && a3 )
  {
    v10 = 0LL;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v7 = (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v10);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v7 = (**a3)(a3, &GUID_00000000_0000_0000_c000_000000000046, &v9);
      if ( v7 >= 0 )
        *a4 = v10 == v9;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  else
  {
    *a4 = 0;
  }
  return (unsigned int)v7;
}
