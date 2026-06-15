/*
 * XREFs of ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180011990
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180029750 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029A10 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18002FF88 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@$$V@Details@WRL@Micro.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180030E88 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_t_ea_180030E88.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180031400 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
        CDeviceGraphStore *this,
        const unsigned __int16 *a2,
        struct IDeviceGraphObjectsStore **a3)
{
  unsigned int v5; // r15d
  struct _RTL_CRITICAL_SECTION *v6; // r13
  bool v7; // r8
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  char *v10; // r12
  size_t v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // rdi
  _QWORD *v15; // rax
  __int64 *v16; // r11
  _QWORD *v17; // rbx
  unsigned __int64 v18; // r14
  char *v19; // rcx
  __int64 *v20; // r10
  unsigned __int64 v21; // rdi
  __int64 v22; // r10
  unsigned __int16 *v23; // rax
  _QWORD *v24; // r9
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v29; // rax
  size_t v30; // rbx
  char *v31; // [rsp+30h] [rbp-88h] BYREF
  struct IDeviceGraphObjectsStore **v32; // [rsp+38h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+40h] [rbp-78h]
  __int64 v34; // [rsp+48h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+50h] [rbp-68h]
  _QWORD v36[2]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-50h]
  unsigned __int64 v38; // [rsp+70h] [rbp-48h]

  v34 = -2LL;
  v32 = a3;
  v5 = 0;
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v33 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v35 = v6;
  try
  {
    v37 = 0LL;
    v38 = 7LL;
    LOWORD(v36[0]) = 0;
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    if ( v8 <= 7 )
    {
      v37 = v8;
      v30 = 2 * v8;
      memmove(v36, a2, v30);
      *(_WORD *)((char *)v36 + v30) = 0;
      v10 = (char *)v36[0];
    }
    else
    {
      v9 = 0x7FFFFFFFFFFFFFFELL;
      if ( v8 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlength_error("string too long");
      if ( (v8 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v8 | 7) < 0xA )
          v9 = 10LL;
        else
          v9 = v8 | 7;
      }
      v10 = (char *)std::_Allocate(v9 + 1, 2uLL, v7);
      v37 = v8;
      v38 = v9;
      v11 = 2 * v8;
      memcpy_0(v10, a2, v11);
      *(_WORD *)&v10[v11] = 0;
      v36[0] = v10;
    }
    v14 = (char *)this + 56;
    v31 = (char *)this + 56;
    v15 = (_QWORD *)*((_QWORD *)this + 7);
    v16 = (__int64 *)v15[1];
    v17 = v15;
    v18 = v38;
    if ( !*((_BYTE *)v16 + 25) )
    {
      while ( 1 )
      {
        v19 = (char *)v36;
        if ( v38 >= 8 )
          v19 = v10;
        v20 = v16 + 4;
        if ( (unsigned __int64)v16[7] >= 8 )
          v20 = (__int64 *)v16[4];
        v21 = v16[6];
        if ( v37 < v21 )
          v12 = v37;
        else
          v12 = v16[6];
        if ( v12 )
        {
          v22 = (char *)v20 - v19;
          while ( 1 )
          {
            v13 = *(unsigned __int16 *)&v19[v22];
            if ( (_WORD)v13 != *(_WORD *)v19 )
              break;
            v19 += 2;
            if ( !--v12 )
              goto LABEL_20;
          }
          if ( (unsigned __int16)v13 < *(_WORD *)v19 )
          {
LABEL_52:
            v16 = (__int64 *)v16[2];
            goto LABEL_22;
          }
        }
        else
        {
LABEL_20:
          if ( v21 < v37 )
            goto LABEL_52;
        }
        v17 = v16;
        v16 = (__int64 *)*v16;
LABEL_22:
        if ( *((_BYTE *)v16 + 25) )
        {
          v14 = v31;
          break;
        }
      }
    }
    if ( v17 != v15 )
    {
      v23 = (unsigned __int16 *)(v17 + 4);
      if ( v17[7] >= 8uLL )
        v23 = (unsigned __int16 *)v17[4];
      v24 = v36;
      if ( v38 >= 8 )
        v24 = v10;
      v25 = v17[6];
      if ( v25 < v37 )
        v26 = v17[6];
      else
        v26 = v37;
      if ( v26 )
      {
        v24 = (_QWORD *)((char *)v24 - (__int64)v23);
        while ( 1 )
        {
          v12 = *(unsigned __int16 *)((char *)v23 + (_QWORD)v24);
          v13 = *v23;
          if ( (_WORD)v12 != (_WORD)v13 )
            break;
          ++v23;
          if ( !--v26 )
            goto LABEL_35;
        }
        if ( (unsigned __int16)v12 >= (unsigned __int16)v13 )
          goto LABEL_36;
      }
      else
      {
LABEL_35:
        if ( v37 >= v25 )
        {
LABEL_36:
          if ( v18 >= 8 )
            std::_Deallocate(v10, v18 + 1, 2uLL);
          v37 = 0LL;
          v38 = 7LL;
          LOWORD(v36[0]) = 0;
          v27 = v17[8];
          if ( v27
            || (Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(v17 + 8),
                v5 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,>(v17 + 8),
                (v27 = v17[8]) != 0) )
          {
            (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))(*(_QWORD *)v27 + 8LL))(
              v27,
              v12,
              v13,
              v24);
          }
          *v32 = (struct IDeviceGraphObjectsStore *)v17[8];
          goto LABEL_58;
        }
      }
    }
    v31 = (char *)v36;
    v29 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
            v14,
            v12,
            &v31);
    std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Insert_hint<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>> &,std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *> *>(
      (_DWORD)v14,
      (unsigned int)&v31,
      (_DWORD)v17,
      v29 + 32,
      v29);
    v17 = v31;
    v18 = v38;
    v10 = (char *)v36[0];
    goto LABEL_36;
  }
  catch ( std::bad_alloc )
  {
    LODWORD(v31) = -2147024882;
    v5 = -2147024882;
    v6 = v33;
  }
LABEL_58:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v5;
}
