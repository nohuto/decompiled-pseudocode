/*
 * XREFs of ??$Start@$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x18009E6F8
 * Callers:
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800C3650 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18009A950 (-StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     memset @ 0x180194E50 (memset.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::Start<>(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *this)
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
  *((_QWORD *)v1 + 6) = "CortanaExperienceManager_ShowWithStart";
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 9) = 1LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  memset(v3, 0, 0x90uLL);
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StartActivity(this);
  return this;
}
