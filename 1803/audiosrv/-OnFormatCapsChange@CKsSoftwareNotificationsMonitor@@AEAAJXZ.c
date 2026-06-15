/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800C68EC
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1800C6E20 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180097844 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_af28356267c3f0f0f506d99a7f614f80__void_ @ 0x1800C6704 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_af28356267c3f0f0f506d99a.c)
 *     ??$make_shared@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$V@std@@YA?AV?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@0@XZ @ 0x1800C6760 (--$make_shared@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F645C (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int i; // esi
  unsigned __int16 *v11; // rax
  int v12; // r8d
  int v13; // ecx
  __int64 v14; // rdi
  const WCHAR **v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  const WCHAR *v18; // rdx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  TraceLoggingHProvider v21; // r10
  std::_Ref_count_base *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  int v29; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  __int128 v31; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h] BYREF
  PROPVARIANT pvar; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int16 *v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  int v41; // [rsp+98h] [rbp-70h] BYREF
  const WCHAR **v42; // [rsp+A0h] [rbp-68h]
  std::_Ref_count_base *v43; // [rsp+A8h] [rbp-60h]
  std::_Ref_count_base *v44[2]; // [rsp+B0h] [rbp-58h] BYREF
  PROPVARIANT *p_pvar; // [rsp+C0h] [rbp-48h]
  char v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  _BYTE *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E8h] [rbp-20h] BYREF
  std::_Ref_count_base *v50; // [rsp+F0h] [rbp-18h]
  _BYTE v51[64]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v52[6]; // [rsp+138h] [rbp+30h] BYREF
  _DWORD v53[6]; // [rsp+150h] [rbp+48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+168h] [rbp+60h] BYREF
  int *v55; // [rsp+188h] [rbp+80h]
  int v56; // [rsp+190h] [rbp+88h]
  int v57; // [rsp+194h] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v47 = -2LL;
  v2 = *((_QWORD *)this + 4);
  v37 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 96LL))(v2, &v37);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_51;
  }
  pv = 0LL;
  v5 = v37;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v5 + 64LL))(v5, &pv);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 125LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_49;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v36);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 128LL;
    goto LABEL_7;
  }
  v34 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, bool, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_DWORD *)this + 2) != 0,
         1879048207LL,
         &v34);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v30);
    v4 = v8;
    if ( v8 >= 0 )
    {
      for ( i = 0; i < v30; ++i )
      {
        v33 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 32LL))(v34, i, &v33) >= 0 )
        {
          v32 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 32LL))(v33, 0LL, &v32) >= 0 )
          {
            v52[0] = 590439624;
            v52[1] = 1283267372;
            v52[2] = 1907779772;
            v52[3] = 1730509416;
            v52[4] = 1;
            pvar = 0LL;
            v39 = 0LL;
            v40 = 0LL;
            p_pvar = &pvar;
            v46 = 1;
            if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v32 + 40LL))(v32, v52, &pvar) >= 0
              && (_WORD)pvar == 31 )
            {
              v11 = v39;
              do
              {
                v12 = *(unsigned __int16 *)((char *)v11 + (_BYTE *)pv - (_BYTE *)v39);
                v13 = *v11 - v12;
                if ( v13 )
                  break;
                ++v11;
              }
              while ( v12 );
              if ( !v13 )
              {
                v53[0] = -1702713381;
                v53[1] = 1102331579;
                v53[2] = -1223116157;
                v53[3] = -65530063;
                v53[4] = 1;
                PropVariantClear(&pvar);
                if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v32 + 40LL))(v32, v53, &pvar) >= 0
                  && (_WORD)pvar == 19
                  && (_DWORD)v39 == (_DWORD)v36 )
                {
                  v31 = 0LL;
                  v14 = v33;
                  *(_OWORD *)v44 = 0LL;
                  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>::operator=(
                    &v31,
                    v44);
                  if ( v44[1] )
                    std::_Ref_count_base::_Decref(v44[1]);
                  v15 = (const WCHAR **)v31;
                  if ( !(_QWORD)v31 )
                  {
                    v16 = std::make_shared<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>,>(&v49);
                    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>::operator=(
                      &v31,
                      v16);
                    if ( v50 )
                      std::_Ref_count_base::_Decref(v50);
                    v15 = (const WCHAR **)v31;
                  }
                  if ( (*(int (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v14 + 40LL))(v14, v15) < 0 )
                  {
                    v22 = (std::_Ref_count_base *)*((_QWORD *)&v31 + 1);
                  }
                  else
                  {
                    v29 = dword_18018B2D0++;
                    if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                         v17,
                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                          + 1) > 4u )
                    {
                      v55 = &v29;
                      v56 = 4;
                      v57 = 0;
                      if ( v15 )
                        v18 = *v15;
                      else
                        v18 = 0LL;
                      TlgCreateWsz(&pDesc, v18);
                      TlgWrite(v21, &unk_180145981, v19, v20, 4u, &pData);
                    }
                    v48 = v51;
                    v41 = v29;
                    v22 = (std::_Ref_count_base *)*((_QWORD *)&v31 + 1);
                    if ( *((_QWORD *)&v31 + 1) )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL));
                      v22 = (std::_Ref_count_base *)*((_QWORD *)&v31 + 1);
                      v15 = (const WCHAR **)v31;
                    }
                    v42 = v15;
                    v43 = v22;
                    v23 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_af28356267c3f0f0f506d99a7f614f80__void_(
                            (__int64)v51,
                            (__int64)&v41);
                    v24 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService);
                    v27 = CSerialWorkQueue::QueueWorkItem(v24, v23, v25, v26);
                    if ( v27 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        192LL,
                        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
                        (const char *)(unsigned int)v27);
                  }
                  if ( v22 )
                    std::_Ref_count_base::_Decref(v22);
                }
              }
            }
            v46 = 0;
            PropVariantClear(&pvar);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
      }
      v4 = 0;
      goto LABEL_48;
    }
    v9 = 138LL;
  }
  else
  {
    v9 = 135LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
    (const char *)(unsigned int)v8);
LABEL_48:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
LABEL_49:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
  return v4;
}
