/*
 * XREFs of ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800241E8
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180023CB4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x180037158 (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerGetSystemReserveTarget(struct _RM_CPU_SET_MANAGER *a1)
{
  __int64 result; // rax

  result = *((_DWORD *)a1 + 109) >> 2;
  if ( !(_DWORD)result )
    return 1LL;
  if ( (unsigned int)result > 4 )
    return 4LL;
  return result;
}
