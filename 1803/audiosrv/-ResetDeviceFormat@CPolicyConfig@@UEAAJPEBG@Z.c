/*
 * XREFs of ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800BD100
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180064B58 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095AB0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800B8B74 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BD81C (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::ResetDeviceFormat(CPolicyConfig *this, const unsigned __int16 *a2)
{
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  TraceLoggingHProvider v7; // r10
  int v8; // eax
  int v9; // edi
  struct IMMDevice *v10; // rbx
  __int64 v11; // rax
  _QWORD *Ptr; // r12
  __int64 v13; // r15
  void *v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // rsi
  void *v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  CEndpointCharacteristics *v26[2]; // [rsp+30h] [rbp-39h] BYREF
  LPVOID pv[2]; // [rsp+40h] [rbp-29h] BYREF
  struct tWAVEFORMATEX *v28; // [rsp+50h] [rbp-19h] BYREF
  struct IMMDevice *v29; // [rsp+58h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  char v31; // [rsp+70h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       (__int64)this,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgWrite(v7, &unk_1801456C8, v5, v6, 3u, &pData);
  }
  v26[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         v26);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v29 = (struct IMMDevice *)*((_QWORD *)v26[0] + 2);
    v10 = v29;
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->AddRef)(v10);
    *(GUID *)pv = GUID_00000000_0000_0000_0000_000000000000;
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(v26[0], 0, (struct _GUID *)pv, 0LL, 0LL);
    v28 = 0LL;
    *(_QWORD *)&pData.Size = 0LL;
    pData.Ptr = (ULONGLONG)&v28;
    v11 = *(_QWORD *)this;
    v31 = 1;
    v9 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, _QWORD, ULONG *))(v11 + 32))(
           this,
           a2,
           0LL,
           &pData.Size);
    if ( v31 )
    {
      Ptr = (_QWORD *)pData.Ptr;
      v13 = *(_QWORD *)&pData.Size;
      v14 = *(void **)pData.Ptr;
      if ( *(_QWORD *)&pData.Size != *(_QWORD *)pData.Ptr )
      {
        if ( v14 )
          CoTaskMemFree(v14);
        *Ptr = v13;
      }
    }
    if ( v9 < 0 )
    {
      v15 = (unsigned int)v9;
      v16 = 3711LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v15);
LABEL_35:
      if ( v28 )
        CoTaskMemFree(v28);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
      goto LABEL_38;
    }
    v17 = CPolicyConfig::ConfirmDeviceFormat(v26[0], v28, (struct _GUID *)pv, 0, 0);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        3714LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v17);
      v18 = CPolicyConfig::SetDeviceFormat(this, v10, 0LL);
      v9 = v18;
      if ( v18 < 0 )
      {
        v16 = 3718LL;
LABEL_19:
        v15 = (unsigned int)v18;
        goto LABEL_20;
      }
      v18 = CEndpointCharacteristics::ClearMixFormatCache((__int64)v26[0], 0);
      v9 = v18;
      if ( v18 < 0 )
      {
        v16 = 3721LL;
        goto LABEL_19;
      }
      pv[0] = 0LL;
      *(_QWORD *)&pData.Size = 0LL;
      pData.Ptr = (ULONGLONG)pv;
      v19 = *(_QWORD *)this;
      v31 = 1;
      v9 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, __int64, ULONG *))(v19 + 32))(
             this,
             a2,
             1LL,
             &pData.Size);
      if ( v31 )
      {
        v20 = (_QWORD *)pData.Ptr;
        v21 = *(_QWORD *)&pData.Size;
        v22 = *(void **)pData.Ptr;
        if ( *(_QWORD *)&pData.Size != *(_QWORD *)pData.Ptr )
        {
          if ( v22 )
            CoTaskMemFree(v22);
          *v20 = v21;
        }
      }
      if ( v9 < 0 )
      {
        v23 = (unsigned int)v9;
        v24 = 3725LL;
        goto LABEL_30;
      }
      v25 = CPolicyConfig::SetDeviceFormat(this, v10, (const struct tWAVEFORMATEX *)pv[0]);
      v9 = v25;
      if ( v25 < 0 )
      {
        v23 = (unsigned int)v25;
        v24 = 3728LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v23);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        goto LABEL_35;
      }
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
    }
    v9 = 0;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE74,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v8);
LABEL_38:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v26);
  return (unsigned int)v9;
}
