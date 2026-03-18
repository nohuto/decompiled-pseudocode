/*
 * XREFs of ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800D1874
 * Callers:
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800D1614 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800D1664 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014C448 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D191C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall CAnimationTracking::GuidToString(const struct _GUID *a1, unsigned __int16 *a2)
{
  int Data2; // [rsp+20h] [rbp-68h]
  int Data3; // [rsp+28h] [rbp-60h]
  int v4; // [rsp+30h] [rbp-58h]
  int v5; // [rsp+38h] [rbp-50h]
  int v6; // [rsp+40h] [rbp-48h]
  int v7; // [rsp+48h] [rbp-40h]
  int v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]

  v11 = a1->Data4[7];
  v10 = a1->Data4[6];
  v9 = a1->Data4[5];
  v8 = a1->Data4[4];
  v7 = a1->Data4[3];
  v6 = a1->Data4[2];
  v5 = a1->Data4[1];
  v4 = a1->Data4[0];
  Data3 = a1->Data3;
  Data2 = a1->Data2;
  StringCbPrintfW(
    a2,
    0x100uLL,
    L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    a1->Data1,
    Data2,
    Data3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}
