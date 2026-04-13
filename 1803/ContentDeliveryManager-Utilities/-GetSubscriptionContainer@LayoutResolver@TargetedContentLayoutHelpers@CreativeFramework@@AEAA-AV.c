/*
 * XREFs of ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x180099500
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009A0A8 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800500D8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x180076670 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
        __int64 a1,
        __int64 *a2,
        HSTRING a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  int ActivationFactory; // eax
  int v7; // eax
  DWORD v8; // edx
  int v9; // r8d
  wil::details::in1diag3 *v10; // rcx
  void (__fastcall ***v11)(__int64, GUID *, __int64 *); // rdi
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  void (__fastcall ***v14)(__int64, GUID *, __int64 *); // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  const char *StringRawBuffer; // rax
  void (__fastcall ***v20)(__int64, GUID *, __int64 *); // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+48h] [rbp-50h] BYREF
  HSTRING v23; // [rsp+50h] [rbp-48h]
  __int64 *v24; // [rsp+58h] [rbp-40h]
  __int64 v25; // [rsp+60h] [rbp-38h]
  __int64 v26; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v25 = -2LL;
  v3 = a2;
  v24 = a2;
  v23 = a3;
  *a2 = 0LL;
  try
  {
    v20 = (void (__fastcall ***)(__int64, GUID *, __int64 *))L"Windows.Services.TargetedContent.TargetedContentContainer";
    v22 = 0LL;
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v26, (const WCHAR **)&v20);
    v5 = v22;
    v22 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v4 + 24), &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8, &v22);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x666,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v20 = 0LL;
      v7 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v22);
      v10 = retaddr;
      if ( v7 >= 0 )
      {
        v11 = v20;
        v21 = 0LL;
        v12 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(
                v20,
                v8,
                v9);
        if ( v12 >= 0 )
          v12 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), __int64 *))(*v11)[8])(
                  v11,
                  &v21);
        v13 = retaddr;
        if ( v12 >= 0 )
        {
          v14 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v14)[2])(v14);
          }
          v15 = v21;
          v16 = 0LL;
          v21 = 0LL;
          v17 = *v3;
          *v3 = v15;
          if ( v17 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            v16 = v21;
          }
          if ( v16 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          return v3;
        }
LABEL_20:
        wil::details::in1diag3::Throw_Hr(
          v13,
          (void *)0x640,
          (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
          (const char *)(unsigned int)v12);
        JUMPOUT(0x18009971ALL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x658,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v7);
    goto LABEL_20;
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v23, 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (void *)0x11F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Content ID: %ls",
      StringRawBuffer);
    return v24;
  }
  return v3;
}
