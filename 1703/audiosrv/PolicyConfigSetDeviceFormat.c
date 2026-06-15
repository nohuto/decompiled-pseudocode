/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x18009F810
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, const WCHAR *a2, __int64 a3, _WORD *a4)
{
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  const struct _TlgProvider_t *v9; // rdi
  int v10; // eax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int v14; // [rsp+30h] [rbp-99h] BYREF
  __int64 v15; // [rsp+38h] [rbp-91h] BYREF
  GUID v16; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-59h] BYREF
  int *v19; // [rsp+80h] [rbp-49h]
  int v20; // [rsp+88h] [rbp-41h]
  int v21; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+90h] [rbp-39h] BYREF
  _WORD *v23; // [rsp+A0h] [rbp-29h]
  int v24; // [rsp+A8h] [rbp-21h]
  int v25; // [rsp+ACh] [rbp-1Dh]
  _WORD *v26; // [rsp+B0h] [rbp-19h]
  int v27; // [rsp+B8h] [rbp-11h]
  int v28; // [rsp+BCh] [rbp-Dh]
  _WORD *v29; // [rsp+C0h] [rbp-9h]
  int v30; // [rsp+C8h] [rbp-1h]
  int v31; // [rsp+CCh] [rbp+3h]
  GUID *v32; // [rsp+D0h] [rbp+7h]
  int v33; // [rsp+D8h] [rbp+Fh]
  int v34; // [rsp+DCh] [rbp+13h]

  v15 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v15) >= 0 )
  {
    v16 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v8 = a4 ? *a4 : 0;
    v16.Data1 = v8;
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                      v7,
                                                      lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v9 > 4u )
    {
      TlgCreateWsz(&pDesc, a2);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
      v21 = 0;
      v14 = v10;
      v20 = 4;
      v19 = &v14;
      TlgCreateWsz(&v22, L"WFEX");
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v26 = a4 + 2;
      v29 = a4 + 4;
      v32 = &v16;
      v23 = a4 + 1;
      v24 = 2;
      v27 = 4;
      v30 = 4;
      v33 = 16;
      TlgWrite(v9, &unk_1800F9121, v11, v12, 9u, &pData);
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, __int64, _WORD *))(*(_QWORD *)g_PolicyConfig + 48LL))(
           g_PolicyConfig,
           a2,
           a3,
           a4);
}
