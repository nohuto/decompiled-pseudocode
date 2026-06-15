/*
 * XREFs of ?DisconnectStreamGroupFromSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@@Z @ 0x1800C9300
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphManager::DisconnectStreamGroupFromSaDevice(
        CDeviceGraphManager *this,
        struct IStreamGroupProxy *a2,
        struct ISaDeviceProxy *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  struct IStreamGroupProxy *v12; // [rsp+30h] [rbp-68h] BYREF
  struct ISaDeviceProxy *v13; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct IStreamGroupProxy **v15; // [rsp+60h] [rbp-38h]
  int v16; // [rsp+68h] [rbp-30h]
  int v17; // [rsp+6Ch] [rbp-2Ch]
  struct ISaDeviceProxy **v18; // [rsp+70h] [rbp-28h]
  int v19; // [rsp+78h] [rbp-20h]
  int v20; // [rsp+7Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 200LL))(a2);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                      v6,
                                                      lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v9 > 4u )
    {
      v17 = 0;
      v20 = 0;
      v15 = &v12;
      v18 = &v13;
      v12 = a2;
      v16 = 8;
      v13 = a3;
      v19 = 8;
      TlgWrite(v9, &unk_180145C20, v10, v11, 4u, &pData);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
