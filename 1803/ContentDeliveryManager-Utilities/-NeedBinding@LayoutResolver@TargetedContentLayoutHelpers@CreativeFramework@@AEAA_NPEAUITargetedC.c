/*
 * XREFs of ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800988F0
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x180098D10 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x180096F2C (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800982A0 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::NeedBinding(
        __int64 a1,
        __int64 a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  int v5; // eax
  bool v6; // bl
  char v7; // di
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r14
  void *v15; // rsi
  unsigned __int64 v16; // r15
  void *v17; // r12
  void **v18; // rcx
  _WORD *v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  void **v23; // rcx
  _WORD *v24; // rdx
  unsigned __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  _WORD *v28; // rcx
  _WORD *v29; // rdx
  unsigned __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  _BYTE v34[4]; // [rsp+30h] [rbp-79h] BYREF
  int v35; // [rsp+34h] [rbp-75h] BYREF
  __int64 v36; // [rsp+38h] [rbp-71h] BYREF
  __int64 v37; // [rsp+40h] [rbp-69h] BYREF
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v38; // [rsp+48h] [rbp-61h]
  __int64 v39; // [rsp+50h] [rbp-59h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v40; // [rsp+58h] [rbp-51h]
  void *v41[2]; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp-39h]
  unsigned __int64 v43; // [rsp+78h] [rbp-31h]
  _QWORD v44[2]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp-19h]
  unsigned __int64 v46; // [rsp+98h] [rbp-11h]
  _QWORD v47[2]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v48; // [rsp+B0h] [rbp+7h]
  unsigned __int64 v49; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v39 = -2LL;
  v38 = a3;
  v40 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)a2 + 56LL))(a2, *(_QWORD *)(a1 + 8), v34);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x95,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5);
LABEL_73:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x9E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8);
LABEL_74:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0xA2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v6 = 0;
  v7 = 1;
  if ( !v34[0] )
    goto LABEL_12;
  v37 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         *(_QWORD *)(a1 + 8),
         0LL,
         &v37);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_73;
  v36 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 72LL))(v37, &v36);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_74;
  v35 = 0;
  v12 = v36;
  if ( v36 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 56LL))(v36, &v35);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x180098D0ELL);
    }
    v6 = v35 != 0;
    v12 = v36;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
LABEL_12:
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v44,
    *(HSTRING *)(a1 + 8),
    (LPCWSTR)&stru_18014BFC8);
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v47,
    *(HSTRING *)(a1 + 8),
    (LPCWSTR)&stru_18014BFA8);
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41[0]) = 0;
  std::wstring::assign(v41, (char *)L"cloud", aCloud[0] != 0 ? 5 : 0);
  v14 = v46;
  v15 = (void *)v44[0];
  v16 = v49;
  v17 = (void *)v47[0];
  if ( v34[0] && v6 && v45 )
  {
    v18 = v41;
    if ( v43 >= 8 )
      v18 = (void **)v41[0];
    v19 = v44;
    if ( v46 >= 8 )
      v19 = (_WORD *)v44[0];
    v20 = v42;
    if ( v45 < v42 )
      v20 = v45;
    if ( v20 )
    {
      while ( *v19 == *(_WORD *)v18 )
      {
        ++v19;
        v18 = (void **)((char *)v18 + 2);
        if ( !--v20 )
          goto LABEL_24;
      }
      v21 = *v19 < *(_WORD *)v18 ? -1 : 1;
    }
    else
    {
LABEL_24:
      v21 = 0;
    }
    v22 = v45 != v42;
    if ( v45 < v42 )
      v22 = -1;
    if ( v21 )
      v22 = v21;
    if ( v22 )
    {
      v23 = v41;
      if ( v43 >= 8 )
        v23 = (void **)v41[0];
      v24 = v47;
      if ( v49 >= 8 )
        v24 = (_WORD *)v47[0];
      v25 = v42;
      if ( v48 < v42 )
        v25 = v48;
      if ( v25 )
      {
        while ( *v24 == *(_WORD *)v23 )
        {
          ++v24;
          v23 = (void **)((char *)v23 + 2);
          if ( !--v25 )
            goto LABEL_39;
        }
        v26 = *v24 < *(_WORD *)v23 ? -1 : 1;
      }
      else
      {
LABEL_39:
        v26 = 0;
      }
      v27 = v48 != v42;
      if ( v48 < v42 )
        v27 = -1;
      if ( v26 )
        v27 = v26;
      if ( v27 )
        goto LABEL_63;
    }
    v28 = v44;
    if ( v46 >= 8 )
      v28 = (_WORD *)v44[0];
    v29 = v47;
    if ( v49 >= 8 )
      v29 = (_WORD *)v47[0];
    v30 = v45;
    if ( v48 < v45 )
      v30 = v48;
    if ( v30 )
    {
      while ( *v29 == *v28 )
      {
        ++v29;
        ++v28;
        if ( !--v30 )
          goto LABEL_57;
      }
      v31 = *v29 < *v28 ? -1 : 1;
    }
    else
    {
LABEL_57:
      v31 = 0;
    }
    v32 = v48 != v45;
    if ( v48 < v45 )
      v32 = -1;
    if ( v31 )
      v32 = v31;
    if ( !v32 )
LABEL_63:
      v7 = 0;
  }
  if ( v43 >= 8 )
  {
    operator delete(v41[0]);
    v14 = v46;
    v15 = (void *)v44[0];
    v16 = v49;
    v17 = (void *)v47[0];
  }
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41[0]) = 0;
  if ( v16 >= 8 )
  {
    operator delete(v17);
    v14 = v46;
    v15 = (void *)v44[0];
  }
  v49 = 7LL;
  v48 = 0LL;
  LOWORD(v47[0]) = 0;
  if ( v14 >= 8 )
    operator delete(v15);
  v46 = 7LL;
  v45 = 0LL;
  LOWORD(v44[0]) = 0;
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v38);
  return v7;
}
