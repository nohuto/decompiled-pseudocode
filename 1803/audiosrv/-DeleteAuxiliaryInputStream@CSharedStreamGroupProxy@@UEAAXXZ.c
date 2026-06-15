/*
 * XREFs of ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x1800450F0
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180045170 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800D3864 (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 */

void __fastcall CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(unsigned __int64 this)
{
  void *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  DWORD LastError; // ebx
  __int64 v15; // [rsp+38h] [rbp-39h] BYREF
  __int64 v16; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  __int128 v19; // [rsp+68h] [rbp-9h]
  __int128 v20; // [rsp+78h] [rbp+7h]
  __int128 v21; // [rsp+88h] [rbp+17h]
  __int128 v22; // [rsp+98h] [rbp+27h]
  __int128 v23; // [rsp+A8h] [rbp+37h]

  if ( *(_QWORD *)(this + 376) )
  {
    v3 = *(_QWORD *)(this + 392);
    v16 = 0LL;
    wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(&v16, v3);
    v4 = v16;
    if ( *(_BYTE *)(this + 320) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 48LL))(v16, *(_QWORD *)(this + 376));
      *(_BYTE *)(this + 320) = 0;
    }
    v15 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v15) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, *(_QWORD *)(this + 376));
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                        v5,
                                                        lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                          + 1);
      if ( *(_DWORD *)v6 > 4u )
      {
        *((_QWORD *)&v20 + 1) = 8LL;
        *(_QWORD *)&v20 = &v17;
        v17 = this & -(__int64)(this != 8);
        TlgWrite(v6, &unk_180145F20, v7, v8, 3u, &pData);
      }
    }
    memset_0(&pData, 0, 0x60uLL);
    v9 = v19;
    *(EVENT_DATA_DESCRIPTOR *)(this + 328) = pData;
    v10 = v20;
    *(_OWORD *)(this + 344) = v9;
    v11 = v21;
    *(_OWORD *)(this + 360) = v10;
    v12 = v22;
    *(_OWORD *)(this + 376) = v11;
    v13 = v23;
    *(_OWORD *)(this + 392) = v12;
    *(_OWORD *)(this + 408) = v13;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  }
  v2 = *(void **)(this + 424);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(this + 424) = 0LL;
}
