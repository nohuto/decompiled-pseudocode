/*
 * XREFs of ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18003BAE4
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033DE0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B8A4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18002D574 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18002E010 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18003BD60 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18003BF00 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x18003BF20 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x18003BF94 (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x18003C008 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18003F3EC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180055CB0 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180056990 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerResetValidMask(struct _RM_CPU_SET_MANAGER *a1)
{
  int CpuSetInformation; // edi
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // r8
  unsigned int v6; // r10d
  __int64 i; // r9
  int v8; // eax
  unsigned int v9; // eax
  signed __int64 v10; // rax
  char *v11; // r15
  unsigned int v12; // r12d
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  HANDLE CurrentProcess; // rax
  HANDLE v17; // rax
  unsigned int SystemReserveTarget; // esi
  const struct _TlgProvider_t *v19; // rcx
  __int64 v21; // r13
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rcx
  struct _RM_CPU_SET_ALLOCATION *Next; // rax
  char *v26; // rdi
  unsigned int v27; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v29[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v30[5]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  char *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  _QWORD v36[20]; // [rsp+B0h] [rbp-50h] BYREF

  P = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation((struct _SYSTEM_CPU_SET_INFORMATION **)&P, v29);
  if ( CpuSetInformation >= 0 )
  {
    memset_0(v36, 0, sizeof(v36));
    v6 = v29[0];
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(*v5 + i) )
    {
      v5 = (char *)P + (unsigned int)i;
      if ( !v5[1] )
      {
        v8 = v5[2];
        if ( v8 != *((_DWORD *)a1 + 108) )
        {
          v9 = v8 - 256;
          v3 = (unsigned __int64)v9 >> 16;
          v4 = v36[v3] | (1LL << v9);
          v36[v3] = v4;
        }
      }
    }
    LOBYTE(v4) = 0;
    v10 = (char *)v36 - (char *)a1;
    v27 = v4;
    v11 = (char *)a1 + 88;
    *(_QWORD *)v29 = (char *)v36 - (char *)a1;
    v12 = 0;
    v13 = (__int64 *)((char *)a1 + 88);
    do
    {
      v14 = *(__int64 *)((char *)v13 + v10 - 88);
      v15 = *v13;
      if ( v14 != *v13 )
      {
        v21 = v14 & ~v15;
        if ( v21 )
        {
          v22 = RtlNumberOfSetBitsUlongPtr(v14 & ~v15, v3, v5, i);
          *(_QWORD *)&v11[8 * v12] |= v21;
          *((_DWORD *)a1 + 109) += v22;
          *((_QWORD *)a1 + v12 + 31) |= v21;
          *((_DWORD *)a1 + 110) += v22;
          *((_DWORD *)a1 + 113) |= 1u;
          v15 = *v13;
          LOBYTE(v4) = v27;
        }
        v23 = v15 & ~v14;
        if ( v23 )
        {
          LODWORD(v4) = (unsigned __int8)v4;
          if ( (v23 & ~v13[20]) != 0 )
            LODWORD(v4) = 1;
          *(_QWORD *)&v11[8 * v12] &= ~v23;
          v27 = v4;
          *((_DWORD *)a1 + 109) -= RtlNumberOfSetBitsUlongPtr(v23, v3, v5, i);
          v24 = v23 & *((_QWORD *)a1 + v12 + 31);
          if ( v24 )
          {
            *((_QWORD *)a1 + v12 + 31) &= ~v24;
            *((_DWORD *)a1 + 110) -= RtlNumberOfSetBitsUlongPtr(v24, v3, v5, i);
          }
          *((_DWORD *)a1 + 113) |= 1u;
        }
      }
      v10 = *(_QWORD *)v29;
      ++v12;
      LOBYTE(v4) = v27;
      ++v13;
    }
    while ( v12 < 0x14 );
    if ( !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(v27, v3, v5, i) )
    {
      CurrentProcess = GetCurrentProcess();
      RmpSystemSetProcessAllowedCpuSets(CurrentProcess, (char *)a1 + 88);
      v17 = GetCurrentProcess();
      RmpSystemSetProcessDefaultCpuSets(v17, (char *)a1 + 88);
    }
    if ( (_BYTE)v27 )
      RmpCpuSetManagerSweepInvalidAllocations(a1);
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    if ( SystemReserveTarget > *((_DWORD *)a1 + 110) )
    {
      RmpObjectTableEnumerationBegin(
        (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v30);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v30);
        v26 = (char *)Next;
        if ( !Next )
          break;
        RmpCpuSetManagerInvalidateAllocation(a1, Next);
        RmpObjectRelease(v26);
      }
      RtlReleaseSRWLockShared(v30[0] + 16LL);
    }
    *((_DWORD *)a1 + 112) = SystemReserveTarget;
    *((_DWORD *)a1 + 111) = 1;
    RmpCpuSetManagerApplyAllPolicyChanges(a1);
    CpuSetInformation = 0;
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    LOWORD(v27) = 20;
    v32 = &v27;
    v34 = (char *)a1 + 88;
    v33 = 2LL;
    v35 = 160LL;
    TlgWrite(v19, &unk_18007E366, 0LL, 0LL, 4u, &pData);
  }
  return (unsigned int)CpuSetInformation;
}
