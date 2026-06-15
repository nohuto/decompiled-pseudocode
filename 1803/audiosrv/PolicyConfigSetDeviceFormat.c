/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x1800BFCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, const WCHAR *a2, __int64 a3, _WORD *a4)
{
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  const struct _TlgProvider_t *v12; // rbx
  int v13; // eax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  unsigned int v16; // ebx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  struct _TP_TIMER *pv[6]; // [rsp+40h] [rbp-C0h] BYREF
  GUID v21; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+C0h] [rbp-40h] BYREF
  _WORD *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+DCh] [rbp-24h]
  _WORD *v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  _WORD *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  GUID *v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+10Ch] [rbp+Ch]

  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v9, (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat");
  v19 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v19) >= 0 )
  {
    v21 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v11 = a4 ? *a4 : 0;
    v21.Data1 = v11;
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                       v10,
                                                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                         + 1);
    if ( *(_DWORD *)v12 > 4u )
    {
      TlgCreateWsz(&pDesc, a2);
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
      v26 = 0;
      v18 = v13;
      v25 = 4;
      v24 = &v18;
      TlgCreateWsz(&v27, L"WFEX");
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v31 = a4 + 2;
      v34 = a4 + 4;
      v37 = &v21;
      v28 = a4 + 1;
      v29 = 2;
      v32 = 4;
      v35 = 4;
      v38 = 16;
      TlgWrite(v12, &unk_180145615, v14, v15, 9u, &pData);
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v16 = (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, __int64, _WORD *))(*(_QWORD *)g_PolicyConfig + 48LL))(
          g_PolicyConfig,
          a2,
          a3,
          a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v16;
}
