/*
 * XREFs of ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x18000E6C0
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800073E8 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E17C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x18000E6EC (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 */

__int64 __fastcall RmpPartitionAddRemoveHost(struct _RM_PARTITION *a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  *((_DWORD *)a1 + 48) += a2;
  result = RmpPolicyResizeScratchBuffers((struct _RM_PARTITION *)((char *)a1 + 144), *((_DWORD *)a1 + 48), a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
