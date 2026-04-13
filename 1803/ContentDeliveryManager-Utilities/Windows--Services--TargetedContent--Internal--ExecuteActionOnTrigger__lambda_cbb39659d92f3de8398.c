/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x1800637A0
 * Callers:
 *     wil::details::lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___::_lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___ @ 0x180061D54 (wil--details--lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___--_lambda_call__lambda_24a5.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x18006357C (--$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegi.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180069108 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800692A0 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  const WCHAR *v16; // r13
  HSTRING v17; // rbx
  HSTRING v18; // rdi
  HSTRING v19; // rsi
  HSTRING v20; // r14
  HSTRING v21; // r15
  HSTRING v22; // r12
  const char *v23; // r9
  __int64 result; // rax
  HSTRING v25; // [rsp+40h] [rbp-98h] BYREF
  HSTRING v26; // [rsp+48h] [rbp-90h] BYREF
  HSTRING v27; // [rsp+50h] [rbp-88h] BYREF
  HSTRING string; // [rsp+58h] [rbp-80h] BYREF
  HSTRING v29; // [rsp+60h] [rbp-78h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-70h] BYREF
  PCWSTR v31; // [rsp+70h] [rbp-68h] BYREF
  PCWSTR v32; // [rsp+78h] [rbp-60h] BYREF
  PCWSTR v33; // [rsp+80h] [rbp-58h] BYREF
  const WCHAR *v34; // [rsp+88h] [rbp-50h] BYREF
  const WCHAR *v35[9]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int v37; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v38; // [rsp+E8h] [rbp+10h]
  HSTRING v39; // [rsp+F0h] [rbp+18h] BYREF
  HSTRING v40; // [rsp+F8h] [rbp+20h] BYREF

  v38 = a2;
  v35[1] = (const WCHAR *)-2LL;
  try
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 48LL))(a1, &string);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v3);
    }
    else
    {
      WindowsDeleteString(0LL);
      v27 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL))(a1, &v27);
      v5 = retaddr;
      if ( v4 >= 0 )
      {
        WindowsDeleteString(0LL);
        v26 = 0LL;
        v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL))(a1, &v26);
        v7 = retaddr;
        if ( v6 >= 0 )
        {
          WindowsDeleteString(0LL);
          v25 = 0LL;
          v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL))(a1, &v25);
          v9 = retaddr;
          if ( v8 >= 0 )
          {
            v40 = 0LL;
            WindowsDeleteString(0LL);
            v40 = 0LL;
            v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL))(a1, &v40);
            v11 = retaddr;
            if ( v10 >= 0 )
            {
              v39 = 0LL;
              WindowsDeleteString(0LL);
              v39 = 0LL;
              v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL))(a1, &v39);
              v13 = retaddr;
              if ( v12 >= 0 )
              {
                v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v37);
                v15 = retaddr;
                if ( v14 >= 0 )
                {
                  v16 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v37);
                  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v29, a1);
                  v17 = v39;
                  v18 = v40;
                  v19 = v25;
                  v20 = v26;
                  v21 = v27;
                  v22 = v29;
                  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
                  WindowsGetStringRawBuffer(v17, 0LL);
                  WindowsGetStringRawBuffer(v18, 0LL);
                  v31 = WindowsGetStringRawBuffer(v19, 0LL);
                  v32 = WindowsGetStringRawBuffer(v20, 0LL);
                  v33 = WindowsGetStringRawBuffer(v21, 0LL);
                  v35[0] = WindowsGetStringRawBuffer(v22, 0LL);
                  v34 = v16;
                  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationFailed<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(
                    v35,
                    &v34,
                    &v33,
                    &v32,
                    &v31,
                    &StringRawBuffer,
                    (const unsigned __int16 *)(**(_QWORD **)(v38 + 8) + 8LL));
                  WindowsDeleteString(v29);
                  v29 = 0LL;
                  WindowsDeleteString(v39);
                  v39 = 0LL;
                  WindowsDeleteString(v40);
                  v40 = 0LL;
                  WindowsDeleteString(v25);
                  v25 = 0LL;
                  WindowsDeleteString(v26);
                  v26 = 0LL;
                  WindowsDeleteString(v27);
                  v27 = 0LL;
                  WindowsDeleteString(string);
                  return 0LL;
                }
LABEL_16:
                wil::details::in1diag3::Throw_Hr(
                  v15,
                  (void *)0x53,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                  (const char *)(unsigned int)v14);
                JUMPOUT(0x180063B81LL);
              }
LABEL_15:
              wil::details::in1diag3::Throw_Hr(
                v13,
                (void *)0x51,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                (const char *)(unsigned int)v12);
              goto LABEL_16;
            }
LABEL_14:
            wil::details::in1diag3::Throw_Hr(
              v11,
              (void *)0x4F,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
              (const char *)(unsigned int)v10);
            goto LABEL_15;
          }
LABEL_13:
          wil::details::in1diag3::Throw_Hr(
            v9,
            (void *)0x4D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v8);
          goto LABEL_14;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v7,
          (void *)0x4B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_13;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x49,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_12;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           v23);
  }
  return result;
}
