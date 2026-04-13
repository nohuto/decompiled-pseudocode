/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___ @ 0x1800A2D20
 * Callers:
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A1D28 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___(
        bool **a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdi
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  const WCHAR *StringRawBuffer; // rax
  bool v20; // di
  __int64 result; // rax
  char v22[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v23; // [rsp+40h] [rbp-11h] BYREF
  __int64 v24; // [rsp+48h] [rbp-9h] BYREF
  __int64 v25; // [rsp+50h] [rbp-1h] BYREF
  HSTRING v26; // [rsp+58h] [rbp+7h] BYREF
  __int64 v27; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+68h] [rbp+17h] BYREF
  __int64 v29; // [rsp+70h] [rbp+1Fh]
  __int64 v30; // [rsp+78h] [rbp+27h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+2Fh] BYREF
  HSTRING string; // [rsp+98h] [rbp+47h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v30 = -2LL;
  v25 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_30;
  }
  v25 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v25);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_31;
  }
  v28 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, &v28);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_32;
  }
  v29 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v28)(
         v28,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v24);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7);
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10);
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x46,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v17);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v14);
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x32,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v9 = v24;
  v29 = v24;
  v23 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v23);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_33;
  v22[0] = 1;
  while ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 56LL))(v23, v22) >= 0 && v22[0] )
  {
    v24 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 48LL))(v23, &v24);
    v13 = retaddr;
    if ( v12 < 0 )
      goto LABEL_36;
    v27 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v27);
    v15 = retaddr;
    if ( v14 < 0 )
      goto LABEL_35;
    v16 = v27;
    v26 = 0LL;
    WindowsDeleteString(0LL);
    v26 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 56LL))(v16, &v26);
    v18 = retaddr;
    if ( v17 < 0 )
      goto LABEL_34;
    StringRawBuffer = WindowsGetStringRawBuffer(v26, 0LL);
    **a1 = CompareStringOrdinal(*(LPCWCH *)a1[1], -1, StringRawBuffer, -1, 1) == 2;
    v20 = **a1;
    WindowsDeleteString(v26);
    if ( v20 || (*(unsigned int (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 64LL))(v23, v22) == -2147483637 )
    {
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      break;
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v28 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v25 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return result;
}
