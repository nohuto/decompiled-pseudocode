/*
 * XREFs of ??$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801598C8
 * Callers:
 *     ?Hide@XamlLauncherState@@UEAAJXZ @ 0x180155CC0 (-Hide@XamlLauncherState@@UEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___::_ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___ @ 0x180158940 (wil--details--ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___--_ScopeExitFn__lambda_e82b.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall StartWindowTelemetry::HideCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
        int *a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  int v8; // [rsp+30h] [rbp-78h] BYREF
  int v9; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v11; // [rsp+60h] [rbp-48h]
  int v12; // [rsp+68h] [rbp-40h]
  int v13; // [rsp+6Ch] [rbp-3Ch]
  int *v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+7Ch] [rbp-2Ch]

  v4 = CommonStartTelemetryLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    LODWORD(v4) = 0;
    if ( (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = *a1;
      v13 = 0;
      v16 = 0;
      v8 = v6;
      v11 = &v8;
      v9 = *a2;
      v14 = &v9;
      v12 = 4;
      v15 = 4;
      LODWORD(v4) = TlgWrite(v5, &unk_180202D7A, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}
