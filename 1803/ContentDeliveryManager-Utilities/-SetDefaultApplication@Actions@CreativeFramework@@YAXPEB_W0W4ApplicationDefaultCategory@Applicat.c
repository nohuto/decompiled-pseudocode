/*
 * XREFs of ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x18008429C
 * Callers:
 *     ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800844B0 (-Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180084278 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetDefaultApplication(const WCHAR *a1, const WCHAR *a2, unsigned int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  Microsoft::WRL::Details *v14; // rcx
  unsigned int v15; // eax
  UINT32 v16; // edx
  HRESULT v17; // eax
  __int64 result; // rax
  wil::details::in1diag3 *v19; // rcx
  int v20[2]; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 applicationUserModelIdLength; // [rsp+28h] [rbp-D8h] BYREF
  int v22; // [rsp+2Ch] [rbp-D4h]
  const WCHAR *v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v23[1] = (const WCHAR *)-2LL;
  v22 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a1, a2, &applicationUserModelIdLength, applicationUserModelId);
  if ( v6 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)v6);
    goto LABEL_19;
  }
  v23[0] = L"Windows.Internal.ApplicationDefaults.ApplicationDefaultCategories";
  v22 = 1;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v23);
  *(_QWORD *)v20 = 0LL;
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v7 + 24), &GUID_a4877229_1b50_4c6b_b916_8eae18584671, v20);
  v9 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x666,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_20;
  }
  v10 = *(_QWORD *)v20;
  v11 = -1LL;
  do
    ++v11;
  while ( applicationUserModelId[v11] );
  v12 = -1;
  v13 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v13 = v11;
  v14 = v11 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0LL;
  if ( v11 > 0xFFFFFFFF )
  {
LABEL_20:
    Microsoft::WRL::Details::RaiseException(v14);
    __debugbreak();
  }
  v15 = v13 + 1;
  if ( v13 + 1 >= v13 )
    v12 = v13 + 1;
  if ( v15 < v13 )
  {
    Microsoft::WRL::Details::RaiseException(v15 < v13 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v16 = v12 - 1;
  if ( v13 < v12 )
    v16 = v13;
  v17 = WindowsCreateStringReference(applicationUserModelId, v16, &hstringHeader, &string);
  if ( v17 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    goto LABEL_23;
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING))(*(_QWORD *)v10 + 64LL))(v10, a3, string);
  v19 = retaddr;
  if ( (int)result < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x30,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)(unsigned int)result);
    JUMPOUT(0x1800844A4LL);
  }
  if ( *(_QWORD *)v20 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v20 + 16LL))(*(_QWORD *)v20);
  return result;
}
