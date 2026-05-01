/*
 * XREFs of ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z @ 0x1800D7020
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800D7154 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800D6CF0 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewSizePreferenceHelpers::GetSourceViewSizePreferenceFromPropertySet(
        ViewSizePreferenceHelpers *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        enum APPLICATION_VIEW_SIZE_PREFERENCE *a3,
        HWND *a4)
{
  HRESULT v6; // eax
  int UInt32; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  HRESULT v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-3Ch] BYREF
  _QWORD v14[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v14[1] = -2LL;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)a3 = 0LL;
  v14[0] = this;
  if ( this )
    (*(void (__fastcall **)(ViewSizePreferenceHelpers *, struct Windows::Foundation::Collections::IPropertySet *, enum APPLICATION_VIEW_SIZE_PREFERENCE *, HWND *))(*(_QWORD *)this + 8LL))(
      this,
      a2,
      a3,
      a4);
  string = 0LL;
  v6 = WindowsCreateStringReference(L"ViewSizePreferences.SourceViewSizePreference", 0x2Cu, &hstringHeader, &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)v14,
             string,
             &v12);
  v8 = UInt32;
  if ( UInt32 < 0 )
  {
    v9 = 111LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"internal\\shell\\private\\inc\\viewsizepreference_propertyset.h",
      (const char *)(unsigned int)UInt32);
    goto LABEL_13;
  }
  string = 0LL;
  v10 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", 0x20u, &hstringHeader, &string);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)v14,
             string,
             &v13);
  v8 = UInt32;
  if ( UInt32 < 0 )
  {
    v9 = 112LL;
    goto LABEL_11;
  }
  *(_DWORD *)a2 = v12;
  *(_QWORD *)a3 = v13;
  v8 = 0;
LABEL_13:
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  return v8;
}
