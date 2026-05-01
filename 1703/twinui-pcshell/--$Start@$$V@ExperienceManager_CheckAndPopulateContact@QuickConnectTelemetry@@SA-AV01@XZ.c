/*
 * XREFs of ??$Start@$$V@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@SA?AV01@XZ @ 0x1800B03B8
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800ADB24 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1800AB45C (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 *     memset @ 0x180194E50 (memset.c)
 */

QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *__fastcall QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Start<>(
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *this)
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
  *((_QWORD *)v1 + 6) = "ExperienceManager_CheckAndPopulateContact";
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 9) = 1LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  memset(v3, 0, 0x90uLL);
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::StartActivity(this);
  return this;
}
