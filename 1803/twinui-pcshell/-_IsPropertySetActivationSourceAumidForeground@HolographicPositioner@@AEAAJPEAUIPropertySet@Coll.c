/*
 * XREFs of ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1801B2458
 * Callers:
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020A04 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020F50 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x18006C838 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8454 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        HWND a3,
        int *a4)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  PCWSTR StringRawBuffer; // rax
  HSTRING string; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  CWinRTApplicationView *v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v23[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v22[1] = -2LL;
  v22[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v22);
  *a4 = 0;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, (const WCHAR **)off_180322BD8);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v22,
         *(HSTRING *)(v7 + 24),
         v8,
         &string);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v20 = 0LL;
    v11 = *((_QWORD *)this + 28);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    v10 = (*(__int64 (__fastcall **)(__int64, HWND, CWinRTApplicationView **))(*(_QWORD *)v11 + 48LL))(v11, a3, &v20);
    if ( v10 < 0 )
    {
LABEL_12:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
      goto LABEL_13;
    }
    v19 = 0LL;
    v21 = 0LL;
    v10 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v20, &v21);
    if ( v10 >= 0 )
    {
      v12 = v21;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v19);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v15 = v19;
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v13 = (*(__int64 (__fastcall **)(__int64, PCWSTR, int *))(*(_QWORD *)v15 + 88LL))(v15, StringRawBuffer, a4);
        v10 = v13;
        if ( v13 >= 0 )
        {
          v10 = 0;
          goto LABEL_11;
        }
        v14 = 1304LL;
      }
      else
      {
        v14 = 1302LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v13);
    }
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50D,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_13:
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
  return (unsigned int)v10;
}
