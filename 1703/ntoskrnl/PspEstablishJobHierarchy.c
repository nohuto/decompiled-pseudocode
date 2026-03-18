/*
 * XREFs of PspEstablishJobHierarchy @ 0x14054BD84
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x14001C884 (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x14001C9F8 (KeInsertSchedulingGroup.c)
 *     PsGetProcessSessionId @ 0x140021FE0 (PsGetProcessSessionId.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400622A8 (IoSetDiskIoAttributionOnProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404372D4 (PspAddSchedulingGroupToJobChain.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlinkJobProcess @ 0x140547974 (PspUnlinkJobProcess.c)
 *     MmLinkJobProcess @ 0x14054C0D4 (MmLinkJobProcess.c)
 *     PspBindProcessSessionToJob @ 0x14054C2D8 (PspBindProcessSessionToJob.c)
 *     PspSetEffectiveJobLimits @ 0x14054CE94 (PspSetEffectiveJobLimits.c)
 *     PspIsSetJobIoAttribution @ 0x14054D180 (PspIsSetJobIoAttribution.c)
 *     PspEstablishDfssHierarchy @ 0x1406E14C8 (PspEstablishDfssHierarchy.c)
 *     PspSetEffectiveRateControlJob @ 0x1406E1AB0 (PspSetEffectiveRateControlJob.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(char *Object, __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // esi
  __int64 v9; // rcx
  int i; // ecx
  _QWORD *PoolWithTag; // r12
  unsigned __int64 v13; // r14
  unsigned __int16 *v14; // rcx
  __int64 v15; // rax
  PVOID v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  char v19; // al
  int j; // r8d
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        PspUnlinkJobProcess(a3, a2);
        MmLinkJobProcess(Object, a2);
        ObfReferenceObject(Object);
        ObfDereferenceObject((PVOID)a3);
        v24 = *((_QWORD *)Object + 167);
        if ( !*((_DWORD *)Object + 333) )
        {
          if ( !v24 )
            goto LABEL_83;
          v24 = *(_QWORD *)(v24 + 1336);
        }
        IoSetDiskIoAttributionOnProcess(v24, a2);
        goto LABEL_83;
      }
      if ( a4 == 4 )
        goto LABEL_13;
      if ( a4 != 5 )
      {
        if ( a4 != 6 )
        {
          v8 = -1073741811;
          goto LABEL_6;
        }
LABEL_13:
        if ( (unsigned int)*(unsigned __int8 *)(a3 + 874) + 1 > 0x64 )
          return 3221225659LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( (unsigned int)(i - 1) > 1
            && (*((_DWORD *)Object + 326) & 0x2000000) != 0
            && (*(_DWORD *)(a3 + 1304) & 0x2000000) != 0 )
          {
            return 3221225659LL;
          }
        }
        if ( (*(_DWORD *)(a3 + 1332) || (unsigned __int8)PspIsSetJobIoAttribution(a3))
          && (*((_DWORD *)Object + 333) || (unsigned __int8)PspIsSetJobIoAttribution((__int64)Object)) )
        {
          return 3221225659LL;
        }
        PoolWithTag = 0LL;
        v13 = *(_QWORD *)(a3 + 1104) + 1LL;
        if ( v13 > 2 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v13 - 16, 0x624A7350u);
          if ( !PoolWithTag )
            return 3221225626LL;
        }
        if ( a4 != 4 || (v8 = PspBindProcessSessionToJob(Object, a2), v8 >= 0) )
        {
          v14 = (unsigned __int16 *)*((_QWORD *)Object + 127);
          if ( !v14 )
          {
            v15 = *(_QWORD *)(a3 + 1016);
            if ( v15 )
              *((_QWORD *)Object + 127) = v15;
            goto LABEL_25;
          }
          KeRemoveSchedulingGroup(v14);
          if ( (*(_DWORD *)(a3 + 1304) & 0x20) != 0 || (v8 = PspAddSchedulingGroupToJobChain(a3, 0LL), v8 >= 0) )
          {
            KeInsertSchedulingGroup(
              *((_QWORD *)Object + 126) + 128LL,
              *(_QWORD *)(*((_QWORD *)Object + 126) + 128LL),
              *(_QWORD *)(a3 + 1008) + 128LL);
LABEL_25:
            v16 = Object;
            if ( a4 != 4 )
              v16 = (PVOID)a3;
            ObfReferenceObject(v16);
            v17 = *(_QWORD **)(a3 + 1064);
            v18 = Object + 1040;
            if ( *v17 != a3 + 1056 )
              __fastfail(3u);
            *v18 = a3 + 1056;
            *((_QWORD *)Object + 131) = v17;
            *v17 = v18;
            *(_QWORD *)(a3 + 1064) = v18;
            *((_QWORD *)Object + 134) = a3;
            *((_QWORD *)Object + 135) = *(_QWORD *)(a3 + 1080);
            v19 = *(_BYTE *)(a3 + 874) + 1;
            *((_QWORD *)Object + 138) = v13;
            Object[874] = v19;
            if ( v13 > 2 )
            {
              if ( v13 > 3 )
              {
                v23 = *(_QWORD *)(a3 + 1104) - 2LL;
                if ( *(_QWORD *)(a3 + 1104) != 2LL )
                {
                  do
                  {
                    PoolWithTag[v23] = *(_QWORD *)(*(_QWORD *)(a3 + 1112) + 8 * v23 - 8);
                    --v23;
                  }
                  while ( v23 );
                }
              }
              *PoolWithTag = *(_QWORD *)(a3 + 1072);
              *((_QWORD *)Object + 139) = PoolWithTag;
              PoolWithTag = 0LL;
            }
            if ( a4 == 4 )
            {
              PspUnlinkJobProcess(a3, a2);
              MmLinkJobProcess(Object, a2);
            }
            PspSetEffectiveJobLimits(Object, 0LL);
            *((_DWORD *)Object + 214) += *(_DWORD *)(a3 + 856);
            *((_DWORD *)Object + 216) += *(_DWORD *)(a3 + 864);
            *((_DWORD *)Object + 215) += *(_DWORD *)(a3 + 860);
            *((_DWORD *)Object + 217) += *(_DWORD *)(a3 + 868);
            *((_QWORD *)Object + 193) = *(_QWORD *)(a3 + 1544);
            if ( (*(_DWORD *)(*((_QWORD *)Object + 134) + 1304LL) & 0x40000) != 0 )
              _interlockedbittestandset((volatile signed __int32 *)Object + 326, 0x12u);
            if ( (*((_DWORD *)Object + 326) & 0x1000) == 0 && (*(_DWORD *)(a3 + 1304) & 0x1000) != 0 )
              _interlockedbittestandset((volatile signed __int32 *)Object + 326, 0xCu);
            if ( (*(_DWORD *)(*((_QWORD *)Object + 134) + 1304LL) & 0x1000000) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 326, 0x1000000u);
              if ( (*(_DWORD *)(*((_QWORD *)Object + 134) + 1304LL) & 0x800000) != 0 )
                _InterlockedOr((volatile signed __int32 *)Object + 326, 0x800000u);
            }
            for ( j = 0; j < 3; ++j )
            {
              if ( (unsigned int)(j - 1) > 1 && *(_QWORD *)(a3 + 832) )
                PspSetEffectiveRateControlJob(Object);
            }
            v21 = *(_DWORD *)(a3 + 1332);
            if ( !v21 && (v22 = *(_QWORD *)(a3 + 1336)) != 0 || (v22 = a3 & -(__int64)(v21 != 0)) != 0 )
            {
              v25[1] = v22;
              v25[0] = 0LL;
              v25[2] = 1LL;
              PspEnumJobsAndProcessesInJobHierarchy(
                Object,
                (int)PspSetJobIoAttributionJobPreCallback,
                0,
                0,
                (__int64)v25,
                5);
            }
            else if ( *((_DWORD *)Object + 333) && a4 == 4 )
            {
              IoSetDiskIoAttributionOnProcess(*((_QWORD *)Object + 167), a2);
            }
            if ( a4 == 6 )
              _interlockedbittestandset((volatile signed __int32 *)Object + 327, 0);
            v8 = 0;
            goto LABEL_49;
          }
          KeInsertSchedulingGroup(
            *((_QWORD *)Object + 126) + 128LL,
            *(_QWORD *)(*((_QWORD *)Object + 126) + 128LL),
            0LL);
        }
LABEL_49:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
        goto LABEL_6;
      }
      _interlockedbittestandset((volatile signed __int32 *)Object + 327, 0);
    }
LABEL_83:
    v8 = 0;
    goto LABEL_6;
  }
  v8 = PspBindProcessSessionToJob(Object, a2);
  if ( v8 >= 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x73507350u);
    MmLinkJobProcess(Object, a2);
  }
  v9 = *((_QWORD *)Object + 167);
  if ( !*((_DWORD *)Object + 333) )
  {
    if ( !v9 )
      goto LABEL_6;
    v9 = *(_QWORD *)(v9 + 1336);
  }
  IoSetDiskIoAttributionOnProcess(v9, a2);
LABEL_6:
  if ( a2 && v8 >= 0 && PsCpuFairShareEnabled )
  {
    if ( (unsigned int)PsGetProcessSessionId(a2) )
      PspEstablishDfssHierarchy(Object, a2, a4);
  }
  return (unsigned int)v8;
}
