/*
 * XREFs of ?WelcomeScreenShown@WelcomeScreenExperienceManagerTelemetry@@SAXXZ @ 0x1800B2664
 * Callers:
 *     ?OnViewUncloaked@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B2E20 (-OnViewUncloaked@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B0FD0 (-Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void WelcomeScreenExperienceManagerTelemetry::WelcomeScreenShown(void)
{
  const struct _TlgProvider_t *v0; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = WelcomeScreenExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x400000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_1801FBD43, 0LL, 0LL, 2u, &pData);
  }
}
