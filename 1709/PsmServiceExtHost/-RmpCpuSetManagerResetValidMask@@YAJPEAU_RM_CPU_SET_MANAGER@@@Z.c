/*
 * XREFs of ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180023CB4
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18001FDB0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180023A6C (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180005144 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800055A4 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180024050 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800241E8 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180024208 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x18002427C (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpSystemIsCpuSetControlDelegated@@YAEXZ @ 0x180026A1C (-RmpSystemIsCpuSetControlDelegated@@YAEXZ.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037704 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180037F90 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180039D9C (-RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerResetValidMask(struct _RM_CPU_SET_MANAGER *a1)
{
  char *v2; // rdi
  unsigned int i; // r14d
  int v4; // eax
  unsigned int v5; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 j; // r9
  int v10; // eax
  unsigned int v11; // eax
  char *v12; // r12
  unsigned int v13; // r13d
  _QWORD *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int8 IsCpuSetControlDelegated; // al
  HANDLE CurrentProcess; // rax
  HANDLE v22; // rax
  unsigned int SystemReserveTarget; // r14d
  struct _RM_CPU_SET_ALLOCATION *Next; // rax
  char *v25; // rsi
  const struct _TlgProvider_t *v26; // rcx
  const GUID *v27; // r8
  const GUID *v28; // r9
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v33[40]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  char *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  _QWORD v39[20]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  for ( i = 0; ; i = Size[0] )
  {
    v32 = 0LL;
    v4 = NtQuerySystemInformationEx(175LL, &v32, 8LL, v2, i, Size);
    v5 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741789 )
      goto LABEL_35;
    if ( v2 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    *(_QWORD *)&Size[1] = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size[0]);
    v2 = *(char **)&Size[1];
    if ( !*(_QWORD *)&Size[1] )
    {
      v5 = -1073741801;
      goto LABEL_37;
    }
  }
  memset_0(v39, 0, sizeof(v39));
  for ( j = 0LL; (unsigned int)j < i; j = (unsigned int)(*(_DWORD *)&v2[(unsigned int)j] + j) )
  {
    v8 = (unsigned int)j;
    if ( !*(_DWORD *)&v2[(unsigned int)j + 4] )
    {
      v10 = *(_DWORD *)&v2[(unsigned int)j + 8];
      if ( v10 != *((_DWORD *)a1 + 108) )
      {
        v11 = v10 - 256;
        v6 = (unsigned __int64)v11 >> 16;
        v7 = v39[v6] | (1LL << v11);
        v39[v6] = v7;
      }
    }
  }
  LOBYTE(v7) = 0;
  v12 = (char *)a1 + 88;
  v30 = v7;
  v13 = 0;
  v14 = (_QWORD *)((char *)a1 + 88);
  do
  {
    v15 = *(_QWORD *)((char *)v14 + (char *)v39 - (char *)a1 - 88);
    if ( v15 != *v14 )
    {
      v16 = v15 & ~*v14;
      if ( v16 )
      {
        v17 = RtlNumberOfSetBitsUlongPtr(v16, v6, v8, j);
        *(_QWORD *)&v12[8 * v13] |= v16;
        *((_DWORD *)a1 + 109) += v17;
        *((_QWORD *)a1 + v13 + 31) |= v16;
        *((_DWORD *)a1 + 110) += v17;
        *((_DWORD *)a1 + 113) |= 1u;
        LOBYTE(v7) = v30;
      }
      v18 = *v14 & ~v15;
      if ( v18 )
      {
        LODWORD(v7) = (unsigned __int8)v7;
        if ( (~v14[20] & v18) != 0 )
          LODWORD(v7) = 1;
        v30 = v7;
        *(_QWORD *)&v12[8 * v13] &= ~v18;
        *((_DWORD *)a1 + 109) -= RtlNumberOfSetBitsUlongPtr(v18, v6, v8, j);
        v19 = v18 & *((_QWORD *)a1 + v13 + 31);
        if ( v19 )
        {
          *((_QWORD *)a1 + v13 + 31) &= ~v19;
          *((_DWORD *)a1 + 110) -= RtlNumberOfSetBitsUlongPtr(v19, v6, v8, j);
        }
        *((_DWORD *)a1 + 113) |= 1u;
      }
    }
    LOBYTE(v7) = v30;
    ++v13;
    ++v14;
  }
  while ( v13 < 0x14 );
  IsCpuSetControlDelegated = RmpSystemIsCpuSetControlDelegated();
  v2 = *(char **)&Size[1];
  if ( !IsCpuSetControlDelegated )
  {
    CurrentProcess = GetCurrentProcess();
    RmpSystemSetProcessAllowedCpuSets(CurrentProcess, (char *)a1 + 88);
    v22 = GetCurrentProcess();
    RmpSystemSetProcessDefaultCpuSets(v22, (char *)a1 + 88);
  }
  if ( (_BYTE)v30 )
    RmpCpuSetManagerSweepInvalidAllocations(a1);
  SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
  if ( SystemReserveTarget > *((_DWORD *)a1 + 110) )
  {
    RmpObjectTableEnumerationBegin(
      (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v33);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v33);
      v25 = (char *)Next;
      if ( !Next )
        break;
      RmpCpuSetManagerInvalidateAllocation(a1, Next);
      RmpObjectRelease(v25);
    }
    RmpObjectTableEnumerationEnd((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v33);
  }
  *((_DWORD *)a1 + 112) = SystemReserveTarget;
  *((_DWORD *)a1 + 111) = 1;
  RmpCpuSetManagerApplyAllPolicyChanges(a1);
  v5 = 0;
LABEL_35:
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
LABEL_37:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    LOWORD(v30) = 20;
    v35 = &v30;
    v37 = (char *)a1 + 88;
    v36 = 2LL;
    v38 = 160LL;
    TlgWrite(v26, &unk_180058087, v27, v28, 4u, &pData);
  }
  return v5;
}
