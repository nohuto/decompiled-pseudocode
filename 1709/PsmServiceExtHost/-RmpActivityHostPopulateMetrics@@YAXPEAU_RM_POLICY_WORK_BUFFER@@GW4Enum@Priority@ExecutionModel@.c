/*
 * XREFs of ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180005354
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18000475C (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180004834 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x1800050C4 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180009340 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18001F8EC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x180036124 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 */

void __fastcall RmpActivityHostPopulateMetrics(__int64 a1, __int16 a2, unsigned int a3)
{
  __int16 v4; // r14
  struct _RM_ACTIVITY_HOST_METRICS *v5; // r15
  int v6; // r8d
  unsigned int v7; // esi
  unsigned int v8; // ebp
  unsigned __int8 v9; // dl
  __int16 v10; // r12
  __int64 v11; // rax
  char *v12; // rbx
  __int16 v13; // r13
  struct _RM_ACTIVITY_HOST *v14; // rcx
  int Commit; // eax
  unsigned int v16; // esi
  char *v17; // rbx
  unsigned __int64 v18; // rax
  struct _RM_ACTIVITY_HOST *v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF
  __int16 v22; // [rsp+88h] [rbp+10h]
  unsigned int v23; // [rsp+90h] [rbp+18h]
  __int16 v24; // [rsp+98h] [rbp+20h]

  v23 = a3;
  v22 = a2;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v5 = *(struct _RM_ACTIVITY_HOST_METRICS **)a1;
    LOWORD(v6) = 1;
    v7 = 0;
    v8 = 0;
    v9 = (a2 & 2) != 0;
    v10 = v4 & 1;
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    LOBYTE(v21) = v9;
    v24 = v10;
    v20 = *(_QWORD *)(v11 + 40);
    do
    {
      v12 = (char *)v5 + 64 * (unsigned __int64)v8;
      v13 = *((_WORD *)v12 + 31);
      v14 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v12 + 6);
      v19 = v14;
      if ( (!_bittest16(&v13, v6) & v9) != 0 )
      {
        Commit = RmpActivityHostQueryCommit(
                   v14,
                   (unsigned __int64 *)v12 + 1,
                   0LL,
                   (unsigned __int64 *)v5 + 8 * (unsigned __int64)v8);
        v14 = v19;
        LOBYTE(v6) = 1;
        if ( Commit >= 0 )
          *((_WORD *)v12 + 31) |= 2u;
      }
      if ( !v10 )
        goto LABEL_27;
      if ( ((unsigned __int8)v13 & (unsigned __int8)v6) == 0 )
      {
        if ( (int)RmpActivityHostQueryEffectivePriority(
                    v14,
                    *(_QWORD *)v12,
                    (enum ExecutionModel::Priority::Enum *)(v12 + 56)) >= 0 )
          *((_WORD *)v12 + 31) |= 1u;
        else
          *((_DWORD *)v12 + 14) = 101;
        v10 = v24;
      }
      if ( (int)RmpEmPriorityCompare(*((unsigned int *)v12 + 14), v23) < 0 )
      {
LABEL_27:
        if ( (v4 & 0x40) != 0
          && (v13 & 0x40) == 0
          && (int)RmpActivityHostQueryOfferedMemory(v19, (unsigned __int64 *)v12 + 5) >= 0 )
        {
          *((_WORD *)v12 + 31) |= 0x40u;
        }
        if ( v8 != v7 )
        {
          v18 = (unsigned __int64)v7 << 6;
          *(_OWORD *)((char *)v5 + v18) = *(_OWORD *)v12;
          *(_OWORD *)((char *)v5 + v18 + 16) = *((_OWORD *)v12 + 1);
          *(_OWORD *)((char *)v5 + v18 + 32) = *((_OWORD *)v12 + 2);
          *(_OWORD *)((char *)v5 + v18 + 48) = *((_OWORD *)v12 + 3);
        }
        v6 = 1;
        ++v7;
      }
      v9 = v21;
      v8 += v6;
    }
    while ( v8 < *(_DWORD *)(a1 + 36) );
    *(_DWORD *)(a1 + 36) = v7;
    if ( (v4 & 0x2C) != 0 )
      RmpSystemQueryMemUtilMetricsForHosts(v5, v7, v4 & 0x2C);
    v16 = 0;
    if ( *(_DWORD *)(a1 + 36) )
    {
      do
      {
        v17 = (char *)v5 + 64 * (unsigned __int64)v16;
        if ( (v4 & 0x10) != 0
          && (v17[62] & 0x10) == 0
          && (v17[62] & 8) != 0
          && (int)RmpSystemIsActivityHostTooLargeForSwap(
                    (struct _RM_ACTIVITY_HOST_METRICS *)((char *)v5 + 64 * (unsigned __int64)v16),
                    *(_DWORD *)(v20 + 528),
                    &v21) >= 0 )
        {
          *((_WORD *)v17 + 31) |= 0x10u;
          if ( v21 )
            *((_WORD *)v17 + 30) |= 1u;
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 36) );
      v4 = v22;
    }
  }
  *(_WORD *)(a1 + 44) |= v4;
}
