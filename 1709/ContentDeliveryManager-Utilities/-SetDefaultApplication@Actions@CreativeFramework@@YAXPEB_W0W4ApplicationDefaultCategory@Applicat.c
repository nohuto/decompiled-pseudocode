/*
 * XREFs of ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x180079350
 * Callers:
 *     ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800796A0 (-Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18007932C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::SetDefaultApplication(const WCHAR *a1, const WCHAR *a2, unsigned int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  int ActivationFactory; // eax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // eax
  UINT32 v14; // edx
  HRESULT v15; // eax
  int v16; // eax
  int v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 applicationUserModelIdLength; // [rsp+28h] [rbp-D8h] BYREF
  int v19; // [rsp+2Ch] [rbp-D4h]
  const WCHAR *v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v20[1] = (const WCHAR *)-2LL;
  v19 = 0;
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
    __debugbreak();
  }
  v20[0] = L"Windows.Internal.ApplicationDefaults.ApplicationDefaultCategories";
  v19 = 1;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v20);
  *(_QWORD *)v17 = 0LL;
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v7 + 24), &GUID_a4877229_1b50_4c6b_b916_8eae18584671, v17);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x65E,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
  v9 = *(_QWORD *)v17;
  v10 = -1LL;
  do
    ++v10;
  while ( applicationUserModelId[v10] );
  v11 = -1;
  if ( v10 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException(v10 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v12 = v10;
  v13 = v10 + 1;
  if ( v12 + 1 >= v12 )
    v11 = v12 + 1;
  if ( v13 < v12 )
  {
    Microsoft::WRL::Details::RaiseException(v13 < v12 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v14 = v11 - 1;
  if ( v12 < v11 )
    v14 = v12;
  v15 = WindowsCreateStringReference(applicationUserModelId, v14, &hstringHeader, &string);
  if ( v15 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING))(*(_QWORD *)v9 + 64LL))(v9, a3, string);
  if ( v16 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)(unsigned int)v16);
  if ( *(_QWORD *)v17 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v17 + 16LL))(*(_QWORD *)v17);
}
