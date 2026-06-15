/*
 * XREFs of asm_AudioServerInitializeStream @ 0x1800D77B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        unsigned int a3,
        struct tWAVEFORMATEX *a4,
        void **a5)
{
  struct _TP_TIMER **v9; // rax
  __int64 v10; // r8
  const unsigned __int16 *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  struct IProcessSubmixProxy *v15; // [rsp+48h] [rbp-130h]
  unsigned __int16 *v16; // [rsp+60h] [rbp-118h] BYREF
  struct _TP_TIMER *pv[6]; // [rsp+68h] [rbp-110h] BYREF
  struct _GUID v18; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v19[128]; // [rsp+B0h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v9 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v9[1], v10, (struct _TP_TIMER *)L"asm_AudioServerInitializeStream");
  v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 152LL))(*a2);
  memset_0(v19, 0, 0x78uLL);
  v15 = *a2;
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  v12 = AudioServerInitialize_Internal(
          a1,
          v11,
          AUDCLNT_SHAREMODE_SHARED,
          a3,
          a4,
          &v18,
          1u,
          (struct VadServerSettings *)v19,
          &v16,
          v15,
          a5);
  v13 = v12;
  if ( v12 >= 0 )
    v13 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x147,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v13;
}
