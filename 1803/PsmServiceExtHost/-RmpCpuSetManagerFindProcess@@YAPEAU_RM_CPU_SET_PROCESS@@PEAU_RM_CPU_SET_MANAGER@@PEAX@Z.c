/*
 * XREFs of ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x1800554F8
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005647C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     ?RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180055640 (-RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

struct _RM_CPU_SET_PROCESS *__fastcall RmpCpuSetManagerFindProcess(struct _RM_CPU_SET_MANAGER *a1, void *a2)
{
  __int64 v4; // rbp
  void *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // r8
  int v9; // r9d
  DWORD ProcessId; // [rsp+40h] [rbp+8h]

  ProcessId = GetProcessId(a2);
  v4 = HIBYTE(ProcessId)
     + 37 * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL)));
  v5 = (void *)GetProcessId(a2);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = -1LL << (*((_BYTE *)a1 + 76) & 0x1F);
    v8 = v7 & v4;
    if ( v6 )
      goto LABEL_5;
    v9 = *((_DWORD *)a1 + 19) >> 5;
    if ( !v9 )
      return 0LL;
    v6 = *((_QWORD *)a1 + 10)
       + 8LL
       * ((50653
         * ((unsigned __int8)((v7 & (unsigned __int64)v4) >> 32)
          + 37
          * ((((unsigned int)v7 & (unsigned int)v4) >> 24)
           + 37
           * ((unsigned __int8)(((unsigned int)v7 & (unsigned int)v4) >> 16)
            + 37 * ((unsigned __int8)((unsigned __int16)(v7 & v4) >> 8) + 37 * ((unsigned __int8)v8 + 11623883)))))) & (v9 - 1));
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v8 == (v7 & *(_QWORD *)(v6 + 8)) )
        goto LABEL_9;
    }
    v6 = 0LL;
LABEL_9:
    if ( !v6 || RmpCpuSetManagerFindProcessComparator((struct _RTL_HASH_ENTRY *)v6, v5) )
      return (struct _RM_CPU_SET_PROCESS *)v6;
  }
}
