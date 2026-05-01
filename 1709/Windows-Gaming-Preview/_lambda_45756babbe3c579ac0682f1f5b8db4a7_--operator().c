/*
 * XREFs of _lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator() @ 0x18001A008
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_45756babbe3c579ac0682f1f5b8db4a7____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_____::Run @ 0x18001CA90 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_45756babbe3c579.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x180009034 (-GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU-$IVectorView@.c)
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800091E8 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FA10 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18001B0F8 (-Set@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@XZ @ 0x18001CD70 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025700 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_180025700.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // r15
  __int64 v5; // rsi
  char *v6; // rax
  char *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdi
  HSTRING v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int128 v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r15
  signed int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r12
  _WORD *v28; // rcx
  __int64 v29; // r13
  __int16 v30; // ax
  _WORD *v31; // rax
  void *v32; // rcx
  int v33; // eax
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  int Results; // eax
  __int64 v37; // rbx
  _QWORD v39[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v41; // [rsp+B0h] [rbp+48h]
  char *v43; // [rsp+C0h] [rbp+58h]

  v39[2] = -2LL;
  v2 = a2;
  v4 = *(_QWORD *)(*a1 + 128LL);
  v5 = *(_QWORD *)(*a1 + 56LL);
  v41 = 0LL;
  v6 = (char *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v43 = v6;
  v39[3] = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_80:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_87;
  }
  v39[4] = v6;
  v9 = v6 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
  *((_QWORD *)v7 + 8) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable';
  *v9 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  v10 = v7 + 16;
  *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v7 = v43;
  }
  *(_QWORD *)v7 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable';
  *v9 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v7 + 9) = 0LL;
  *((_QWORD *)v7 + 10) = 0LL;
  *((_QWORD *)v7 + 11) = 0LL;
  *((_QWORD *)v7 + 12) = 0LL;
  *((_QWORD *)v7 + 13) = 0LL;
  *((_QWORD *)v7 + 14) = 0LL;
  *((_QWORD *)v7 + 15) = 0LL;
  *((_QWORD *)v7 + 16) = 0LL;
  *((_QWORD *)v7 + 17) = 0LL;
  *((_QWORD *)v7 + 16) = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode();
  *((_QWORD *)v7 + 18) = 0LL;
  *((_QWORD *)v7 + 19) = 0LL;
  *((_QWORD *)v7 + 18) = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode();
  *((_QWORD *)v7 + 20) = 0LL;
  *((_QWORD *)v7 + 21) = 0LL;
  *((_QWORD *)v7 + 20) = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode();
  *((_QWORD *)v7 + 22) = 0LL;
  *((_QWORD *)v7 + 23) = 0LL;
  *((_QWORD *)v7 + 22) = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode();
  *((_QWORD *)v7 + 24) = 0LL;
  *((_QWORD *)v7 + 25) = 0LL;
  *((_QWORD *)v7 + 26) = 0LL;
  v11 = (v4 + 8) & -(__int64)(v4 != 0);
  v12 = (HSTRING)a1[2];
  if ( *((_QWORD *)v7 + 12) != v5 )
  {
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v13 = *((_QWORD *)v7 + 12);
    *((_QWORD *)v7 + 12) = v5;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( *((_QWORD *)v7 + 24) != v11 )
  {
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v14 = *((_QWORD *)v7 + 24);
    *((_QWORD *)v7 + 24) = v11;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( !WindowsIsStringEmpty(v12) )
  {
    *(_QWORD *)&v15 = WindowsGetStringRawBuffer(v12, 0LL);
    v16 = v15;
    if ( !(_QWORD)v15 )
    {
      v32 = (void *)*((_QWORD *)v7 + 9);
      if ( v32 )
      {
        CoTaskMemFree(v32);
        *((_QWORD *)v7 + 9) = 0LL;
      }
      *((_QWORD *)v7 + 10) = 0LL;
      *((_QWORD *)v7 + 11) = 0LL;
      goto LABEL_66;
    }
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v15 + 2 * v17) );
    v18 = v17 + 1;
    v19 = -1LL;
    if ( v17 + 1 >= v17 )
      v19 = v17 + 1;
    v20 = v17 + 1 < v17 ? 0x80070216 : 0;
    if ( v18 < v17 )
      goto LABEL_51;
    if ( *((_QWORD *)v7 + 11) == -1LL )
    {
      if ( *((_QWORD *)v7 + 10) == -1LL )
      {
        v21 = *((_QWORD *)v7 + 9);
        if ( v21 )
        {
          v22 = -1LL;
          do
            ++v22;
          while ( *(_WORD *)(v21 + 2 * v22) );
        }
        else
        {
          v22 = 0LL;
        }
        *((_QWORD *)v7 + 10) = v22;
      }
      if ( *((_QWORD *)v7 + 9) )
        v23 = *((_QWORD *)v7 + 10) + 1LL;
      else
        v23 = 0LL;
      *((_QWORD *)v7 + 11) = v23;
    }
    v24 = *((_QWORD *)v7 + 11);
    if ( v24 )
    {
      if ( v19 <= v24 )
        goto LABEL_51;
      v15 = v24 * (unsigned __int128)2uLL;
      v39[6] = *((_QWORD *)&v15 + 1);
      v25 = 2 * v24;
      if ( is_mul_ok(v24, 2uLL) )
      {
        v20 = 0;
      }
      else
      {
        v25 = -1LL;
        v20 = -2147024362;
      }
      if ( v20 >= 0 )
      {
        v26 = v25 - v24;
        v27 = v24 + 2048;
        if ( v26 <= 0x800 )
          v27 = v25;
        if ( v19 > v27 )
          v27 = v19;
        *(_QWORD *)&v15 = CoTaskMemRealloc(*((LPVOID *)v7 + 9), 2 * v27);
        if ( (_QWORD)v15 )
        {
          *((_QWORD *)v7 + 11) = v27;
          *((_QWORD *)v7 + 9) = v15;
        }
        else
        {
          v20 = -2147024882;
        }
        goto LABEL_51;
      }
    }
    else
    {
      v15 = v19 * (unsigned __int128)2u;
      v39[5] = *((_QWORD *)&v15 + 1);
      if ( is_mul_ok(v19, 2uLL) )
      {
        v20 = 0;
        *(_QWORD *)&v15 = CoTaskMemAlloc(2 * v19);
        if ( (_QWORD)v15 )
        {
          *((_QWORD *)v7 + 11) = v19;
          *((_QWORD *)v7 + 9) = v15;
          *(_WORD *)v15 = 0;
        }
        else
        {
          v20 = -2147024882;
        }
LABEL_51:
        if ( v20 >= 0 )
        {
          v28 = (_WORD *)*((_QWORD *)v7 + 9);
          *((_QWORD *)&v15 + 1) = 2147483646LL;
          if ( v17 > 0x7FFFFFFE )
          {
            if ( v17 != -1LL )
              *v28 = 0;
          }
          else
          {
            *((_QWORD *)&v15 + 1) = -1LL;
            v29 = v16 - (_QWORD)v28;
            do
            {
              if ( v18 == 1 )
                break;
              v30 = *(_WORD *)((char *)v28 + v29);
              if ( !v30 )
                break;
              *v28++ = v30;
              --v18;
            }
            while ( v18 );
            v31 = v28 - 1;
            if ( v18 )
              v31 = v28;
            *v31 = 0;
          }
          *((_QWORD *)v7 + 10) = v17;
        }
      }
    }
LABEL_66:
    v2 = a2;
  }
  v33 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(
          (Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *)v7,
          *((__int64 *)&v15 + 1));
  v8 = v33;
  if ( v33 >= 0 )
  {
    if ( v7 )
    {
      v34 = *((_QWORD *)v7 + 8);
      v39[1] = v34;
      while ( v34 >= 0 )
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 8, v34 + 1, v34);
        if ( v35 == v34 )
          goto LABEL_76;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v34 + 16));
    }
LABEL_76:
    v41 = (__int64)v7;
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
      (const char *)(unsigned int)v33);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v8 < 0 )
    goto LABEL_80;
  v39[0] = 0LL;
  Results = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetResults(v41, v39);
  v8 = Results;
  v37 = v39[0];
  if ( Results >= 0
    && (Results = Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
                    v2,
                    v39[0]),
        v8 = Results,
        Results >= 0) )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)Results);
  }
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
LABEL_87:
  if ( v41 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v41);
  return (unsigned int)v8;
}
