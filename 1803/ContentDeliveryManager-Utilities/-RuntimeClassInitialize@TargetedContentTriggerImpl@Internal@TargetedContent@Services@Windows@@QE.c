/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180058C90
 * Callers:
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180059A78 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180015FF0.c)
 *     ?Make@?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x18005A088 (-Make@-$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        HSTRING a7)
{
  HSTRING *v10; // rdi
  HRESULT v11; // eax
  wil::details::in1diag3 *v12; // rcx
  HSTRING *v13; // rdi
  HRESULT v14; // eax
  wil::details::in1diag3 *v15; // rcx
  HSTRING *v16; // rdi
  HRESULT v17; // eax
  wil::details::in1diag3 *v18; // rcx
  HSTRING *v19; // rdi
  HRESULT v20; // eax
  wil::details::in1diag3 *v21; // rcx
  HSTRING *v22; // rdi
  HRESULT v23; // eax
  wil::details::in1diag3 *v24; // rcx
  volatile signed __int64 *v25; // rcx
  int v26; // eax
  const char *v27; // r9
  wil::details::in1diag3 *v28; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 64) = a2;
      v10 = (HSTRING *)(a1 + 120);
      v11 = 0;
      if ( !a3 || a3 != *v10 )
      {
        WindowsDeleteString(*v10);
        *v10 = 0LL;
        v11 = WindowsDuplicateString(a3, (HSTRING *)(a1 + 120));
      }
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        v13 = (HSTRING *)(a1 + 128);
        v14 = 0;
        if ( !a4 || a4 != *v13 )
        {
          WindowsDeleteString(*v13);
          *v13 = 0LL;
          v14 = WindowsDuplicateString(a4, (HSTRING *)(a1 + 128));
        }
        v15 = retaddr;
        if ( v14 >= 0 )
        {
          v16 = (HSTRING *)(a1 + 96);
          v17 = 0;
          if ( !string || string != *v16 )
          {
            WindowsDeleteString(*v16);
            *v16 = 0LL;
            v17 = WindowsDuplicateString(string, (HSTRING *)(a1 + 96));
          }
          v18 = retaddr;
          if ( v17 >= 0 )
          {
            v19 = (HSTRING *)(a1 + 72);
            v20 = 0;
            if ( !a6 || a6 != *v19 )
            {
              WindowsDeleteString(*v19);
              *v19 = 0LL;
              v20 = WindowsDuplicateString(a6, (HSTRING *)(a1 + 72));
            }
            v21 = retaddr;
            if ( v20 >= 0 )
            {
              v22 = (HSTRING *)(a1 + 112);
              v23 = 0;
              if ( !a7 || a7 != *v22 )
              {
                WindowsDeleteString(*v22);
                *v22 = 0LL;
                v23 = WindowsDuplicateString(a7, (HSTRING *)(a1 + 112));
              }
              v24 = retaddr;
              if ( v23 >= 0 )
              {
                v25 = *(volatile signed __int64 **)(a1 + 184);
                if ( v25 )
                {
                  *(_QWORD *)(a1 + 184) = 0LL;
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v25);
                }
                v26 = Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>::Make(a1 + 184);
                v28 = retaddr;
                if ( v26 >= 0 )
                  return 0LL;
LABEL_33:
                wil::details::in1diag3::Throw_Hr(
                  v28,
                  (void *)0x24,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                  (const char *)(unsigned int)v26);
                JUMPOUT(0x180058EC5LL);
              }
LABEL_32:
              wil::details::in1diag3::Throw_Hr(
                v24,
                (void *)0x23,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                (const char *)(unsigned int)v23);
              goto LABEL_33;
            }
LABEL_31:
            wil::details::in1diag3::Throw_Hr(
              v21,
              (void *)0x22,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
              (const char *)(unsigned int)v20);
            goto LABEL_32;
          }
LABEL_30:
          wil::details::in1diag3::Throw_Hr(
            v18,
            (void *)0x21,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
            (const char *)(unsigned int)v17);
          goto LABEL_31;
        }
LABEL_29:
        wil::details::in1diag3::Throw_Hr(
          v15,
          (void *)0x20,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_30;
      }
    }
    else
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)0x8000FFFFLL);
    }
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_29;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x28,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                           v27);
  }
  return result;
}
