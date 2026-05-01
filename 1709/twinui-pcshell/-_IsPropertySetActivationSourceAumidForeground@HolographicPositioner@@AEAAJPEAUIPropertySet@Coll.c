/*
 * XREFs of ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1800FDE28
 * Callers:
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD7C0 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x1800A7B7C (--$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        HWND a3,
        int *a4)
{
  HRESULT v7; // eax
  struct Windows::Foundation::IPropertyValue *v8; // r8
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  HSTRING v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v23[1] = -2LL;
  v23[0] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
  *a4 = 0;
  v20 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"ViewSizePreferences.SourceAumid", 0x1Fu, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  WindowsDeleteString(v20);
  v20 = 0LL;
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<HSTRING__ *>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v23,
         string,
         v8,
         (__int64)&v20);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x53C,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_21;
  }
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)this + 31) + 48LL))(
          *((_QWORD *)this + 31),
          a3,
          &v22);
  if ( v10 >= 0 )
  {
    v19 = 0LL;
    v21 = 0LL;
    v10 = (**v22)(v22, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v21);
    if ( v10 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v19);
      v10 = v11;
      if ( v11 >= 0 )
      {
        v13 = v19;
        StringRawBuffer = WindowsGetStringRawBuffer(v20, 0LL);
        v11 = (*(__int64 (__fastcall **)(__int64, PCWSTR, int *))(*(_QWORD *)v13 + 88LL))(v13, StringRawBuffer, a4);
        v10 = v11;
        if ( v11 >= 0 )
        {
          v10 = 0;
          goto LABEL_15;
        }
        v12 = 1351LL;
      }
      else
      {
        v12 = 1349LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v11);
    }
LABEL_15:
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[2])(v17);
  }
LABEL_21:
  WindowsDeleteString(v20);
  v20 = 0LL;
  if ( v23[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
  return (unsigned int)v10;
}
