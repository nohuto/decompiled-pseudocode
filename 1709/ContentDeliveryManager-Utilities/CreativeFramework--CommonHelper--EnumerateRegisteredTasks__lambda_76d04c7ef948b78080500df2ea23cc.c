/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___ @ 0x180093288
 * Callers:
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180092314 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___(
        bool **a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  const WCHAR *StringRawBuffer; // rax
  bool v15; // di
  __int64 result; // rax
  char v17[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v18; // [rsp+40h] [rbp-11h] BYREF
  __int64 v19; // [rsp+48h] [rbp-9h] BYREF
  __int64 v20; // [rsp+50h] [rbp-1h] BYREF
  HSTRING v21; // [rsp+58h] [rbp+7h] BYREF
  __int64 v22; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+68h] [rbp+17h] BYREF
  __int64 v24; // [rsp+70h] [rbp+1Fh]
  __int64 v25; // [rsp+78h] [rbp+27h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+2Fh] BYREF
  HSTRING string; // [rsp+98h] [rbp+47h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v25 = -2LL;
  v20 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  v20 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v20);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v23 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, &v23);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v24 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
         v23,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v19);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v19;
  v24 = v19;
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 48LL))(v19, &v18);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v17[0] = 1;
  while ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 56LL))(v18, v17) >= 0 && v17[0] )
  {
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, &v19);
    v9 = retaddr;
    if ( v8 < 0 )
      goto LABEL_30;
    v22 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 56LL))(v19, &v22);
    v11 = retaddr;
    if ( v10 < 0 )
      goto LABEL_29;
    v12 = v22;
    v21 = 0LL;
    WindowsDeleteString(0LL);
    v21 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 56LL))(v12, &v21);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x46,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v13);
LABEL_29:
      wil::details::in1diag3::_Throw_Hr(
        v11,
        (void *)0x35,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v10);
LABEL_30:
      wil::details::in1diag3::_Throw_Hr(
        v9,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v8);
      break;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v21, 0LL);
    **a1 = CompareStringOrdinal(*(LPCWCH *)a1[1], -1, StringRawBuffer, -1, 1) == 2;
    v15 = **a1;
    WindowsDeleteString(v21);
    if ( v15 || (*(unsigned int (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 64LL))(v18, v17) == -2147483637 )
    {
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      break;
    }
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v23 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v20 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return result;
}
