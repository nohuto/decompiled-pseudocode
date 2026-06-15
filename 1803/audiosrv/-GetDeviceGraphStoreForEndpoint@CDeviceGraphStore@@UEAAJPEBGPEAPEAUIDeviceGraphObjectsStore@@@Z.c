/*
 * XREFs of ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800199C0
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180019FB0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18001A970 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800178B0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180017F50 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002AF0C (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
        CDeviceGraphStore *this,
        const unsigned __int16 *a2,
        struct IDeviceGraphObjectsStore **a3)
{
  const unsigned __int16 *v3; // rdi
  CDeviceGraphStore *v4; // r15
  struct _RTL_CRITICAL_SECTION *v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  SIZE_T v9; // r14
  HANDLE v10; // rax
  __int64 v11; // rcx
  size_t v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // r11
  unsigned __int64 v16; // r10
  unsigned __int16 *v17; // rax
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  const char *v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  HANDLE ProcessHeap; // rax
  struct IDeviceGraphObjectsStore *v28; // rcx
  __int64 result; // rax
  char *v30; // rax
  int v31; // eax
  unsigned int v32; // edi
  size_t v33; // rbx
  SIZE_T v34; // rcx
  LPVOID v35; // rax
  __int64 v36; // rcx
  int v37; // [rsp+20h] [rbp-A8h]
  __int64 v38; // [rsp+30h] [rbp-98h]
  _QWORD *v39; // [rsp+38h] [rbp-90h] BYREF
  const unsigned __int16 *v40; // [rsp+40h] [rbp-88h] BYREF
  struct IDeviceGraphObjectsStore **v41; // [rsp+48h] [rbp-80h]
  __int64 v42; // [rsp+50h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+58h] [rbp-70h]
  _QWORD v44[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-58h]
  __int64 v46; // [rsp+78h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v42 = -2LL;
  v41 = a3;
  v3 = a2;
  v4 = this;
  v40 = a2;
  try
  {
    v9 = 0LL;
    *a3 = 0LL;
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v43 = v5;
    v45 = 0LL;
    v46 = 7LL;
    LOWORD(v44[0]) = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( v3[v6] );
    if ( v6 <= 7 )
    {
      v45 = v6;
      v33 = 2 * v6;
      memmove(v44, v3, v33);
      *(_WORD *)((char *)v44 + v33) = 0;
      v9 = v44[0];
LABEL_13:
      v15 = (_QWORD *)((char *)v4 + 56);
      v38 = (__int64)v4 + 56;
      v6 = *((_QWORD *)v4 + 7);
      v16 = *(_QWORD *)(v6 + 8);
      v3 = (const unsigned __int16 *)v6;
      v4 = (CDeviceGraphStore *)v46;
      v7 = v45;
      if ( *(_BYTE *)(v16 + 25) )
        goto LABEL_28;
      while ( 1 )
      {
        v17 = (unsigned __int16 *)v44;
        if ( (unsigned __int64)v4 >= 8 )
          v17 = (unsigned __int16 *)v9;
        v18 = v16 + 32;
        if ( *(_QWORD *)(v16 + 56) >= 8uLL )
          v18 = *(_QWORD *)(v16 + 32);
        v19 = *(_QWORD *)(v16 + 48);
        if ( v7 < v19 )
LABEL_63:
          v20 = v7;
        else
          v20 = *(_QWORD *)(v16 + 48);
        if ( v20 )
        {
          v21 = v18 - (_QWORD)v17;
          while ( 1 )
          {
            v13 = *(unsigned __int16 *)((char *)v17 + v21);
            v14 = *v17;
            if ( (_WORD)v13 != (_WORD)v14 )
              break;
            ++v17;
            if ( !--v20 )
              goto LABEL_24;
          }
          if ( (unsigned __int16)v13 < (unsigned __int16)v14 )
          {
LABEL_65:
            v16 = *(_QWORD *)(v16 + 16);
            goto LABEL_26;
          }
        }
        else
        {
LABEL_24:
          if ( v19 < v7 )
            goto LABEL_65;
        }
        v6 = v16;
        v16 = *(_QWORD *)v16;
LABEL_26:
        if ( *(_BYTE *)(v16 + 25) )
        {
          v15 = (_QWORD *)v38;
LABEL_28:
          if ( (const unsigned __int16 *)v6 != v3 )
          {
            v22 = v6 + 32;
            if ( *(_QWORD *)(v6 + 56) >= 8uLL )
              v22 = *(_QWORD *)(v6 + 32);
            v23 = (const char *)v44;
            if ( (unsigned __int64)v4 >= 8 )
              v23 = (const char *)v9;
            v24 = *(_QWORD *)(v6 + 48);
            if ( v24 < v7 )
              v25 = *(_QWORD *)(v6 + 48);
            else
              v25 = v7;
            if ( v25 )
            {
              v23 -= v22;
              while ( 1 )
              {
                v13 = *(unsigned __int16 *)&v23[v22];
                v14 = *(unsigned __int16 *)v22;
                if ( (_WORD)v13 != (_WORD)v14 )
                  break;
                v22 += 2LL;
                if ( !--v25 )
                  goto LABEL_39;
              }
              if ( (unsigned __int16)v13 >= (unsigned __int16)v14 )
              {
LABEL_40:
                if ( (unsigned __int64)v4 >= 8 )
                {
                  v26 = v9;
                  if ( (unsigned __int64)v4 + 1 > 0x7FFFFFFFFFFFFFFFLL
                    || (unsigned __int64)(2LL * ((_QWORD)v4 + 1)) >= 0x1000
                    && ((v9 & 0x1F) != 0 || (v9 = *(_QWORD *)(v9 - 8), v9 >= v26) || (v26 = v26 - v9 - 8, v26 > 0x1F)) )
                  {
                    _o__invalid_parameter_noinfo_noreturn(v26);
                    JUMPOUT(0x18007F561LL);
                  }
                  ProcessHeap = GetProcessHeap();
                  HeapFree(ProcessHeap, 0, (LPVOID)v9);
                }
                v45 = 0LL;
                v46 = 7LL;
                LOWORD(v44[0]) = 0;
                v28 = *(struct IDeviceGraphObjectsStore **)(v6 + 64);
                if ( v28 )
                {
LABEL_45:
                  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, __int64, __int64, const char *))(*(_QWORD *)v28 + 8LL))(
                    v28,
                    v13,
                    v14,
                    v23);
                  v28 = *(struct IDeviceGraphObjectsStore **)(v6 + 64);
                  goto LABEL_46;
                }
                v31 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,unsigned short const * &>(
                        v6 + 64,
                        &v40,
                        v14,
                        v23);
                v32 = v31;
                if ( v31 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x267,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                    (const char *)(unsigned int)v31,
                    v37);
                  if ( v5 )
                    LeaveCriticalSection(v5);
                  return v32;
                }
                else
                {
                  v28 = *(struct IDeviceGraphObjectsStore **)(v6 + 64);
                  if ( v28 )
                    goto LABEL_45;
LABEL_46:
                  *v41 = v28;
                  if ( v5 )
                    LeaveCriticalSection(v5);
                  return 0LL;
                }
              }
            }
            else
            {
LABEL_39:
              if ( v7 >= v24 )
                goto LABEL_40;
            }
          }
          v39 = v44;
          v30 = (char *)std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
                          v15,
                          v13,
                          (__int64 *)&v39);
          std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Insert_hint<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>> &,std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *> *>(
            v38,
            &v39,
            v6,
            v30 + 32,
            (__int64)v30);
          v6 = (unsigned __int64)v39;
          v4 = (CDeviceGraphStore *)v46;
          v9 = v44[0];
          goto LABEL_40;
        }
      }
    }
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( (v6 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v6 | 7) < 0xA )
        v7 = 10LL;
      else
        v7 = v6 | 7;
    }
    v8 = v7 + 1;
    if ( v7 != -1LL )
    {
      if ( v8 > 0x7FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
      }
      else
      {
        v9 = 2 * v8;
        if ( 2 * v8 < 0x1000 )
        {
          v10 = GetProcessHeap();
          v9 = (SIZE_T)HeapAlloc(v10, 0, v9);
          if ( !v9 )
          {
            v17 = (unsigned __int16 *)_o__invalid_parameter_noinfo_noreturn(v11);
            goto LABEL_63;
          }
          goto LABEL_12;
        }
      }
      v34 = v9 + 39;
      if ( v9 + 39 < v9 )
        std::_Xbad_alloc();
      v35 = operator new(v34);
      if ( !v35 )
      {
        _o__invalid_parameter_noinfo_noreturn(v36);
        JUMPOUT(0x18007F4F9LL);
      }
      v9 = ((unsigned __int64)v35 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(v9 - 8) = v35;
    }
LABEL_12:
    v45 = v6;
    v46 = v7;
    v12 = 2 * v6;
    memcpy_0((void *)v9, v3, v12);
    *(_WORD *)(v9 + v12) = 0;
    v44[0] = v9;
    goto LABEL_13;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x26D,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v23);
  }
  return result;
}
