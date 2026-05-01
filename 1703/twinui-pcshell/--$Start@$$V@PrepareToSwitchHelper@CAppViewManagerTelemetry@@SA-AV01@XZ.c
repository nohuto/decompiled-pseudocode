/*
 * XREFs of ??$Start@$$V@PrepareToSwitchHelper@CAppViewManagerTelemetry@@SA?AV01@XZ @ 0x1800446AC
 * Callers:
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180040B88 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 * Callees:
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180046CBC (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     memset @ 0x180194E50 (memset.c)
 */

CAppViewManagerTelemetry::PrepareToSwitchHelper *__fastcall CAppViewManagerTelemetry::PrepareToSwitchHelper::Start<>(
        CAppViewManagerTelemetry::PrepareToSwitchHelper *this)
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
  *((_QWORD *)v1 + 6) = "PrepareToSwitchHelper";
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 9) = 1LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  memset(v3, 0, 0x90uLL);
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchHelper::StartActivity(this);
  return this;
}
