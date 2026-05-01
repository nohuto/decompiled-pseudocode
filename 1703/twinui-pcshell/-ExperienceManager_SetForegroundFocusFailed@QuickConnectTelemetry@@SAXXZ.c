/*
 * XREFs of ?ExperienceManager_SetForegroundFocusFailed@QuickConnectTelemetry@@SAXXZ @ 0x1800AB678
 * Callers:
 *     ?OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AD280 (-OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A810C (-Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void QuickConnectTelemetry::ExperienceManager_SetForegroundFocusFailed(void)
{
  const struct _TlgProvider_t *v0; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x200000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_1801FA6FB, 0LL, 0LL, 2u, &pData);
  }
}
