/*
 * XREFs of ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000BD10
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007600 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007920 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180009770 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18002D0A8 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 * Callees:
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18000BFD0 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x18002E748 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002E88C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18002ECB8 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsof.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
        CDeviceGraphStore *this,
        const unsigned __int16 *a2,
        struct IDeviceGraphObjectsStore **a3)
{
  unsigned int v5; // r15d
  void **v6; // rdx
  unsigned __int64 v7; // rbx
  void **v8; // rcx
  void **v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  char *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rbx
  void **v16; // r14
  void **v17; // r8
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned __int64 *v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int16 v24; // cx
  HANDLE ProcessHeap; // rax
  __int64 v26; // rcx
  __int64 v28; // rax
  int v29; // r9d
  int v30; // eax
  void **v31; // rax
  void **v32; // [rsp+30h] [rbp-88h] BYREF
  struct IDeviceGraphObjectsStore **v33; // [rsp+38h] [rbp-80h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-78h] BYREF
  void *lpMem[2]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-58h]
  unsigned __int64 v37; // [rsp+68h] [rbp-50h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v33 = a3;
  v5 = 0;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, lpCriticalSection);
  try
  {
    v36 = 0LL;
    v10 = 7LL;
    v37 = 7LL;
    LOWORD(lpMem[0]) = 0;
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    if ( v7 )
    {
      if ( v7 <= 7 || (std::wstring::_Copy(lpMem), v37 < 8) )
        v8 = lpMem;
      else
        v8 = (void **)lpMem[0];
      memcpy_0(v8, a2, 2 * v7);
      v36 = v7;
      if ( v37 < 8 )
        v9 = lpMem;
      else
        v9 = (void **)lpMem[0];
      *((_WORD *)v9 + v7) = 0;
      v10 = v37;
      v11 = v36;
    }
    else
    {
      v11 = 0LL;
      v36 = 0LL;
      LOWORD(lpMem[0]) = 0;
    }
    v12 = (char *)this + 56;
    v13 = *((_QWORD *)this + 7);
    v14 = *(_QWORD *)(v13 + 8);
    v15 = v13;
    v16 = (void **)lpMem[0];
    if ( !*(_BYTE *)(v14 + 25) )
      goto LABEL_11;
    while ( 1 )
    {
      if ( v15 == v13 )
        goto LABEL_46;
      v20 = (_QWORD *)(v15 + 32);
      v21 = (unsigned __int64 *)(v15 + 48);
      if ( *(_QWORD *)(v15 + 56) >= 8uLL )
        v20 = (_QWORD *)*v20;
      v6 = v10 < 8 ? lpMem : v16;
      v22 = *v21;
      v23 = *v21 < v11 ? *v21 : v11;
      if ( v23 )
        break;
LABEL_33:
      if ( v11 < v22 )
        goto LABEL_46;
LABEL_34:
      if ( v10 < 8 )
        goto LABEL_38;
      if ( v10 + 1 <= 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( 2 * (v10 + 1) < 0x1000 )
          goto LABEL_37;
        if ( ((__int64)lpMem[0] & 0x1F) == 0 )
        {
          v31 = (void **)*(v16 - 1);
          if ( v31 < v16 )
          {
            v16 = (void **)((char *)v16 - (__int64)v31);
            if ( (unsigned __int64)v16 >= 8 && (unsigned __int64)v16 <= 0x27 )
            {
              v16 = v31;
LABEL_37:
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v16);
LABEL_38:
              if ( !*(_QWORD *)(v15 + 64) )
                v5 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore>(
                       v15 + 64,
                       v6);
              v26 = *(_QWORD *)(v15 + 64);
              if ( v26 )
                (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v26 + 8LL))(v26, v6);
              *v33 = *(struct IDeviceGraphObjectsStore **)(v15 + 64);
              goto LABEL_70;
            }
          }
        }
      }
      v13 = _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
LABEL_53:
      v29 = 1;
LABEL_54:
      if ( v29 < 0 )
      {
LABEL_55:
        v14 = *(_QWORD *)(v14 + 16);
        goto LABEL_22;
      }
      while ( 1 )
      {
        v15 = v14;
        v14 = *(_QWORD *)v14;
LABEL_22:
        if ( *(_BYTE *)(v14 + 25) )
          break;
LABEL_11:
        v6 = (void **)(v14 + 32);
        if ( v10 < 8 )
          v17 = lpMem;
        else
          v17 = v16;
        v18 = (unsigned __int64 *)(v14 + 48);
        if ( *(_QWORD *)(v14 + 56) >= 8uLL )
          v6 = (void **)*v6;
        if ( v11 < *v18 )
          v19 = v11;
        else
          v19 = *v18;
        if ( v19 )
        {
          while ( *(_WORD *)v6 == *(_WORD *)v17 )
          {
            v6 = (void **)((char *)v6 + 2);
            v17 = (void **)((char *)v17 + 2);
            if ( !--v19 )
              goto LABEL_20;
          }
          v29 = -1;
          if ( *(_WORD *)v6 < *(_WORD *)v17 )
            goto LABEL_54;
          goto LABEL_53;
        }
LABEL_20:
        if ( *v18 < v11 )
          goto LABEL_55;
      }
    }
    while ( 1 )
    {
      v24 = *(_WORD *)v20;
      if ( *(_WORD *)v6 != *(_WORD *)v20 )
        break;
      v6 = (void **)((char *)v6 + 2);
      v20 = (_QWORD *)((char *)v20 + 2);
      if ( !--v23 )
        goto LABEL_33;
    }
    v30 = -1;
    if ( *(_WORD *)v6 >= v24 )
      v30 = 1;
    if ( v30 >= 0 )
      goto LABEL_34;
LABEL_46:
    v32 = lpMem;
    v28 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
            v12,
            v6,
            &v32);
    std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Insert_hint<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>> &,std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *> *>(
      (_DWORD)v12,
      (unsigned int)&v32,
      v15,
      v28 + 32,
      v28);
    v15 = (__int64)v32;
    v10 = v37;
    v16 = (void **)lpMem[0];
    goto LABEL_34;
  }
  catch ( std::bad_alloc )
  {
    LODWORD(v32) = -2147024882;
    v5 = -2147024882;
  }
LABEL_70:
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return v5;
}
