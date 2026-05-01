/*
 * XREFs of ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011CCC (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800154F0 (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003CAC0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DBA8 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003DE40 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18003EBC0 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015900 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003FDC4 (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckQueueWork(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  char *v2; // rbp
  DWORD v3; // edi
  _BYTE *Value; // rbx
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  BOOL v11; // ebx
  DWORD v12; // r14d
  __int64 v13; // r15
  _BYTE *v14; // rsi
  int v15; // edx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r8d
  BOOL v19; // esi
  _BYTE *v20; // rax
  bool v21; // zf
  unsigned int v22; // ebx
  _BYTE *v23; // rax
  int v25; // eax

  v2 = (char *)a1 + 64;
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *(_QWORD *)Value |= 2uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v2);
  *((_DWORD *)v2 + 2) = GetCurrentThreadId();
  v7 = 1;
  if ( *((int *)a1 + 5) < 0 )
  {
    v11 = 0;
  }
  else
  {
    v8 = *((_DWORD *)a1 + 253);
    v9 = RmpPolicyComputeDesiredState(a1);
    if ( v8 != v9 )
      a2 |= 2u;
    v10 = *((_DWORD *)a1 + 254);
    v11 = (((unsigned __int8)v8 ^ (unsigned __int8)v9) & 0x40) != 0
       || (v10 & 0x40) != 0
       || (v9 & 8) == 0 && (((unsigned __int8)v8 | (unsigned __int8)v10) & 8) != 0
       || (v9 & 0x10) == 0 && (((unsigned __int8)v8 | (unsigned __int8)v10) & 0x10) != 0;
  }
  v12 = HampLockTrackerId;
  v13 = *((_QWORD *)v2 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v14 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      __int2c();
    *(_QWORD *)v14 |= 4uLL;
    ++v14[10];
  }
  RtlAcquireSRWLockExclusive(v13 + 8);
  *(_DWORD *)(v13 + 16) = GetCurrentThreadId();
  v15 = 0;
  v16 = *((_QWORD *)v2 + 80);
  if ( (v2[708] & 1) != 0 )
  {
    if ( *(_QWORD *)(v16 + 96) >= *((_QWORD *)v2 + 75) )
    {
      if ( (*((_DWORD *)v2 + 157) & 0x4000) != 0 )
      {
        if ( *(_DWORD *)(v16 + 84) )
          v15 = *((_DWORD *)v2 + 237) & 0x180;
      }
      else
      {
        v15 = 384;
      }
    }
    else
    {
      v15 = *((_DWORD *)v2 + 237) & 0x180;
    }
  }
  v17 = *((_DWORD *)v2 + 237) & 0x180;
  v19 = 1;
  if ( v15 == v17 && (a2 & 2) == 0 )
  {
    v18 = *((_DWORD *)v2 + 157) & 3;
    if ( !v18 || v18 == 1 && (v2[952] < 0 || v2[948] >= 0) )
      v19 = 0;
  }
  if ( ((v15 & 0x80u) != 0 || ((v2[952] & 0x80 | v17) & 0x80u) == 0) && ((a2 & 1) == 0 || (v2[628] & 3) == 0) )
    v7 = 0;
  *(_DWORD *)(v13 + 16) = 0;
  RtlReleaseSRWLockExclusive(v13 + 8);
  if ( HampLockTrackerId != -1 )
  {
    v20 = TlsGetValue(HampLockTrackerId);
    if ( (*v20 & 4) == 0 )
      __int2c();
    v21 = v20[10]-- == 1;
    if ( v21 )
      *(_QWORD *)v20 &= ~4uLL;
  }
  if ( v7 )
  {
    if ( !v19 )
      goto LABEL_33;
    if ( (v2[952] & 0x27) != 0 )
      RmHamEnforcementEmptySignalAbort((struct _RM_HAM_ACTIVITY_HOST *)v2);
  }
  if ( v19 )
  {
    v25 = *((_DWORD *)v2 + 157);
    if ( (v25 & 0x400) == 0 )
    {
      *((_DWORD *)v2 + 157) = v25 | 0x400;
      RmpObjectAddRef(a1);
      TpPostWork(*((_QWORD *)v2 + 77));
    }
  }
LABEL_33:
  v22 = v7 | v11;
  if ( HampLockTrackerId != -1 )
  {
    v23 = TlsGetValue(HampLockTrackerId);
    if ( (*v23 & 2) == 0 )
      __int2c();
    v21 = v23[9]-- == 1;
    if ( v21 )
      *(_QWORD *)v23 &= ~2uLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
  return v22;
}
