/*
 * XREFs of ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BD81C
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800BCB5C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800BD100 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x1800BDBE0 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_c1fb52f6c005678af697d2769b0a97a1_::operator() @ 0x1800B84D4 (_lambda_c1fb52f6c005678af697d2769b0a97a1_--operator().c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDE10 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPolicyConfig::SetDeviceFormat(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        const struct tWAVEFORMATEX *a3)
{
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  WORD wFormatTag; // ax
  __int64 v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  TraceLoggingHProvider v13; // r10
  char v14; // r14
  LPVOID v15; // r15
  _QWORD *v16; // r12
  void *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID pv_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v28[4]; // [rsp+70h] [rbp-98h] BYREF
  char v29; // [rsp+90h] [rbp-78h]
  __int64 v30; // [rsp+98h] [rbp-70h]
  GUID v31; // [rsp+A0h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+E8h] [rbp-20h] BYREF
  WORD *p_nChannels; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  DWORD *p_nSamplesPerSec; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  DWORD *p_nAvgBytesPerSec; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  GUID *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v30 = -2LL;
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
      v31 = GUID_00000000_0000_0010_8000_00aa00389b71;
      if ( a3 )
        wFormatTag = a3->wFormatTag;
      else
        wFormatTag = 0;
      v31.Data1 = wFormatTag;
      if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v8,
                           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
            + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, pwsz);
        TlgCreateWsz(&v34, L"WFEX");
        p_nChannels = &a3->nChannels;
        v36 = 2LL;
        p_nSamplesPerSec = &a3->nSamplesPerSec;
        v38 = v10;
        p_nAvgBytesPerSec = &a3->nAvgBytesPerSec;
        v40 = v10;
        v41 = &v31;
        v42 = 16LL;
        TlgWrite(v13, &unk_180145767, v11, v12, 8u, &pData);
      }
      pv = 0LL;
      pv_8[0] = &pv;
      pv_8[1] = 0LL;
      v14 = 1;
      LOBYTE(v28[0]) = 1;
      v6 = (*(__int64 (__fastcall **)(CPolicyConfig *, LPCWSTR, _QWORD, LPVOID *))(*(_QWORD *)this + 32LL))(
             this,
             pwsz,
             0LL,
             &pv_8[1]);
      if ( LOBYTE(v28[0]) )
      {
        v15 = pv_8[1];
        v16 = pv_8[0];
        v17 = *(void **)pv_8[0];
        if ( pv_8[1] != *(LPVOID *)pv_8[0] )
        {
          if ( v17 )
            CoTaskMemFree(v17);
          *v16 = v15;
        }
      }
      if ( v6 >= 0 )
      {
        v25 = 0LL;
        v18 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, LPCWSTR, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                pwsz,
                0LL,
                &v25);
        v6 = v18;
        if ( v18 >= 0 )
        {
          v22[0] = 0;
          v24 = 0LL;
          ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
            &v24);
          if ( v24
            && (v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 88LL))(v24, v22), v6 = v19, v19 < 0) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA8B,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)(unsigned int)v19);
          }
          else
          {
            pv_8[0] = &v25;
            pv_8[1] = &pv;
            v28[0] = v22;
            *(_OWORD *)&v28[1] = *(_OWORD *)pv_8;
            v28[3] = v22;
            v29 = 1;
            v20 = CPolicyConfig::SetDeviceFormatInternal(a2, v22[0], eHostProcessConnector, a3);
            v6 = v20;
            if ( v20 >= 0 )
            {
              v29 = 0;
              v6 = 0;
              v14 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA9F,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                (const char *)(unsigned int)v20);
            }
            if ( v14 )
            {
              v29 = 0;
              lambda_c1fb52f6c005678af697d2769b0a97a1_::operator()((__int64)&v28[1]);
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA83,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v18);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA80,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v6);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA73,
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
      (void *)0xA70,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
  }
  return (unsigned int)v6;
}
