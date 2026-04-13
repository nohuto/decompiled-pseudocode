/*
 * XREFs of ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x18009971C
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009A0A8 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(
        HSTRING *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a4)
{
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  _BYTE v26[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v27; // [rsp+38h] [rbp-21h] BYREF
  HSTRING string; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v30[32]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v29[1] = -2LL;
  v29[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD *))(*(_QWORD *)a2 + 80LL))(
         a2,
         v29);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x127,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_16;
  }
  v26[0] = 0;
  v8 = v29[0];
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, (const WCHAR **)off_1800EAAF8);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v8 + 64LL))(v8, *(_QWORD *)(v9 + 24), v26);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x12A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v10);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x12E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_18;
  }
  if ( !v26[0] )
    goto LABEL_12;
  v27 = 0LL;
  v12 = v29[0];
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, (const WCHAR **)off_1800EAAF8);
  v14 = v27;
  v27 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL))(
          v12,
          *(_QWORD *)(v13 + 24),
          &v27);
  v16 = retaddr;
  if ( v15 < 0 )
    goto LABEL_17;
  v17 = v27;
  WindowsDeleteString(*this);
  *this = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v17 + 64LL))(v17, this);
  v19 = retaddr;
  if ( v18 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x12F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_19;
  }
  string = 0LL;
  v20 = v27;
  WindowsDeleteString(0LL);
  string = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 56LL))(v20, &string);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x132,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_20;
  }
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, (const WCHAR **)&off_1800EAB00);
  v24 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, _QWORD, HSTRING, HSTRING))(*(_QWORD *)a4 + 48LL))(
          a4,
          *(_QWORD *)(v23 + 24),
          a3,
          string);
  v25 = retaddr;
  if ( v24 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x133,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v24);
    JUMPOUT(0x18009998DLL);
  }
  WindowsDeleteString(string);
  string = 0LL;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
LABEL_12:
  if ( v29[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
}
