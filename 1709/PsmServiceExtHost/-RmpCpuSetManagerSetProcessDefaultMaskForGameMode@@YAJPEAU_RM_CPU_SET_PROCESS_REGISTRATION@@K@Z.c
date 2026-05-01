/*
 * XREFs of ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180037E84
 * Callers:
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800390B0 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180024208 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpCpuSetManagerSetProcessDefaultMaskForGameMode(
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a1,
        char a2)
{
  _OWORD *v2; // rax
  NTSTATUS result; // eax
  _QWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  _OWORD ProcessInformation[10]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = (_OWORD *)*((_QWORD *)a1 + 7);
  if ( !v2 )
    return -1073741738;
  ProcessInformation[0] = v2[6];
  ProcessInformation[1] = v2[7];
  ProcessInformation[2] = v2[8];
  ProcessInformation[3] = v2[9];
  ProcessInformation[4] = v2[10];
  ProcessInformation[5] = v2[11];
  ProcessInformation[6] = v2[12];
  ProcessInformation[7] = v2[13];
  ProcessInformation[8] = v2[14];
  ProcessInformation[9] = v2[15];
  if ( (a2 & 1) != 0 )
  {
    v5 = ProcessInformation;
    v6 = 20LL;
    v7 = **((_QWORD **)a1 + 5) - (_QWORD)ProcessInformation;
    do
    {
      *v5 |= *(_QWORD *)((char *)v5 + v7 + 248);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  result = RmpSystemSetProcessDefaultCpuSets(*(HANDLE *)(*((_QWORD *)a1 + 6) + 16LL), ProcessInformation);
  if ( result >= 0 )
    return 0;
  return result;
}
