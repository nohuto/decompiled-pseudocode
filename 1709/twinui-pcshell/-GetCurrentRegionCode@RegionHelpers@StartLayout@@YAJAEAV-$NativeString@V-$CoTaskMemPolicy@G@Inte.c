/*
 * XREFs of ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x1801BFFFC
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18008DD44 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1800F1100 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall StartLayout::RegionHelpers::GetCurrentRegionCode(__int64 a1)
{
  HRESULT v2; // eax
  int v3; // edi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  const WCHAR *StringRawBuffer; // rax
  PCWSTR v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v12; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v13[1] = -2LL;
  v11 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Globalization.GeographicRegion", 0x26u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v11 = 0LL;
  v3 = RoActivateInstance(string, v13);
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v4 = v13[0];
      v11 = v13[0];
    }
    else
    {
      v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v13[0])(
             v13[0],
             &GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903,
             &v11);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
      v4 = v11;
    }
    if ( v3 >= 0 )
    {
      v12 = 0LL;
      WindowsDeleteString(0LL);
      v12 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 56LL))(v4, &v12);
      v3 = v5;
      if ( v5 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(v12, 0LL);
        if ( CompareStringOrdinal(StringRawBuffer, -1, L"ZZ", -1, 0) == 2 )
        {
          v3 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19,
            (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\regionhelpers.cpp",
            (const char *)0x80004005LL);
LABEL_17:
          WindowsDeleteString(v12);
          v12 = 0LL;
          goto LABEL_19;
        }
        v8 = WindowsGetStringRawBuffer(v12, 0LL);
        v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
               a1,
               (__int64)v8,
               0xFFFFFFFFFFFFFFFFuLL);
        v3 = v5;
        if ( v5 >= 0 )
        {
          v3 = 0;
          goto LABEL_17;
        }
        v6 = 32LL;
      }
      else
      {
        v6 = 21LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\regionhelpers.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_17;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x12,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\regionhelpers.cpp",
    (const char *)(unsigned int)v3);
LABEL_19:
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v3;
}
