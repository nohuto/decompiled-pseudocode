/*
 * XREFs of ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x1800C06F0
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
 */

__int64 __fastcall CVADServer::AbortStartStream(CVADServer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  const WCHAR *v7; // rax
  int v8; // eax
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  int v15; // [rsp+38h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-29h] BYREF
  char v17; // [rsp+48h] [rbp-21h]
  __int64 v18; // [rsp+50h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+27h] BYREF
  int *v24; // [rsp+A0h] [rbp+37h]
  int v25; // [rsp+A8h] [rbp+3Fh]
  int v26; // [rsp+ACh] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = *((_QWORD *)this + 24);
  v14 = 0LL;
  if ( v2 )
  {
    if ( *((_QWORD *)this + 21) )
    {
      v14 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v2 + 8) + 24LL))(v2 + 8, &v14) >= 0 )
      {
        v4 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                          v3,
                                                          lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                            + 1);
        if ( *(_DWORD *)v4 > 4u )
        {
          v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 80LL))(*((_QWORD *)this + 24) + 8LL);
          v6 = *((_QWORD *)this + 21);
          v22 = 0;
          v18 = v5;
          v20 = &v18;
          v21 = 8;
          v7 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
          TlgCreateWsz(&pDesc, v7);
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
          v26 = 0;
          v15 = v8;
          v24 = &v15;
          v25 = 4;
          TlgWrite(v4, &unk_180145893, v9, v10, 5u, &pData);
        }
      }
    }
  }
  if ( !*((_DWORD *)this + 46) )
  {
    v11 = 1952LL;
LABEL_12:
    v12 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v11 = 1953LL;
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v11 = 1954LL;
    goto LABEL_12;
  }
  wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset((__int64 *)this + 58);
  v12 = 0;
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v12;
}
