/*
 * XREFs of ??$Start@AEAW4PeopleFlyoutAction@@@HidePeopleBarFlyout@CommonPeopleTelemetry@@SA?AV01@AEAW4PeopleFlyoutAction@@@Z @ 0x1800A3E38
 * Callers:
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1800A1D40 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x1800A14F0 (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall CommonPeopleTelemetry::HidePeopleBarFlyout::Start<enum PeopleFlyoutAction &>(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rcx

  *(_QWORD *)(a1 + 16) = a1;
  v2 = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  v5 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(v2 + 4) = 0;
  *(_BYTE *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = "HidePeopleBarFlyout";
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 72) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset(v5, 0, 0x90uLL);
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)a1 = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
  CommonPeopleTelemetry::HidePeopleBarFlyout::StartActivity(a1, *a2);
  return a1;
}
