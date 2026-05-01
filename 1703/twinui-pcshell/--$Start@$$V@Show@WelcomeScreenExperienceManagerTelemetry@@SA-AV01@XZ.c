/*
 * XREFs of ??$Start@$$V@Show@WelcomeScreenExperienceManagerTelemetry@@SA?AV01@XZ @ 0x1800B4B8C
 * Callers:
 *     ?Show@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B3280 (-Show@CWelcomeScreenExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?StartActivity@Show@WelcomeScreenExperienceManagerTelemetry@@QEAAXXZ @ 0x1800B2530 (-StartActivity@Show@WelcomeScreenExperienceManagerTelemetry@@QEAAXXZ.c)
 *     memset @ 0x180194E50 (memset.c)
 */

WelcomeScreenExperienceManagerTelemetry::Show *__fastcall WelcomeScreenExperienceManagerTelemetry::Show::Start<>(
        WelcomeScreenExperienceManagerTelemetry::Show *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  *((_QWORD *)this + 2) = this;
  v1 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  v3 = (_QWORD *)((char *)this + 136);
  *(_DWORD *)v1 = 0;
  v1[4] = 0;
  v1[64] = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_QWORD *)v1 + 6) = "Show";
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 9) = 1LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  memset(v3, 0, 0x90uLL);
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &WelcomeScreenExperienceManagerTelemetry::Show::`vftable';
  WelcomeScreenExperienceManagerTelemetry::Show::StartActivity(this);
  return this;
}
