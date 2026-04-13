/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___ @ 0x180093744
 * Callers:
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180092298 (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x18009361C (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___(
        __int64 a1)
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
  __int64 v12; // rsi
  int v13; // eax
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v15; // rax
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // [rsp+38h] [rbp-89h] BYREF
  HSTRING v19; // [rsp+40h] [rbp-81h] BYREF
  __int64 v20; // [rsp+48h] [rbp-79h] BYREF
  __int64 v21; // [rsp+50h] [rbp-71h] BYREF
  __int64 v22; // [rsp+58h] [rbp-69h] BYREF
  __int64 v23; // [rsp+60h] [rbp-61h] BYREF
  __int64 v24; // [rsp+68h] [rbp-59h] BYREF
  __int64 v25; // [rsp+70h] [rbp-51h]
  const WCHAR *v26[2]; // [rsp+78h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-39h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-21h] BYREF
  OLECHAR sz[40]; // [rsp+A8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v26[1] = (const WCHAR *)-2LL;
  v22 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  v22 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v22);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v24 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v24);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v25 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v24)(
         v24,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v21);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v21;
  v25 = v21;
  v20 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 48LL))(v21, &v20);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  LOBYTE(v18) = 1;
  while ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 56LL))(v20, &v18) >= 0 && (_BYTE)v18 )
  {
    v21 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, &v21);
    v9 = retaddr;
    if ( v8 < 0 )
      goto LABEL_32;
    v23 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 56LL))(v21, &v23);
    v11 = retaddr;
    if ( v10 < 0 )
      goto LABEL_31;
    v12 = v23;
    v19 = 0LL;
    WindowsDeleteString(0LL);
    v19 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 56LL))(v12, &v19);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v13);
LABEL_31:
      wil::details::in1diag3::_Throw_Hr(
        v11,
        (void *)0x35,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v10);
LABEL_32:
      wil::details::in1diag3::_Throw_Hr(
        v9,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v8);
      break;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v19, 0LL);
    v15 = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
    if ( CompareStringOrdinal(v15, -1, StringRawBuffer, -1, 1) == 2 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *))(*(_QWORD *)v12 + 48LL))(v12, &hstringHeader);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x57,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 96LL))(v12, 0LL);
      memset_0(sz, 0, 0x4EuLL);
      StringFromGUID2((const GUID *const)&hstringHeader, sz, 39);
      v26[0] = WindowsGetStringRawBuffer(v19, 0LL);
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
        v26,
        sz,
        (const unsigned __int16 *)(**(_QWORD **)(a1 + 8) + 8LL));
      WindowsDeleteString(v19);
LABEL_25:
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      break;
    }
    WindowsDeleteString(v19);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, &v18) == -2147483637 )
      goto LABEL_25;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v24 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v22 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return result;
}
