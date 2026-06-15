/*
 * XREFs of ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180038C5C
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180038520 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180095A9C (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800E9D60 (-AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x1800EC1C0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::UpdateAPOEnableStatus(CEndpointCharacteristics *this)
{
  int v3; // esi
  _DWORD *v4; // r14
  bool v5; // bl
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v15; // eax
  int cData; // [rsp+28h] [rbp-99h]
  LPCWSTR pwsz; // [rsp+38h] [rbp-89h] BYREF
  LPCWSTR v18; // [rsp+40h] [rbp-81h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-79h] BYREF
  __int64 v20; // [rsp+50h] [rbp-71h]
  __int64 v21; // [rsp+58h] [rbp-69h]
  __int64 v22; // [rsp+60h] [rbp-61h] BYREF
  LPCWSTR v23; // [rsp+68h] [rbp-59h] BYREF
  int v24; // [rsp+70h] [rbp-51h] BYREF
  __int64 v25; // [rsp+78h] [rbp-49h]
  PROPVARIANT *p_pvar; // [rsp+80h] [rbp-41h]
  char v27; // [rsp+88h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+C8h] [rbp+7h] BYREF
  int *v31; // [rsp+D8h] [rbp+17h]
  __int64 v32; // [rsp+E0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v25 = -2LL;
  if ( !*((_BYTE *)this + 224) )
    return 0LL;
  *((_BYTE *)this + 224) = 0;
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  p_pvar = &pvar;
  v27 = 1;
  v3 = 1;
  v4 = (_DWORD *)((char *)this + 212);
  while ( 1 )
  {
    v5 = 0;
    if ( !*((_DWORD *)this + 51) )
    {
      if ( !*((_DWORD *)this + 50) )
        CEndpointCharacteristics::InitializeAPOInfo(this);
      if ( *v4 )
        goto LABEL_32;
    }
    if ( (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(this) )
      goto LABEL_32;
    if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &byte_180189090[20 * v3],
           &pvar) >= 0
      && (_WORD)pvar == 19
      && (unsigned int)v20 >= 0x64 )
    {
      v5 = 1;
    }
    else
    {
      PropVariantClear(&pvar);
      if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
             *((_QWORD *)this + 4),
             &byte_1801890E0[20 * v3],
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v5 = (unsigned int)v20 >= 0x64;
      }
    }
    PropVariantClear(&pvar);
    if ( !v5 )
      goto LABEL_32;
    pwsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pwsz,
      0LL);
    if ( (int)CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)&pwsz) >= 0 )
    {
      v23 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v23,
        0LL);
      mmdDevGetInstanceIdFromMMDeviceId(pwsz, &v23);
      if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
      {
        TlgCreateWsz(&pDesc, pwsz);
        TlgCreateWsz(&v30, v23);
        v24 = v3;
        v31 = &v24;
        v32 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801475B6, v6, v7, 5u, &pData);
      }
      if ( v23 )
        CoTaskMemFree((LPVOID)v23);
    }
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
    v22 = 0LL;
    v9 = (**v8)(v8, &GUID_419e19f7_d318_4c05_b705_2f17133c55da, &v22);
    v10 = v9;
    if ( v9 < 0 )
      break;
    v18 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, LPCWSTR *))(*(_QWORD *)v22 + 40LL))(v22, 2LL, &v18);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = 557LL;
      goto LABEL_49;
    }
    LOWORD(pvar) = 19;
    LODWORD(v20) = 1;
    v11 = (*(__int64 (__fastcall **)(LPCWSTR, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v18 + 48LL))(
            v18,
            &PKEY_AudioEndpoint_Disable_SysFx,
            &pvar);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = 561LL;
      goto LABEL_49;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 4) + 48LL))(
            *((_QWORD *)this + 4),
            &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
            &pvar);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = 565LL;
      goto LABEL_49;
    }
    if ( !*((_QWORD *)this + 7) )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 40LL))(v22, 0LL);
      v10 = v11;
      if ( v11 < 0 )
      {
        v12 = 570LL;
LABEL_49:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v11,
          cData);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
        goto LABEL_51;
      }
    }
    PropVariantClear(&pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
    if ( pwsz )
      CoTaskMemFree((LPVOID)pwsz);
LABEL_32:
    ++v3;
    ++v4;
    if ( v3 >= 4 )
    {
      if ( CEndpointCharacteristics::AreEnhancementsEnabled(this)
        && (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(this) )
      {
        pwsz = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          &pwsz,
          0LL);
        if ( (int)CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)&pwsz) >= 0 )
        {
          v18 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
            &v18,
            0LL);
          mmdDevGetInstanceIdFromMMDeviceId(pwsz, &v18);
          if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
          {
            TlgCreateWsz(&pDesc, pwsz);
            TlgCreateWsz(&v30, v18);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180147567, v13, v14, 4u, &pData);
          }
          if ( v18 )
            CoTaskMemFree((LPVOID)v18);
        }
        LOWORD(pvar) = 19;
        LODWORD(v20) = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 4) + 48LL))(
                *((_QWORD *)this + 4),
                &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                &pvar);
        v10 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x256,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v15,
            cData);
          goto LABEL_43;
        }
        PropVariantClear(&pvar);
        if ( pwsz )
          CoTaskMemFree((LPVOID)pwsz);
      }
      PropVariantClear(&pvar);
      return 0LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22B,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9,
    cData);
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
LABEL_43:
  if ( pwsz )
    CoTaskMemFree((LPVOID)pwsz);
  PropVariantClear(&pvar);
  return v10;
}
