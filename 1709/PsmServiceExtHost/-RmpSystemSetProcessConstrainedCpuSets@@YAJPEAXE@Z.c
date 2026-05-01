/*
 * XREFs of ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x1800413A0
 * Callers:
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800390B0 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800398A0 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemSetProcessConstrainedCpuSets(HANDLE Process, char a2)
{
  unsigned int v3; // r9d
  DWORD ProcessId; // eax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  char ProcessInformation[8]; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-11h] BYREF
  DWORD v10; // [rsp+3Ch] [rbp-Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  DWORD *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  char *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  ProcessInformation[0] = a2;
  v3 = NtSetInformationProcess(Process, (PROCESSINFOCLASS)80, ProcessInformation, 1u);
  v9 = v3;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v14 = 0;
    v12 = &v9;
    v13 = 4;
    ProcessId = GetProcessId(Process);
    v17 = 0;
    v20 = 0;
    v10 = ProcessId;
    v15 = &v10;
    v18 = ProcessInformation;
    v16 = 4;
    v19 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A94B, v5, v6, 5u, &pData);
    return v9;
  }
  return v3;
}
