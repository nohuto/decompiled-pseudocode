/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x140001DA0
 * Callers:
 *     sub_140001030 @ 0x140001030 (sub_140001030.c)
 * Callees:
 *     memset_0 @ 0x1400043A8 (memset_0.c)
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  int ProcessInformation; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v4[32]; // [rsp+38h] [rbp-30h] BYREF
  int v5; // [rsp+58h] [rbp-10h]

  byte_14000F9E0 = 1;
  qword_14000F9A0 = 0LL;
  *(_OWORD *)&g_dwmAppHost = 0LL;
  dword_14000F9A8 = 0;
  hWnd = 0LL;
  qword_14000F9C8 = (__int64)&CSettingsManager::`vftable';
  dword_14000F9F8 = 0;
  InitializeSRWLock(&SRWLock);
  *(_QWORD *)&uExitCode = 0LL;
  qword_14000FA00 = (__int64)&CDynamicSettingsManager::`vftable';
  word_14000FA18 = 0;
  ProcessInformation = 0;
  memset_0(v4, 0, 0x28uLL);
  qword_14000F9B8 = 0LL;
  qword_14000F9C0 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( NtQueryInformationProcess(CurrentProcess, ProcessBasicInformation, &ProcessInformation, 0x30u, 0LL) >= 0 )
    LODWORD(qword_14000F9A0) = v5;
  return (CDwmAppHost *)&g_dwmAppHost;
}
