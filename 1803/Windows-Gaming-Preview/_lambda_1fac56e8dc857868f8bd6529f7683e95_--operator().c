/*
 * XREFs of _lambda_1fac56e8dc857868f8bd6529f7683e95_::operator() @ 0x18001A9D4
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_1fac56e8dc857868f8bd6529f7683e95____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_____::Run @ 0x18001D980 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_1fac56e8dc85786.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x180009174 (-GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU-$IVectorView@.c)
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000933C (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C420 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtm.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FCB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18001C214 (-Set@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@XZ @ 0x18001DD30 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026800 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_180026800.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall lambda_1fac56e8dc857868f8bd6529f7683e95_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r15
  __int64 v5; // rsi
  char *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  HSTRING v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int128 v26; // rax
  __int64 v27; // r13
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r15
  signed int v31; // edi
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // r12
  _WORD *v37; // rcx
  __int64 v38; // r13
  __int16 v39; // ax
  _WORD *v40; // rax
  void *v41; // rcx
  int v42; // eax
  int Results; // eax
  __int64 v44; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  __int64 v47; // [rsp+90h] [rbp+48h]
  __int64 v49; // [rsp+A0h] [rbp+58h]
  __int64 v50; // [rsp+A8h] [rbp+60h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*a1 + 128LL);
  v5 = *(_QWORD *)(*a1 + 56LL);
  v47 = 0LL;
  v6 = (char *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  v49 = (__int64)v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_73:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_80;
  }
  v9 = v6 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
  *(_QWORD *)(v7 + 56) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable';
  *v9 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  v12 = (_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v7 = v49;
  }
  *(_QWORD *)v7 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable';
  *v9 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `IWeakReferenceSource'};
  *v12 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  *(_QWORD *)(v7 + 96) = 0LL;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_QWORD *)(v7 + 112) = 0LL;
  v50 = v7 + 120;
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_QWORD *)(v7 + 120) = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode(
                            &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'},
                            v10,
                            v11);
  v50 = v7 + 136;
  *(_QWORD *)(v7 + 136) = 0LL;
  *(_QWORD *)(v7 + 144) = 0LL;
  *(_QWORD *)(v7 + 136) = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode(
                            v14,
                            v13,
                            v15);
  v50 = v7 + 152;
  *(_QWORD *)(v7 + 152) = 0LL;
  *(_QWORD *)(v7 + 160) = 0LL;
  *(_QWORD *)(v7 + 152) = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode(
                            v17,
                            v16,
                            v18);
  v50 = v7 + 168;
  *(_QWORD *)(v7 + 168) = 0LL;
  *(_QWORD *)(v7 + 176) = 0LL;
  *(_QWORD *)(v7 + 168) = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode(
                            v20,
                            v19,
                            v21);
  *(_QWORD *)(v7 + 184) = 0LL;
  *(_QWORD *)(v7 + 192) = 0LL;
  *(_QWORD *)(v7 + 200) = 0LL;
  v22 = (v4 + 8) & -(__int64)(v4 != 0);
  v23 = (HSTRING)a1[2];
  v24 = *(_QWORD *)(v7 + 88);
  if ( v24 != v5 )
  {
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v24 = *(_QWORD *)(v7 + 88);
    }
    *(_QWORD *)(v7 + 88) = v5;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = *(_QWORD *)(v7 + 184);
  if ( v25 != v22 )
  {
    if ( v22 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      v25 = *(_QWORD *)(v7 + 184);
    }
    *(_QWORD *)(v7 + 184) = v22;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( !WindowsIsStringEmpty(v23) )
  {
    *(_QWORD *)&v26 = WindowsGetStringRawBuffer(v23, 0LL);
    v27 = v26;
    if ( (_QWORD)v26 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( *(_WORD *)(v26 + 2 * v28) );
      v29 = v28 + 1;
      v30 = -1LL;
      if ( v28 + 1 >= v28 )
        v30 = v28 + 1;
      v31 = v28 + 1 < v28 ? 0x80070216 : 0;
      if ( v29 < v28 )
        goto LABEL_48;
      v32 = *(_QWORD *)(v7 + 80);
      if ( v32 == -1LL )
      {
        v33 = *(_QWORD *)(v7 + 72);
        v34 = *(_QWORD *)(v7 + 64);
        if ( v33 == -1 )
        {
          if ( v34 )
          {
            v33 = -1LL;
            do
              ++v33;
            while ( *(_WORD *)(v34 + 2 * v33) );
          }
          else
          {
            v33 = 0LL;
          }
          *(_QWORD *)(v7 + 72) = v33;
        }
        v32 = (v33 + 1) & -(__int64)(v34 != 0);
        *(_QWORD *)(v7 + 80) = v32;
      }
      if ( v32 )
      {
        if ( v30 <= v32 )
          goto LABEL_48;
        v26 = v32 * (unsigned __int128)2uLL;
        v35 = 2 * v32;
        if ( is_mul_ok(v32, 2uLL) )
        {
          v31 = 0;
        }
        else
        {
          v35 = -1LL;
          v31 = -2147024362;
        }
        if ( v31 < 0 )
          goto LABEL_63;
        v36 = v32 + 2048;
        if ( v35 - v32 <= 0x800 )
          v36 = v35;
        if ( v30 > v36 )
          v36 = v30;
        *(_QWORD *)&v26 = CoTaskMemRealloc(*(LPVOID *)(v7 + 64), 2 * v36);
        if ( (_QWORD)v26 )
        {
          *(_QWORD *)(v7 + 80) = v36;
          *(_QWORD *)(v7 + 64) = v26;
          v2 = a2;
          goto LABEL_48;
        }
        v2 = a2;
      }
      else
      {
        v26 = v30 * (unsigned __int128)2u;
        if ( !is_mul_ok(v30, 2uLL) )
          goto LABEL_63;
        v31 = 0;
        *(_QWORD *)&v26 = CoTaskMemAlloc(2 * v30);
        if ( (_QWORD)v26 )
        {
          *(_QWORD *)(v7 + 80) = v30;
          *(_QWORD *)(v7 + 64) = v26;
          *(_WORD *)v26 = 0;
          goto LABEL_48;
        }
      }
      v31 = -2147024882;
LABEL_48:
      if ( v31 >= 0 )
      {
        v37 = *(_WORD **)(v7 + 64);
        *((_QWORD *)&v26 + 1) = 2147483646LL;
        if ( v28 > 0x7FFFFFFE )
        {
          if ( v28 != -1LL )
            *v37 = 0;
        }
        else
        {
          *((_QWORD *)&v26 + 1) = -1LL;
          v38 = v27 - (_QWORD)v37;
          do
          {
            if ( v29 == 1 )
              break;
            v39 = *(_WORD *)((char *)v37 + v38);
            if ( !v39 )
              break;
            *v37++ = v39;
            --v29;
          }
          while ( v29 );
          v40 = v37 - 1;
          if ( v29 )
            v40 = v37;
          *v40 = 0;
        }
        *(_QWORD *)(v7 + 72) = v28;
      }
      goto LABEL_63;
    }
    v41 = *(void **)(v7 + 64);
    if ( v41 )
    {
      CoTaskMemFree(v41);
      *(_QWORD *)(v7 + 64) = 0LL;
    }
    *(_QWORD *)(v7 + 72) = 0LL;
    *(_QWORD *)(v7 + 80) = 0LL;
  }
LABEL_63:
  v42 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(
          (Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *)v7,
          *((__int64 *)&v26 + 1));
  v8 = v42;
  if ( v42 >= 0 )
  {
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::AddRef(v7);
    v47 = v7;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v42);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v8 < 0 )
    goto LABEL_73;
  v50 = 0LL;
  Results = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetResults(v47, &v50);
  v8 = Results;
  v44 = v50;
  if ( Results >= 0
    && (Results = Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
                    v2,
                    v50),
        v8 = Results,
        Results >= 0) )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)Results);
  }
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
LABEL_80:
  if ( v47 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v47);
  return (unsigned int)v8;
}
