/*
 * XREFs of ??$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEBKAEAW4InternalState@XamlLauncherState@@@Z @ 0x18018EC9C
 * Callers:
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x18018C7A8 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18017CBDC (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall StartWindowTelemetry::CortanaCancelledDueToTimerCutoff<unsigned long const &,enum XamlLauncherState::InternalState &>(
        __int64 a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  int v8; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v4 = CommonStartTelemetryLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    LODWORD(v4) = 0;
    if ( (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = *a2;
      v12 = 0;
      v15 = 0;
      v8 = v6;
      v13 = &v8;
      v10 = a1;
      v11 = 4;
      v14 = 4;
      LODWORD(v4) = TlgWrite(v5, &unk_1802660FA, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}
