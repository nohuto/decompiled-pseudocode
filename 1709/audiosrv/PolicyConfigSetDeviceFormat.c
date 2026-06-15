/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x180089AE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, const WCHAR *a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned __int16 v7; // ax
  void *v8; // r8
  const struct _TlgProvider_t *v9; // rdi
  int v10; // eax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+34h] [rbp-95h] BYREF
  __int64 v16; // [rsp+38h] [rbp-91h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-89h] BYREF
  GUID v18; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-49h] BYREF
  int *v21; // [rsp+90h] [rbp-39h]
  int v22; // [rsp+98h] [rbp-31h]
  int v23; // [rsp+9Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+A0h] [rbp-29h] BYREF
  _WORD *v25; // [rsp+B0h] [rbp-19h]
  int v26; // [rsp+B8h] [rbp-11h]
  int v27; // [rsp+BCh] [rbp-Dh]
  _WORD *v28; // [rsp+C0h] [rbp-9h]
  int v29; // [rsp+C8h] [rbp-1h]
  int v30; // [rsp+CCh] [rbp+3h]
  _WORD *v31; // [rsp+D0h] [rbp+7h]
  int v32; // [rsp+D8h] [rbp+Fh]
  int v33; // [rsp+DCh] [rbp+13h]
  GUID *v34; // [rsp+E0h] [rbp+17h]
  int v35; // [rsp+E8h] [rbp+1Fh]
  int v36; // [rsp+ECh] [rbp+23h]

  v16 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v16) >= 0 )
  {
    v18 = GUID_00000000_0000_0010_8000_00aa00389b71;
    if ( a4 )
      v7 = *a4;
    else
      v7 = 0;
    v18.Data1 = v7;
    InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      Context = qword_18014C2B8;
      qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v8);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 4u )
    {
      TlgCreateWsz(&pDesc, a2);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
      v23 = 0;
      v15 = v10;
      v22 = 4;
      v21 = &v15;
      TlgCreateWsz(&v24, L"WFEX");
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v28 = a4 + 2;
      v31 = a4 + 4;
      v34 = &v18;
      v25 = a4 + 1;
      v26 = 2;
      v29 = 4;
      v32 = 4;
      v35 = 16;
      TlgWrite(v9, &unk_18010F18B, v11, v12, 9u, &pData);
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, __int64, unsigned __int16 *))(*(_QWORD *)g_PolicyConfig
                                                                                                + 48LL))(
           g_PolicyConfig,
           a2,
           a3,
           a4);
}
