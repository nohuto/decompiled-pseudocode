/*
 * XREFs of ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x18009F5E4
 * Callers:
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x18009F510 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProces.c)
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x18009F580 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixC.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180008324 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x18005BC34 (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_823040ae01d5059dfb369ac1bb9874b3_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x18009E7B4 (_lambda_823040ae01d5059dfb369ac1bb9874b3_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 *     ??$emplace_back@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@@Z @ 0x18009EB64 (--$emplace_back@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std.c)
 *     ??$emplace_back@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@@Z @ 0x18009ECA4 (--$emplace_back@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientConte.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_0960f3740b145ee4ec2f585e7c8d5cb2___ @ 0x18009EF24 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAp.c)
 *     ??$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@X@std@@YA?AV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@AEAPEAUIAudioProcess@@$$QEAPEAVCAppSubmixClientContext@@@Z @ 0x18009EFA4 (--$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@X@std@@YA-A.c)
 *     ??$make_unique@VCAppSubmixClientContext@@$$VX@std@@YA?AV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@XZ @ 0x18009F008 (--$make_unique@VCAppSubmixClientContext@@$$VX@std@@YA-AV-$unique_ptr@VCAppSubmixClientContext@@U.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x18009F1A4 (--1CAppSubmixClientContext@@QEAA@XZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1800A01B4 (-erase@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=4
__int64 CProcessSubmixManager::GetAppSubmixClientContextHelper(__int64 a1, unsigned int a2, unsigned int a3, ...)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  LPCWCH **v5; // rsi
  LPCWCH **i; // rbx
  CAppSubmixClientContext *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // esi
  const char *v13; // r9
  __int64 result; // rax
  unsigned int v15; // eax
  char *v16; // r9
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  unsigned int v20; // esi
  __int64 *v21; // r15
  __int64 *j; // rsi
  __int64 *k; // r14
  __int64 v24; // rdx
  CAppSubmixClientContext *v25; // rsi
  void *v26; // rbx
  CAppSubmixClientContext *v27; // rbx
  __int64 v28; // rdx
  CAppSubmixClientContext *v29; // rsi
  __int64 v30; // [rsp+20h] [rbp-C8h]
  CAppSubmixClientContext *v31; // [rsp+30h] [rbp-B8h] BYREF
  LPCWCH *v32; // [rsp+38h] [rbp-B0h] BYREF
  void *v33; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-A0h]
  __int128 v35; // [rsp+58h] [rbp-90h]
  unsigned int *v36; // [rsp+68h] [rbp-80h]
  __int64 v37; // [rsp+70h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+78h] [rbp-70h]
  _OWORD v39[2]; // [rsp+80h] [rbp-68h] BYREF
  unsigned int *v40; // [rsp+A0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  bool v42; // [rsp+F0h] [rbp+8h] BYREF
  unsigned int v43; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int v44; // [rsp+100h] [rbp+18h] BYREF
  const unsigned __int16 *v45; // [rsp+108h] [rbp+20h] BYREF
  va_list va; // [rsp+108h] [rbp+20h]
  __int64 v47; // [rsp+110h] [rbp+28h] BYREF
  va_list va1; // [rsp+110h] [rbp+28h]
  CAppSubmixClientContext **v49; // [rsp+118h] [rbp+30h]
  va_list va2; // [rsp+120h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v45 = va_arg(va1, const unsigned __int16 *);
  va_copy(va2, va1);
  v47 = va_arg(va2, _QWORD);
  v49 = va_arg(va2, CAppSubmixClientContext **);
  v44 = a3;
  v43 = a2;
  v37 = -2LL;
  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v38 = v4;
    v42 = v43 == 0;
    *(_QWORD *)&v34 = &v42;
    va_copy(*((va_list *)&v34 + 1), va);
    va_copy((va_list)v35, va1);
    *((_QWORD *)&v35 + 1) = &v43;
    v36 = &v44;
    v39[0] = v34;
    v39[1] = v35;
    v40 = &v44;
    v5 = *(LPCWCH ***)(a1 + 64);
    for ( i = *(LPCWCH ***)(a1 + 56);
          i != v5
       && !lambda_823040ae01d5059dfb369ac1bb9874b3_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
             (__int64)v39,
             i);
          ++i )
    {
      ;
    }
    if ( i == *(LPCWCH ***)(a1 + 64) )
    {
      std::make_unique<CAppSubmixClientContext,,void>(&v31);
      v7 = v31;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)v31,
        0LL);
      v10 = -1LL;
      do
        ++v10;
      while ( v45[v10] );
      v11 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, v45, v10, v30, (unsigned __int16 **)v7);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x15F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
          (const char *)(unsigned int)v11);
        if ( v7 )
        {
          CAppSubmixClientContext::~CAppSubmixClientContext(v7);
          operator delete(v7, (const struct std::nothrow_t *)0x48);
        }
        if ( v4 )
          LeaveCriticalSection(v4);
        return v12;
      }
      *((_DWORD *)v7 + 2) = v43;
      *((_DWORD *)v7 + 3) = v44;
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 48LL))(v47);
      *((_DWORD *)v7 + 4) = v15;
      v16 = (char *)v7 + 24;
      if ( v42 )
      {
        v17 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, _QWORD, char *))(*(_QWORD *)g_DeviceGraphStore + 32LL))(
                g_DeviceGraphStore,
                v45,
                v15,
                v16);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x165,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
            (const char *)(unsigned int)v17);
          CAppSubmixClientContext::~CAppSubmixClientContext(v7);
          operator delete(v7, (const struct std::nothrow_t *)0x48);
          if ( v4 )
            LeaveCriticalSection(v4);
          return v18;
        }
        goto LABEL_23;
      }
      v19 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, _QWORD, _QWORD, char *))(*(_QWORD *)g_DeviceGraphStore + 40LL))(
              g_DeviceGraphStore,
              v43,
              v44,
              v16);
      v20 = v19;
      if ( v19 >= 0 )
      {
LABEL_23:
        v21 = (__int64 *)*((_QWORD *)v7 + 4);
        for ( j = (__int64 *)*((_QWORD *)v7 + 3); j != v21; ++j )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*j + 112LL))(*j) )
          {
            if ( j != v21 )
            {
              for ( k = j + 1; k != v21; ++k )
              {
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*k + 112LL))(*k) )
                {
                  v24 = *k;
                  *k = 0LL;
                  wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(j++, v24);
                }
              }
            }
            break;
          }
        }
        std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::erase(
          (char *)v7 + 24,
          &v32,
          j,
          *((_QWORD *)v7 + 4));
        v32 = (LPCWCH *)v7;
        std::make_unique<CAppSubmixClient,IAudioProcess * &,CAppSubmixClientContext *,void>(
          &v33,
          (__int64 *)va1,
          (__int64 *)&v32);
        v25 = (CAppSubmixClientContext *)v33;
        std::vector<std::unique_ptr<CAppSubmixClient>>::emplace_back<std::unique_ptr<CAppSubmixClient>>(
          (unsigned __int64 *)v7 + 6,
          (__int64 *)&v33);
        std::vector<std::unique_ptr<CAppSubmixClientContext>>::emplace_back<std::unique_ptr<CAppSubmixClientContext>>(
          (unsigned __int64 *)(a1 + 56),
          (__int64 *)&v31);
        *v49 = v25;
        v26 = v33;
        if ( v33 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v33);
          operator delete(v26, (const struct std::nothrow_t *)0x10);
        }
        v27 = v31;
        if ( !v31 )
          goto LABEL_44;
        CAppSubmixClientContext::~CAppSubmixClientContext(v31);
        v28 = 72LL;
        goto LABEL_43;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x169,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)(unsigned int)v19);
      CAppSubmixClientContext::~CAppSubmixClientContext(v7);
      operator delete(v7, (const struct std::nothrow_t *)0x48);
      if ( v4 )
        LeaveCriticalSection(v4);
      result = v20;
    }
    else
    {
      std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_0960f3740b145ee4ec2f585e7c8d5cb2___(
        (__int64 ***)&v32,
        (__int64 **)(*i)[6],
        (__int64 **)(*i)[7],
        (__int64 *)va1);
      if ( v32 == (LPCWCH *)(*i)[7] )
      {
        v32 = *i;
        std::make_unique<CAppSubmixClient,IAudioProcess * &,CAppSubmixClientContext *,void>(
          &v31,
          (__int64 *)va1,
          (__int64 *)&v32);
        v29 = v31;
        std::vector<std::unique_ptr<CAppSubmixClient>>::emplace_back<std::unique_ptr<CAppSubmixClient>>(
          (unsigned __int64 *)*i + 6,
          (__int64 *)&v31);
        *v49 = v29;
        v27 = v31;
        if ( !v31 )
        {
LABEL_44:
          if ( v4 )
            LeaveCriticalSection(v4);
          return 0LL;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v31);
        v28 = 16LL;
LABEL_43:
        operator delete(v27, (const struct std::nothrow_t *)v28);
        goto LABEL_44;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)0x8000FFFFLL);
      if ( v4 )
        LeaveCriticalSection(v4);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x196,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v13);
  }
  return result;
}
