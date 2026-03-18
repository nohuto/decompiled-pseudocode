/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x140001DE0
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001000 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     memset_0 @ 0x140003D88 (memset_0.c)
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  _BYTE ProcessInformation[40]; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+58h] [rbp-10h]

  byte_14000E920 = 1;
  qword_14000E8E0 = 0LL;
  *(_OWORD *)&g_dwmAppHost = 0LL;
  dword_14000E8E8 = 0;
  hWnd = 0LL;
  qword_14000E908 = (__int64)&CSettingsManager::`vftable';
  dword_14000E938 = 0;
  InitializeSRWLock(&SRWLock);
  *(_QWORD *)&uExitCode = 0LL;
  qword_14000E940 = (__int64)&CDynamicSettingsManager::`vftable';
  word_14000E958 = 0;
  memset_0(ProcessInformation, 0, 0x30uLL);
  qword_14000E8F8 = 0LL;
  qword_14000E900 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( NtQueryInformationProcess(CurrentProcess, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
    LODWORD(qword_14000E8E0) = v4;
  return (CDwmAppHost *)&g_dwmAppHost;
}
