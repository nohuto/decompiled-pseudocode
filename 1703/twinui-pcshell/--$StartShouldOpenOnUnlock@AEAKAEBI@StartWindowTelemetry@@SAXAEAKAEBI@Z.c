/*
 * XREFs of ??$StartShouldOpenOnUnlock@AEAKAEBI@StartWindowTelemetry@@SAXAEAKAEBI@Z @ 0x18014F5D4
 * Callers:
 *     ?ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ @ 0x18014B308 (-ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall StartWindowTelemetry::StartShouldOpenOnUnlock<unsigned long &,unsigned int const &>(int *a1, __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  int v8; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v10; // [rsp+60h] [rbp-48h]
  int v11; // [rsp+68h] [rbp-40h]
  int v12; // [rsp+6Ch] [rbp-3Ch]
  __int64 v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+7Ch] [rbp-2Ch]

  v4 = CommonStartTelemetryLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    LODWORD(v4) = 0;
    if ( (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = *a1;
      v12 = 0;
      v15 = 0;
      v8 = v6;
      v10 = &v8;
      v11 = 4;
      v13 = a2;
      v14 = 4;
      LODWORD(v4) = TlgWrite(v5, &unk_180201AA5, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}
