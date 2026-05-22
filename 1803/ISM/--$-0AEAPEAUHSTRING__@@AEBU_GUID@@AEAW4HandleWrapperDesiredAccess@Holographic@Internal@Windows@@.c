/*
 * XREFs of ??$?0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1800CDB04
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800C6AB4 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009880 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@2@XZ @ 0x18004CD90 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KV-$map@V-$basic_string@DU-$char_traits@D@std@@.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C0434 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall std::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>(
        __int64 a1,
        HSTRING *a2,
        _OWORD *a3,
        int *a4,
        char *a5,
        __int64 *a6)
{
  char v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rcx
  char v10; // r11
  int v11; // eax
  HSTRING v12; // rsi
  HSTRING *v13; // rdi
  HRESULT v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 1;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::`vftable';
  v8 = a1 + 16;
  v9 = *a6;
  v10 = *a5;
  v11 = *a4;
  v12 = *a2;
  *(_QWORD *)v8 = &Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  *(_DWORD *)(v8 + 8) = 1;
  *(_OWORD *)(v8 + 12) = *a3;
  v13 = (HSTRING *)(v8 + 32);
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_DWORD *)(v8 + 40) = v11;
  *(_QWORD *)(v8 + 48) = v9;
  *(_QWORD *)(v8 + 56) = 0LL;
  *(_QWORD *)(v8 + 64) = 0LL;
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 80) = 0LL;
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_QWORD *)(v8 + 96) = 0LL;
  *(_QWORD *)(v8 + 104) = 0LL;
  *(_QWORD *)(v8 + 112) = 0LL;
  *(_DWORD *)(v8 + 120) = -2147024890;
  *(_QWORD *)(v8 + 128) = -1LL;
  *(_QWORD *)(v8 + 136) = 0LL;
  *(_QWORD *)(v8 + 144) = 0LL;
  *(_QWORD *)(v8 + 152) = 0LL;
  *(_BYTE *)(v8 + 160) = 0;
  *(_BYTE *)(v8 + 161) = v10;
  if ( !v9 || v10 )
    v7 = 0;
  if ( v7 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x185,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v14 = 0;
  if ( !v12 || v12 != *v13 )
  {
    WindowsDeleteString(*v13);
    *v13 = 0LL;
    v14 = WindowsDuplicateString(v12, (HSTRING *)(v8 + 32));
  }
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x187,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)v8);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x188,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  *(_QWORD *)v8 = &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v8 + 168), 0, 0);
  *(_QWORD *)(v8 + 208) = 0LL;
  *(_QWORD *)(v8 + 216) = 0LL;
  *(_QWORD *)(v8 + 208) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::map<std::string,std::variant<unsigned long,bool,float>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::map<std::string,std::variant<unsigned long,bool,float>>>>,0>>::_Buyheadnode();
  return a1;
}
