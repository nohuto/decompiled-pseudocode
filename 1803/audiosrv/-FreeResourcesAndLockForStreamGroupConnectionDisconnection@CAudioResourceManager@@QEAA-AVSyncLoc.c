/*
 * XREFs of ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800D14C0
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800BCB5C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDE10 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 *v7; // r14
  __int64 *v8; // rdi
  int v9; // eax
  char v10; // al
  __int64 *v11; // rbx
  __int64 *v12; // rsi
  __int64 v13; // rcx
  __int64 *v14; // rsi
  const struct _TlgProvider_t *v15; // rbx
  const WCHAR *v16; // rax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  __int64 *v19; // rbx
  __int64 *v20; // rdi
  int v22; // eax
  char v23; // [rsp+38h] [rbp-D0h] BYREF
  void *v24[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  void *v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  _QWORD v30[5]; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v33; // [rsp+D8h] [rbp-30h]
  __int64 p_pData; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  char *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v30[1] = -2LL;
  v30[2] = a2;
  LODWORD(v26) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3);
  LODWORD(v26) = 1;
  *(_OWORD *)v28 = 0LL;
  v29 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a3 + 96LL))(a3, v28);
  v6 = retaddr;
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      3015LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v5);
  v7 = (__int64 *)v28[1];
  v8 = (__int64 *)v28[0];
  v30[0] = ((char *)v28[1] - (char *)v28[0]) >> 3;
  v27 = 0LL;
  v23 = 0;
  while ( v8 != v7 )
  {
    *(_OWORD *)v24 = 0LL;
    v25 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a3 + 104LL))(a3, *v8, v24);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        3024LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v9);
    v27 += ((char *)v24[1] - (char *)v24[0]) >> 3;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 88LL))(*v8);
    v12 = (__int64 *)v24[1];
    v11 = (__int64 *)v24[0];
    if ( v10 )
    {
      v23 = 1;
      if ( v24[0] == v24[1] )
        goto LABEL_10;
      do
      {
        v13 = *v11;
        pData.Ptr = (ULONGLONG)off_18012C820;
        p_pData = (__int64)&pData;
        (*(void (__fastcall **)(__int64, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v13 + 368LL))(v13, &pData);
        ++v11;
      }
      while ( v11 != v12 );
    }
    else
    {
      while ( v11 != v12 )
      {
        v22 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, __int64))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                g_DeviceGraphManager,
                *v11,
                *v8);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            3033LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v22);
        ++v11;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
    }
    v11 = (__int64 *)v24[0];
LABEL_10:
    if ( v11 )
    {
      v14 = (__int64 *)v24[1];
      if ( v11 != v24[1] )
      {
        do
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11++);
        while ( v11 != v14 );
        v11 = (__int64 *)v24[0];
      }
      std::_Deallocate(v11, (v25 - (__int64)v11) >> 3, 8uLL);
    }
    ++v8;
  }
  v15 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                     (__int64)v6,
                                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                       + 1);
  if ( *(_DWORD *)v15 > 4u )
  {
    v16 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
    TlgCreateWsz(&pDesc, v16);
    v33 = v30;
    p_pData = 8LL;
    v35 = &v27;
    v36 = 8LL;
    v37 = &v23;
    v38 = 1LL;
    TlgWrite(v15, &unk_180146036, v17, v18, 6u, &pData);
  }
  v19 = (__int64 *)v28[0];
  if ( v28[0] )
  {
    v20 = (__int64 *)v28[1];
    if ( v28[0] != v28[1] )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19++);
      while ( v19 != v20 );
      v19 = (__int64 *)v28[0];
    }
    std::_Deallocate(v19, (v29 - (__int64)v19) >> 3, 8uLL);
  }
  return a2;
}
