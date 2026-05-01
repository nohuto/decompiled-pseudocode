/*
 * XREFs of ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1800FDC90
 * Callers:
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD7C0 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800FA0C8 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        HWND a3,
        int *a4)
{
  HRESULT v7; // eax
  int UInt32; // eax
  int v9; // edi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v18[1] = -2LL;
  *a4 = 0;
  v17 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
  v14 = 0;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"AAMShim.CallingProcessId", 0x18u, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
             string,
             &v14);
  v9 = UInt32;
  if ( UInt32 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x524,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)UInt32);
    goto LABEL_17;
  }
  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64 *))(**((_QWORD **)this + 31) + 48LL))(
         *((_QWORD *)this + 31),
         a3,
         &v16);
  if ( v9 >= 0 )
  {
    HolographicPositioner::_FindViewHostItem(this, v18, v16);
    v10 = v18[0];
    if ( v18[0] )
    {
      v15 = 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v18[0] + 72LL))(v18[0], &v15);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x52D,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_13;
      }
      *a4 = v15 == v14;
    }
    v9 = 0;
LABEL_13:
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_17:
  if ( v17 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)v9;
}
