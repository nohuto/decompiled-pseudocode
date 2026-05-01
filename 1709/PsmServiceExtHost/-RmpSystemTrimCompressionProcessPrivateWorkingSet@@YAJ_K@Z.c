/*
 * XREFs of ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x18004173C
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003F06C (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemTrimCompressionProcessPrivateWorkingSet(__int64 a1)
{
  const GUID *v1; // r9
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  int v5; // [rsp+30h] [rbp-39h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  _DWORD SystemInformation[2]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp-21h]
  int v9; // [rsp+50h] [rbp-19h]
  _QWORD v10[3]; // [rsp+58h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+7h] BYREF
  int *v12; // [rsp+90h] [rbp+27h]
  int v13; // [rsp+98h] [rbp+2Fh]
  int v14; // [rsp+9Ch] [rbp+33h]
  __int64 *v15; // [rsp+A0h] [rbp+37h]
  int v16; // [rsp+A8h] [rbp+3Fh]
  int v17; // [rsp+ACh] [rbp+43h]

  v6 = a1;
  SystemInformation[0] = 1;
  SystemInformation[1] = 21;
  v10[0] = 1LL;
  v9 = 16;
  v10[1] = (unsigned __int64)(a1 + 4095) >> 12;
  v8 = v10;
  LODWORD(v1) = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v5 = (int)v1;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v5;
    v15 = &v6;
    v13 = 4;
    v16 = 8;
    TlgWrite(v2, &unk_18005A7BD, v3, v1, 4u, &pData);
    LODWORD(v1) = v5;
  }
  return (unsigned int)v1;
}
