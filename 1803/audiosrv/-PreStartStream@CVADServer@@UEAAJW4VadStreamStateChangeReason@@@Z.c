/*
 * XREFs of ?PreStartStream@CVADServer@@UEAAJW4VadStreamStateChangeReason@@@Z @ 0x1800C2260
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800981C4 (-reset@-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 */

__int64 __fastcall CVADServer::PreStartStream(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  const WCHAR *v9; // rax
  int v10; // eax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 *v16; // rdi
  __int64 v17; // rbx
  int v19; // eax
  __int64 v20; // [rsp+38h] [rbp-39h] BYREF
  int v21; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v23; // [rsp+50h] [rbp-21h]
  __int64 v24; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  __int64 *v26; // [rsp+88h] [rbp+17h]
  int v27; // [rsp+90h] [rbp+1Fh]
  int v28; // [rsp+94h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+27h] BYREF
  int *v30; // [rsp+A8h] [rbp+37h]
  int v31; // [rsp+B0h] [rbp+3Fh]
  int v32; // [rsp+B4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_QWORD *)(a1 + 192);
  v20 = 0LL;
  if ( v4 )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      v20 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v4 + 8) + 24LL))(v4 + 8, &v20) >= 0 )
      {
        v6 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                          v5,
                                                          lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                            + 1);
        if ( *(_DWORD *)v6 > 4u )
        {
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
          v8 = *(_QWORD *)(a1 + 168);
          v28 = 0;
          v24 = v7;
          v26 = &v24;
          v27 = 8;
          v9 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
          TlgCreateWsz(&pDesc, v9);
          v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 40LL))(v20);
          v32 = 0;
          v21 = v10;
          v30 = &v21;
          v31 = 4;
          TlgWrite(v6, &unk_1801458E2, v11, v12, 5u, &pData);
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      if ( *(_QWORD *)(a1 + 192) )
      {
        v16 = (__int64 *)(a1 + 464);
        wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset((__int64 *)(a1 + 464));
        v17 = *(_QWORD *)(a1 + 192);
        if ( *(_BYTE *)(v17 + 128) && a2 == 2 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x25u,
              (__int64)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
          }
        }
        else
        {
          wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(v16);
          v19 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                            + 312LL))(
                  g_PolicyManager,
                  (v17 + 8) & -(__int64)(v17 != 0),
                  v16);
          v13 = v19;
          if ( v19 < 0 )
          {
            v15 = (unsigned int)v19;
            v14 = 1925LL;
            goto LABEL_24;
          }
        }
        v13 = 0;
        goto LABEL_19;
      }
      v13 = -2004287487;
      v14 = 1912LL;
      v15 = 2290679809LL;
    }
    else
    {
      v13 = -2004287487;
      v14 = 1911LL;
      v15 = 2290679809LL;
    }
  }
  else
  {
    v13 = -2004287487;
    v14 = 1910LL;
    v15 = 2290679809LL;
  }
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v15);
LABEL_19:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
