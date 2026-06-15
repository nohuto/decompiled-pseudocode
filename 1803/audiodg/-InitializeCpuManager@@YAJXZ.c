/*
 * XREFs of ?InitializeCpuManager@@YAJXZ @ 0x1400013A4
 * Callers:
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014BA0 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140001548 (--$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140001674 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 InitializeCpuManager(void)
{
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF

  pcbData = 4;
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v2 = -1;
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, &v2, 4LL, 0LL);
  dword_140088158 = 50000;
  pcbData = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"CpuManagementThresholdHns",
    0x18u,
    0LL,
    &dword_140088158,
    &pcbData);
  pcbData = 8;
  g_UserConfiguredAudioReservedCpu = 0;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"CpuManagementAudioReservedCpuMask",
    0x48u,
    0LL,
    &qword_140088298,
    &pcbData);
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(&qword_140087FC0);
  return Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>(&qword_140087FC0);
}
