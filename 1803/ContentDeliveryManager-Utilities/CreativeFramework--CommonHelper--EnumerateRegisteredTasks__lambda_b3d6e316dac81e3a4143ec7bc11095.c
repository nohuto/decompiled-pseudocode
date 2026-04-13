/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___ @ 0x1800A3200
 * Callers:
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A1CAC (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800A30D4 (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___(
        __int64 a1)
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
  __int64 v16; // rsi
  int v17; // eax
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v19; // rax
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 result; // rax
  __int64 v23; // [rsp+38h] [rbp-89h] BYREF
  HSTRING v24; // [rsp+40h] [rbp-81h] BYREF
  __int64 v25; // [rsp+48h] [rbp-79h] BYREF
  __int64 v26; // [rsp+50h] [rbp-71h] BYREF
  __int64 v27; // [rsp+58h] [rbp-69h] BYREF
  __int64 v28; // [rsp+60h] [rbp-61h] BYREF
  __int64 v29; // [rsp+68h] [rbp-59h] BYREF
  __int64 v30; // [rsp+70h] [rbp-51h]
  const WCHAR *v31[2]; // [rsp+78h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-39h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-21h] BYREF
  OLECHAR sz[40]; // [rsp+A8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v31[1] = (const WCHAR *)-2LL;
  v27 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_32;
  }
  v27 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v27);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_33;
  }
  v29 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, &v29);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_34;
  }
  v30 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v29)(
         v29,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v26);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7);
    goto LABEL_35;
  }
  v9 = v26;
  v30 = v26;
  v25 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v25);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_36;
  }
  LOBYTE(v23) = 1;
  while ( 1 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 56LL))(v25, &v23) < 0 || !(_BYTE)v23 )
      goto LABEL_24;
    v26 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, &v26);
    v13 = retaddr;
    if ( v12 < 0 )
      goto LABEL_39;
    v28 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 56LL))(v26, &v28);
    v15 = retaddr;
    if ( v14 < 0 )
      goto LABEL_38;
    v16 = v28;
    v24 = 0LL;
    WindowsDeleteString(0LL);
    v24 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 56LL))(v16, &v24);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v17);
LABEL_38:
      wil::details::in1diag3::Throw_Hr(
        v15,
        (void *)0x35,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v14);
LABEL_39:
      wil::details::in1diag3::Throw_Hr(
        v13,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v12);
      JUMPOUT(0x1800A364ELL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v24, 0LL);
    v19 = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
    if ( CompareStringOrdinal(v19, -1, StringRawBuffer, -1, 1) == 2 )
      break;
    WindowsDeleteString(v24);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v23) == -2147483637 )
      goto LABEL_20;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v20 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *))(*(_QWORD *)v16 + 48LL))(v16, &hstringHeader);
  v21 = retaddr;
  if ( v20 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 96LL))(v16, 0LL);
  memset_0(sz, 0, 0x4EuLL);
  StringFromGUID2((const GUID *const)&hstringHeader, sz, 39);
  v31[0] = WindowsGetStringRawBuffer(v24, 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
    v31,
    sz,
    (const unsigned __int16 *)(**(_QWORD **)(a1 + 8) + 8LL));
  WindowsDeleteString(v24);
LABEL_20:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_24:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v29 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v27 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  return result;
}
