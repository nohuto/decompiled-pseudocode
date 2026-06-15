/*
 * XREFs of ?CreateBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800C8990
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180063948 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CreateBridgeStream(
        unsigned __int64 this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  __int64 v4; // rax
  int v9; // eax
  volatile int *v10; // rdx
  __int64 v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  const struct _TlgProvider_t *v14; // r8
  const GUID *v15; // r9
  unsigned int v16; // ebx
  int v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  struct IStreamGroupProxy *v21; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  unsigned __int64 *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]
  struct IStreamGroupProxy **v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+98h] [rbp+1Fh]
  int v31; // [rsp+9Ch] [rbp+23h]

  v4 = *(_QWORD *)a3;
  v19 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(v4 + 264))(a3, &v19);
  v18 = v9;
  if ( v9 >= 0 )
  {
    if ( v19 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct BRIDGE_STREAM_DESCRIPTOR *, __int64, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 80) + 88LL))(
             *(_QWORD *)(this + 80),
             a2,
             v19,
             a4);
      v18 = v9;
    }
    if ( v9 >= 0 )
    {
      *((_QWORD *)a4 + 8) = this & -(__int64)(this != 8);
      v12 = *(_QWORD *)(this + 264);
      while ( 1 )
      {
        v11 = (unsigned __int64)v12 >> 63;
        if ( v12 < 0 )
          break;
        if ( (_DWORD)v12 != 0x7FFFFFFF )
        {
          v11 = v12 + 1;
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(this + 264), v12 + 1, v12);
          if ( v13 != v12 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v12 + 16), v10);
    }
  }
LABEL_11:
  v14 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                     v11,
                                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                       + 1);
  if ( *(_DWORD *)v14 > 4u )
  {
    v25 = 0;
    v23 = &v18;
    v24 = 4;
    v21 = a3;
    v26 = &v20;
    v28 = 0;
    v29 = &v21;
    v31 = 0;
    v20 = this & -(__int64)(this != 8);
    v27 = 8;
    v30 = 8;
    TlgWrite(v14, &unk_180145FA2, (LPCGUID)v14, v15, 5u, &pData);
  }
  v16 = v18;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return v16;
}
