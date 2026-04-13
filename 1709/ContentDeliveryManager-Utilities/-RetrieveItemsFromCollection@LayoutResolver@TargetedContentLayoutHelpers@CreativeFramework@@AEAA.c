/*
 * XREFs of ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18008C4D4
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18008C4D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008CAD0 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x18008C38C (-GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU-$IMapView.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18008C4D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x18008DE14 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  _QWORD *v14; // rbx
  HSTRING *v15; // rbx
  __int64 v16; // rdi
  int v17; // eax
  double *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  int v24; // ebx
  __int64 i; // rdx
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v26; // rcx
  int v27; // eax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v28; // rcx
  const char *StringRawBuffer; // rax
  char v30; // [rsp+30h] [rbp-D8h] BYREF
  char v31[3]; // [rsp+31h] [rbp-D7h] BYREF
  int v32; // [rsp+34h] [rbp-D4h]
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h]
  unsigned int v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h]
  unsigned int v38; // [rsp+60h] [rbp-A8h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v39; // [rsp+68h] [rbp-A0h] BYREF
  int v40; // [rsp+70h] [rbp-98h] BYREF
  int v41; // [rsp+74h] [rbp-94h] BYREF
  char *v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h] BYREF
  __int64 v44; // [rsp+88h] [rbp-80h] BYREF
  __int64 v45; // [rsp+90h] [rbp-78h] BYREF
  char *v46; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h]
  int v49; // [rsp+B0h] [rbp-58h]
  __int64 v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v51 = -2LL;
  v4 = a3;
  v32 = 0;
  v45 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(*(_QWORD *)a2 + 96LL))(
         a2,
         &v45);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v45;
  v34 = v45;
  v35 = 0;
  v36 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v45 + 56LL))(v45, &v40);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v48 = v6;
  v49 = v40;
  v50 = 0LL;
  v32 = 1;
  v8 = v35;
  while ( (_DWORD)v8 != v49 )
  {
    v9 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v8 = v35;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, v8, &v36);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v10);
    try
    {
      v43 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 72LL))(v36, &v43);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x150,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v11);
      v31[0] = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 48LL))(v43, v31);
      if ( v12 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x152,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v12);
      if ( v31[0] )
      {
        v13 = (char *)operator new(0x48uLL);
        v42 = v13;
        if ( v13 )
        {
          *((_DWORD *)v13 + 2) = 1;
          *((_DWORD *)v13 + 3) = 1;
          *(_QWORD *)v13 = &std::_Ref_count_obj<CreativeFramework::TargetedContentLayoutHelpers::Item>::`vftable';
          v14 = v13 + 16;
          if ( v13 != (char *)-16LL )
          {
            memset_0(v13 + 16, 0, 0x38uLL);
            *v14 = 0LL;
            v14[1] = 0LL;
            v13 = v42;
          }
        }
        else
        {
          v13 = 0LL;
          v42 = 0LL;
        }
        v32 |= 2u;
        v47 = (volatile signed __int32 *)v13;
        v15 = (HSTRING *)(v13 + 16);
        v46 = v13 + 16;
        if ( !v4 || v4 != *v15 )
        {
          WindowsDeleteString(*v15);
          *v15 = 0LL;
          WindowsDuplicateString(v4, v15);
        }
        v16 = v36;
        WindowsDeleteString(v15[1]);
        v15[1] = 0LL;
        (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 48LL))(v16, v15 + 1);
        v33 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 80LL))(v36, &v33);
        if ( v17 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x15B,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            (const char *)(unsigned int)v17);
        v18 = (double *)v42;
        *((_DWORD *)v42 + 9) = a4++;
        v18[6] = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"collection", v33, &v30);
        *((_BYTE *)v18 + 33) = v30 != 0;
        v18[7] = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"item", v33, &v30);
        *((_BYTE *)v18 + 34) = v30 != 0;
        v18[5] = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"rank", v33, &v30);
        *((_BYTE *)v18 + 32) = v30 != 0;
        *((_BYTE *)v18 + 64) = 0;
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
          (char *)this + 16,
          &v46);
        if ( v46[17] )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
            (char *)this + 40,
            &v46);
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            v19 = v47;
            (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          }
        }
      }
      if ( v43 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    catch ( ... )
    {
      StringRawBuffer = (const char *)WindowsGetStringRawBuffer(a3, 0LL);
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (void *)0x16F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        "Content ID: %ls",
        StringRawBuffer);
    }
    v8 = ++v35;
    v4 = a3;
  }
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  v20 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v44 = 0LL;
  v21 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(*(_QWORD *)a2 + 88LL))(
          a2,
          &v44);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x173,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  v22 = v44;
  v37 = v44;
  v38 = 0;
  v39 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 56LL))(v44, &v41);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  v52 = v22;
  v24 = v41;
  v53 = v41;
  v54 = 0LL;
  for ( i = v38; (_DWORD)i != v24; i = ++v38 )
  {
    v26 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v26 + 16LL))(v26);
      i = v38;
    }
    v27 = (*(__int64 (__fastcall **)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v37 + 48LL))(
            v37,
            i,
            &v39);
    if ( v27 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v27);
      break;
    }
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(this, v39, v4, a4);
  }
  v28 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
}
