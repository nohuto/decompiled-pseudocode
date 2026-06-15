/*
 * XREFs of ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18008767C
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x180086718 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180086D90 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x180087AC0 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     _lambda_e1bf6d97dd671a2597185e44ea385b56_::operator() @ 0x18007F85C (_lambda_e1bf6d97dd671a2597185e44ea385b56_--operator().c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087CF0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPolicyConfig::SetDeviceFormat(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        const struct tWAVEFORMATEX *a3)
{
  int v6; // ebx
  int v7; // eax
  WORD wFormatTag; // ax
  void *v9; // r8
  __int64 v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  TraceLoggingHProvider v13; // r10
  char v14; // si
  __int64 v15; // r15
  _QWORD *v16; // r12
  void *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  LPCWSTR pwsz; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A0h] BYREF
  int *v29; // [rsp+70h] [rbp-90h]
  LPVOID Context; // [rsp+78h] [rbp-88h] BYREF
  __int128 v31; // [rsp+80h] [rbp-80h] BYREF
  int *v32; // [rsp+90h] [rbp-70h]
  char v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  GUID v35; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+F0h] [rbp-10h] BYREF
  WORD *p_nChannels; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  DWORD *p_nSamplesPerSec; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  DWORD *p_nAvgBytesPerSec; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  GUID *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v34 = -2LL;
  if ( a2 )
  {
    pwsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&pwsz,
      0LL);
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, LPCWSTR *))a2->lpVtbl->GetId)(a2, &pwsz);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v35 = GUID_00000000_0000_0010_8000_00aa00389b71;
      if ( a3 )
        wFormatTag = a3->wFormatTag;
      else
        wFormatTag = 0;
      v35.Data1 = wFormatTag;
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v9);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, pwsz);
        TlgCreateWsz(&v38, L"WFEX");
        p_nChannels = &a3->nChannels;
        v40 = 2LL;
        p_nSamplesPerSec = &a3->nSamplesPerSec;
        v42 = v10;
        p_nAvgBytesPerSec = &a3->nAvgBytesPerSec;
        v44 = v10;
        v45 = &v35;
        v46 = 16LL;
        TlgWrite(v13, &unk_18010F27D, v11, v12, 8u, &pData);
      }
      pv = 0LL;
      *(_QWORD *)&v28 = &pv;
      *((_QWORD *)&v28 + 1) = 0LL;
      v14 = 1;
      LOBYTE(v29) = 1;
      v6 = (*(__int64 (__fastcall **)(CPolicyConfig *, LPCWSTR, _QWORD, char *))(*(_QWORD *)this + 32LL))(
             this,
             pwsz,
             0LL,
             (char *)&v28 + 8);
      if ( (_BYTE)v29 )
      {
        v15 = *((_QWORD *)&v28 + 1);
        v16 = (_QWORD *)v28;
        v17 = *(void **)v28;
        if ( *((_QWORD *)&v28 + 1) != *(_QWORD *)v28 )
        {
          if ( v17 )
            CoTaskMemFree(v17);
          *v16 = v15;
        }
      }
      if ( v6 >= 0 )
      {
        v26 = 0LL;
        v18 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, LPCWSTR, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                pwsz,
                0LL,
                &v26);
        v6 = v18;
        if ( v18 >= 0 )
        {
          v22 = 0;
          v25 = 0LL;
          ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
            &v25);
          if ( v25
            && (v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 88LL))(v25, &v22), v6 = v19, v19 < 0) )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0xA80,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)(unsigned int)v19);
          }
          else
          {
            *(_QWORD *)&v28 = &v26;
            *((_QWORD *)&v28 + 1) = &pv;
            v29 = &v22;
            v31 = v28;
            v32 = &v22;
            v33 = 1;
            v20 = CPolicyConfig::SetDeviceFormatInternal(a2, v22, eHostProcessConnector, a3);
            v6 = v20;
            if ( v20 >= 0 )
            {
              v14 = 0;
              v6 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0xA94,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                (const char *)(unsigned int)v20);
            }
            if ( v14 )
            {
              v33 = 0;
              lambda_e1bf6d97dd671a2597185e44ea385b56_::operator()((__int64)&v31);
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xA78,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v18);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xA75,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v6);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA68,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v7);
    }
    if ( pwsz )
      CoTaskMemFree((LPVOID)pwsz);
  }
  else
  {
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA65,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
  }
  return (unsigned int)v6;
}
