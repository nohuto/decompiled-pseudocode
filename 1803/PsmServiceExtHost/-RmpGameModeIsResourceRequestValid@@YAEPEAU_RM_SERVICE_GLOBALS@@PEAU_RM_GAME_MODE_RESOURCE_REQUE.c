/*
 * XREFs of ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180057A0C
 * Callers:
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x1800507C0 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180050A90 (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z @ 0x180055D64 (-RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z.c)
 */

bool __fastcall RmpGameModeIsResourceRequestValid(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned __int8 v9; // al
  bool result; // al

  result = *(_DWORD *)a2 == 4
        && (v6 = *((_DWORD *)a2 + 8) & 5, v6 != 4)
        && (v6 != 1
         || !*((_DWORD *)a2 + 1)
         && !*((_QWORD *)a2 + 1)
         && *((_DWORD *)a2 + 4) == 10
         && *((_DWORD *)a2 + 5) == 50
         && *((_DWORD *)a2 + 6) == 30
         && (*((_BYTE *)a2 + 32) & 8) == 0)
        && (v7 = RtlNumberOfSetBitsUlongPtr(*((_QWORD *)a2 + 1), a2, a3, a4), v8 = *((_DWORD *)a2 + 1), v8 >= v7)
        && v8 <= 0x40
        && RmpCpuSetManagerIsGameModeRequestSatisfiable(
             (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704),
             (*((_DWORD *)a2 + 7) & 0x40) != 0,
             v8,
             *((_QWORD *)a2 + 1))
        && ((v9 = *((_BYTE *)a2 + 36)) == 0 || v9 > 1u && (v9 <= 3u || v9 == 6))
        && (unsigned int)(*((_DWORD *)a2 + 4) - 2) <= 8
        && (unsigned int)(*((_DWORD *)a2 + 5) + *((_DWORD *)a2 + 6)) <= 0x64
        && (*((_BYTE *)a2 + 28) & 0x18) != 24;
  return result;
}
