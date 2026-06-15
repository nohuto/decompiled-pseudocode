/*
 * XREFs of ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800BCB5C
 * Callers:
 *     _lambda_af28356267c3f0f0f506d99a7f614f80_::operator() @ 0x1800C67B4 (_lambda_af28356267c3f0f0f506d99a7f614f80_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDeviceGraphObjectsStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005384 (--1-$com_ptr_t@UIDeviceGraphObjectsStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BD81C (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800D14C0 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AVSyncLoc.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800ECC14 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::RefreshConnectorFormats(LPCWSTR pwsz)
{
  int v2; // eax
  unsigned int v3; // edi
  struct IMMDevice *v4; // rbx
  __int64 v5; // rcx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  int v9; // eax
  __int64 v10; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // edx
  CEndpointCharacteristics *v13; // [rsp+38h] [rbp-19h] BYREF
  int v14; // [rsp+40h] [rbp-11h] BYREF
  __int64 v15; // [rsp+48h] [rbp-9h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-1h] BYREF
  __int64 v17[2]; // [rsp+58h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v17[1] = -2LL;
  v17[0] = 0LL;
  v13 = 0LL;
  v2 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, LPCWSTR, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         pwsz,
         0LL,
         &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = (struct IMMDevice *)*((_QWORD *)v13 + 2);
    v17[0] = (__int64)v4;
    ((void (__fastcall *)(struct IMMDevice *))v4->lpVtbl->AddRef)(v4);
    ((void (__fastcall *)(struct IMMDevice *, int *))v4->lpVtbl->GetState)(v4, &v14);
    if ( v14 == 4 )
    {
      v3 = 0;
    }
    else
    {
      if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v5,
                           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
            + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, pwsz);
        TlgWrite(v8, &unk_1801456F5, v6, v7, 3u, &pData);
      }
      v15 = 0LL;
      v9 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, LPCWSTR, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
             g_DeviceGraphStore,
             pwsz,
             &v15);
      v3 = v9;
      if ( v9 >= 0 )
      {
        CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(v10, &lpCriticalSection, v15);
        CEndpointCharacteristics::RefreshDefaultConnectorFormats(v13, v11);
        CPolicyConfig::SetDeviceFormat(g_PolicyConfig, v4, 0LL);
        (*(void (__fastcall **)(CPolicyConfig *, LPCWSTR))(*(_QWORD *)g_PolicyConfig + 40LL))(g_PolicyConfig, pwsz);
        v3 = 0;
        if ( lpCriticalSection )
        {
          LeaveCriticalSection(lpCriticalSection);
          lpCriticalSection = 0LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE4C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v9);
      }
      wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>(&v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE3B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v2);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
  return v3;
}
