/*
 * XREFs of ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x18004B170
 * Callers:
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18004B140 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x1800340F4 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180036684 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800366EC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180037C48 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004F8D4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800500D8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper(
        ToastNotification::NotificationsTargetedContentClient *this,
        const unsigned __int16 *a2,
        char *a3)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  int ActivationFactory; // eax
  __int64 v11; // rsi
  const WCHAR *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rdi
  const WCHAR *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  int v28[2]; // [rsp+28h] [rbp-99h] BYREF
  __int64 v29; // [rsp+30h] [rbp-91h] BYREF
  __int64 v30; // [rsp+38h] [rbp-89h] BYREF
  const WCHAR *v31; // [rsp+40h] [rbp-81h] BYREF
  __int64 v32; // [rsp+48h] [rbp-79h] BYREF
  __int64 v33; // [rsp+50h] [rbp-71h] BYREF
  __int64 v34; // [rsp+58h] [rbp-69h] BYREF
  __int64 v35; // [rsp+60h] [rbp-61h] BYREF
  __int64 v36; // [rsp+68h] [rbp-59h]
  __int64 v37; // [rsp+70h] [rbp-51h]
  void *v38[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v39; // [rsp+88h] [rbp-39h]
  unsigned __int64 v40; // [rsp+90h] [rbp-31h]
  void *v41[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-19h]
  unsigned __int64 v43; // [rsp+B0h] [rbp-11h]
  void *v44[2]; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v45; // [rsp+C8h] [rbp+7h]
  unsigned __int64 v46; // [rsp+D0h] [rbp+Fh]
  void *v47[3]; // [rsp+D8h] [rbp+17h] BYREF
  unsigned __int64 v48; // [rsp+F0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v37 = -2LL;
  LODWORD(v36) = 0;
  v46 = 7LL;
  v45 = 0LL;
  LOWORD(v44[0]) = 0;
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38[0]) = 0;
  v48 = 7LL;
  v47[2] = 0LL;
  LOWORD(v47[0]) = 0;
  if ( *(_WORD *)a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&a3[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  std::wstring::assign(v47, a3, v4);
  v5 = std::wstring::find((char *)v47, L"cId=");
  v6 = std::wstring::find((char *)v47, L"path=");
  v7 = v5 + 4;
  v8 = v6 + 5;
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41[0]) = 0;
  std::wstring::assign(v41, v47, v7, v6 - v7 - 1);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38[0]) = 0;
  std::wstring::_Assign_rv(v38, v41);
  if ( v43 >= 8 )
    operator delete(v41[0]);
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41[0]) = 0;
  std::wstring::assign(v41, v47, v8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v46 >= 8 )
    operator delete(v44[0]);
  v46 = 7LL;
  v45 = 0LL;
  LOWORD(v44[0]) = 0;
  std::wstring::_Assign_rv(v44, v41);
  if ( v43 >= 8 )
    operator delete(v41[0]);
  if ( v48 >= 8 )
    operator delete(v47[0]);
  v31 = L"Windows.Services.TargetedContent.TargetedContentContainer";
  LODWORD(v36) = 7;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v41, &v31);
  *(_QWORD *)v28 = 0LL;
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v9 + 24), &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8, v28);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x666,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  v11 = *(_QWORD *)v28;
  *(_QWORD *)v28 = 0LL;
  v36 = v11;
  v30 = 0LL;
  v12 = (const WCHAR *)v38;
  if ( v40 >= 8 )
    v12 = (const WCHAR *)v38[0];
  v31 = v12;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v41, &v31);
  v14 = v30;
  v30 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL))(
          v11,
          *(_QWORD *)(v13 + 24),
          &v30);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_50;
  }
  v35 = 0LL;
  v17 = v30;
  v16 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(v30);
  if ( v16 >= 0 )
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 64LL))(v17, &v35);
  if ( v16 >= 0 )
  {
    v29 = 0LL;
    v18 = (const WCHAR *)v44;
    if ( v46 >= 8 )
      v18 = (const WCHAR *)v44[0];
    v31 = v18;
    v19 = v35;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v41, &v31);
    v21 = v29;
    v29 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 80LL))(
            v19,
            *(_QWORD *)(v20 + 24),
            &v29);
    v16 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v22);
LABEL_46:
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      goto LABEL_48;
    }
    v34 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 72LL))(v29, &v34);
    v16 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v23);
LABEL_44:
      if ( v34 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      goto LABEL_46;
    }
    v33 = 0LL;
    v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 112LL))(v34, &v33);
    v16 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v24);
LABEL_42:
      if ( v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      goto LABEL_44;
    }
    v32 = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL))(v33, &v32);
    v16 = v25;
    if ( v25 >= 0 )
    {
      v25 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v32);
      v16 = v25;
      if ( v25 >= 0 )
      {
        v16 = 0;
LABEL_40:
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        goto LABEL_42;
      }
      v26 = 74LL;
    }
    else
    {
      v26 = 73LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)(unsigned int)v16);
LABEL_48:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
LABEL_50:
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v40 >= 8 )
    operator delete(v38[0]);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38[0]) = 0;
  std::wstring::_Tidy(v44, 1, 0LL);
  return (unsigned int)v16;
}
