/*
 * XREFs of ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x180099ADC
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x180099ADC (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009A0A8 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x180099990 (-GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU-$IMapView.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x180099ADC (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x18009B438 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 *     ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x18009BC2C (--$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AV-$shared_ptr@UIt.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        unsigned int a4)
{
  HSTRING v4; // rdi
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  HSTRING *v17; // rbx
  __int64 v18; // rdi
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  HSTRING *v21; // rbx
  HSTRING *v22; // rbx
  HSTRING *v23; // rbx
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 v28; // rbx
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  int v31; // ebx
  __int64 i; // rdx
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v33; // rcx
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v36; // rcx
  char v37; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v38[7]; // [rsp+31h] [rbp-C7h] BYREF
  HSTRING *newString; // [rsp+38h] [rbp-C0h] BYREF
  volatile signed __int32 *v40; // [rsp+40h] [rbp-B8h]
  __int64 v41; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-A8h]
  unsigned int v43; // [rsp+58h] [rbp-A0h]
  __int64 v44; // [rsp+60h] [rbp-98h] BYREF
  __int64 v45; // [rsp+68h] [rbp-90h]
  unsigned int v46; // [rsp+70h] [rbp-88h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v47; // [rsp+78h] [rbp-80h] BYREF
  int v48; // [rsp+80h] [rbp-78h] BYREF
  int v49; // [rsp+84h] [rbp-74h] BYREF
  __int64 v50; // [rsp+88h] [rbp-70h] BYREF
  __int64 v51; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v52[2]; // [rsp+98h] [rbp-60h] BYREF
  int v53; // [rsp+A8h] [rbp-50h]
  __int64 v54; // [rsp+B0h] [rbp-48h]
  __int64 v55; // [rsp+B8h] [rbp-40h]
  __int64 v56; // [rsp+C0h] [rbp-38h]
  int v57; // [rsp+C8h] [rbp-30h]
  __int64 v58; // [rsp+D0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v55 = -2LL;
  v4 = a3;
  v52[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD *))(*(_QWORD *)a2 + 96LL))(
         a2,
         v52);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_46;
  }
  v6 = v52[0];
  v42 = v52[0];
  v43 = 0;
  v44 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v52[0] + 56LL))(v52[0], &v48);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_46:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7);
LABEL_47:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v11);
LABEL_48:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x150,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v13);
LABEL_49:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x152,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v15);
LABEL_50:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x15B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_51;
  }
  v52[1] = v6;
  v53 = v48;
  v54 = 0LL;
  v9 = v43;
  while ( (_DWORD)v9 != v53 )
  {
    v10 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v9 = v43;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, v9, &v44);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_47;
    v50 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 72LL))(v44, &v50);
    v14 = retaddr;
    if ( v13 < 0 )
      goto LABEL_48;
    v38[0] = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v50 + 48LL))(v50, v38);
    v16 = retaddr;
    if ( v15 < 0 )
      goto LABEL_49;
    if ( v38[0] )
    {
      std::make_shared<CreativeFramework::TargetedContentLayoutHelpers::Item>(&newString);
      v17 = newString;
      if ( !v4 || v4 != *newString )
      {
        WindowsDeleteString(*newString);
        *v17 = 0LL;
        WindowsDuplicateString(v4, v17);
        v17 = newString;
      }
      v18 = v44;
      WindowsDeleteString(v17[1]);
      v17[1] = 0LL;
      (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 48LL))(v18, v17 + 1);
      v41 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 80LL))(v44, &v41);
      v20 = retaddr;
      if ( v19 < 0 )
        goto LABEL_50;
      *((_DWORD *)newString + 5) = a4++;
      v21 = newString;
      *((double *)v21 + 4) = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                               L"collection",
                               v41,
                               &v37);
      *((_BYTE *)newString + 17) = v37 != 0;
      v22 = newString;
      *((double *)v22 + 5) = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                               L"item",
                               v41,
                               &v37);
      *((_BYTE *)newString + 18) = v37 != 0;
      v23 = newString;
      *((double *)v23 + 3) = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                               L"rank",
                               v41,
                               &v37);
      *((_BYTE *)newString + 16) = v37 != 0;
      *((_BYTE *)newString + 48) = 0;
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
        (char *)this + 16,
        &newString);
      if ( *((_BYTE *)newString + 17) )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
          (char *)this + 40,
          &newString);
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      v24 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
      }
    }
    if ( v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    v9 = ++v43;
    v4 = a3;
  }
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  v25 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v51 = 0LL;
  v26 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(*(_QWORD *)a2 + 88LL))(
          a2,
          &v51);
  v27 = retaddr;
  if ( v26 < 0 )
  {
LABEL_51:
    wil::details::in1diag3::Throw_Hr(
      v27,
      (void *)0x173,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v26);
    goto LABEL_52;
  }
  v28 = v51;
  v45 = v51;
  v46 = 0;
  v47 = 0LL;
  v29 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v51 + 56LL))(v51, &v49);
  v30 = retaddr;
  if ( v29 < 0 )
  {
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v30,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v29);
LABEL_53:
    wil::details::in1diag3::Throw_Hr(
      v35,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v34);
    JUMPOUT(0x18009A0A5LL);
  }
  v56 = v28;
  v31 = v49;
  v57 = v49;
  v58 = 0LL;
  for ( i = v46; (_DWORD)i != v31; i = ++v46 )
  {
    v33 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v33 + 16LL))(v33);
      i = v46;
    }
    v34 = (*(__int64 (__fastcall **)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v45 + 48LL))(
            v45,
            i,
            &v47);
    v35 = retaddr;
    if ( v34 < 0 )
      goto LABEL_53;
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(this, v47, v4, a4);
  }
  v36 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v36 + 16LL))(v36);
  }
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  if ( v52[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v52[0] + 16LL))(v52[0]);
}
