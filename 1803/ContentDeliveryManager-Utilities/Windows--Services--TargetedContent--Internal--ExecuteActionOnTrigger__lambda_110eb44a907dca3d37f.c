/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f57f1aaae9d13b___ @ 0x18006558C
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_b47b6bb7b51bf201d9803121956d2fe9__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal_____ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal_____ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180067D00 (std--_Func_impl_std--_Callable_obj__lambda_b47b6bb7b51bf201d9803121956d2fe9__0__std_ea_180067D00.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W1PEBD@Z @ 0x180065368 (--$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelem.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180069108 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800692A0 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18006B728 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f57f1aaae9d13b___(
        __int64 a1,
        unsigned int **a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
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
  const WCHAR *v30; // [rsp+68h] [rbp-70h] BYREF
  const WCHAR *v31; // [rsp+70h] [rbp-68h] BYREF
  PCWSTR StringRawBuffer; // [rsp+78h] [rbp-60h] BYREF
  PCWSTR v33; // [rsp+80h] [rbp-58h] BYREF
  const WCHAR *v34; // [rsp+88h] [rbp-50h] BYREF
  const WCHAR *v35[9]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int v37; // [rsp+E0h] [rbp+8h] BYREF
  HSTRING v38; // [rsp+F0h] [rbp+18h] BYREF
  HSTRING v39; // [rsp+F8h] [rbp+20h] BYREF

  v35[1] = (const WCHAR *)-2LL;
  try
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 48LL))(a1, &string);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v4);
    }
    else
    {
      WindowsDeleteString(0LL);
      v27 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL))(a1, &v27);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        WindowsDeleteString(0LL);
        v26 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL))(a1, &v26);
        v8 = retaddr;
        if ( v7 >= 0 )
        {
          WindowsDeleteString(0LL);
          v25 = 0LL;
          v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL))(a1, &v25);
          v10 = retaddr;
          if ( v9 >= 0 )
          {
            v39 = 0LL;
            WindowsDeleteString(0LL);
            v39 = 0LL;
            v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL))(a1, &v39);
            v12 = retaddr;
            if ( v11 >= 0 )
            {
              v38 = 0LL;
              WindowsDeleteString(0LL);
              v38 = 0LL;
              v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL))(a1, &v38);
              v14 = retaddr;
              if ( v13 >= 0 )
              {
                v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v37);
                v16 = retaddr;
                if ( v15 >= 0 )
                {
                  v30 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v37);
                  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v29, a1);
                  v17 = v38;
                  v18 = v39;
                  v19 = v25;
                  v20 = v26;
                  v21 = v27;
                  v22 = v29;
                  WindowsGetStringRawBuffer(string, 0LL);
                  WindowsGetStringRawBuffer(v17, 0LL);
                  WindowsGetStringRawBuffer(v18, 0LL);
                  WindowsGetStringRawBuffer(v19, 0LL);
                  StringRawBuffer = WindowsGetStringRawBuffer(v20, 0LL);
                  v33 = WindowsGetStringRawBuffer(v21, 0LL);
                  v35[0] = WindowsGetStringRawBuffer(v22, 0LL);
                  v34 = v30;
                  v30 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(*a2[1]);
                  v31 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(**a2);
                  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerStateTransition<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const *,wchar_t const *>(
                    v35,
                    &v34,
                    &v33,
                    &StringRawBuffer,
                    &v31,
                    &v30,
                    (const unsigned __int16 *)(*(_QWORD *)a2[2] + 8LL));
                  WindowsDeleteString(v29);
                  v29 = 0LL;
                  WindowsDeleteString(v38);
                  v38 = 0LL;
                  WindowsDeleteString(v39);
                  v39 = 0LL;
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
                  v16,
                  (void *)0x53,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                  (const char *)(unsigned int)v15);
                JUMPOUT(0x180065983LL);
              }
LABEL_15:
              wil::details::in1diag3::Throw_Hr(
                v14,
                (void *)0x51,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                (const char *)(unsigned int)v13);
              goto LABEL_16;
            }
LABEL_14:
            wil::details::in1diag3::Throw_Hr(
              v12,
              (void *)0x4F,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
              (const char *)(unsigned int)v11);
            goto LABEL_15;
          }
LABEL_13:
          wil::details::in1diag3::Throw_Hr(
            v10,
            (void *)0x4D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v9);
          goto LABEL_14;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v8,
          (void *)0x4B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_13;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x49,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v5);
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
