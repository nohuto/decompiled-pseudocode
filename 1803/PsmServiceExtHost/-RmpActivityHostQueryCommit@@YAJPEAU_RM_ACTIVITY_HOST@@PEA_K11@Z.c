/*
 * XREFs of ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800138F0
 * Callers:
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180004CC8 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800124B0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x18002E054 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     RmpTracingControlCallback @ 0x180034100 (RmpTracingControlCallback.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800540F0 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180054958 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x18005AB78 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180014150 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x180016360 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  unsigned __int64 *v6; // r12
  struct _EVENT_DATA_DESCRIPTOR *v7; // r9
  const unsigned __int16 *v8; // rbx
  ModernResourceEnforcer *v9; // rcx
  __int64 result; // rax
  unsigned int *v11; // rsi
  unsigned int *Heap; // r15
  int v13; // eax
  int v14; // edi
  unsigned int v15; // eax
  unsigned int *v16; // rdi
  __int64 v17; // r15
  struct _UNICODE_STRING *v18; // rcx
  void *v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  const WCHAR *v25; // rcx
  __int64 v26; // rax
  PVOID ProcessHeap; // rcx
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-BCh] BYREF
  void *ProcessHandle; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 *v41; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v42; // [rsp+A8h] [rbp-58h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B0h] [rbp-50h] BYREF
  char v44; // [rsp+C0h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+100h] [rbp+0h] BYREF
  void *v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  int v49; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  const WCHAR *v52; // [rsp+130h] [rbp+30h]
  int v53; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+13Ch] [rbp+3Ch]
  int *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  unsigned __int64 *v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  int *v66; // [rsp+1B0h] [rbp+B0h]
  __int64 v67; // [rsp+1B8h] [rbp+B8h]
  __int64 *v68; // [rsp+1C0h] [rbp+C0h]
  __int64 v69; // [rsp+1C8h] [rbp+C8h]

  v4 = *((_QWORD *)a1 + 6);
  v41 = a2;
  v6 = a4;
  v38 = a4;
  v7 = (struct _EVENT_DATA_DESCRIPTOR *)*((_QWORD *)a1 + 4);
  v8 = (const unsigned __int16 *)((char *)a1 + 88);
  v9 = *(ModernResourceEnforcer **)(v4 + 40);
  LODWORD(v4) = *((_DWORD *)a1 + 156);
  UserData = v7;
  LODWORD(v7) = *((_DWORD *)a1 + 155);
  v42 = a3;
  result = ModernResourceEnforcer::QueryCurrentMemoryUsage(
             v9,
             v8,
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 552),
             (unsigned int)v7,
             v4,
             (unsigned __int64)UserData,
             &v35,
             &v34);
  if ( (int)result >= 0 )
  {
    v30 = 1;
    v32 = 0LL;
    ProcessHandle = 0LL;
    v11 = 0LL;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( Heap )
    {
      while ( 1 )
      {
        v13 = (*(__int64 (__fastcall **)(char *, _QWORD, const unsigned __int16 *, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
                (char *)a1 + 552,
                *((unsigned int *)a1 + 155),
                v8,
                *((unsigned int *)a1 + 156),
                *((_QWORD *)a1 + 4),
                Heap,
                &v30);
        v14 = v13;
        if ( v13 >= 0 )
        {
          v15 = v30;
          v11 = Heap;
          goto LABEL_5;
        }
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( v13 != -2147483643 )
          break;
        RtlFreeHeap(ProcessHeap, 0, Heap);
        Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v30);
        if ( !Heap )
        {
          v15 = v29;
          v14 = -1073741801;
          goto LABEL_5;
        }
      }
      RtlFreeHeap(ProcessHeap, 0, Heap);
      v15 = v29;
LABEL_5:
      if ( v14 >= 0 )
      {
        if ( v15 )
        {
          v16 = v11;
          v17 = v15;
          do
          {
            v18 = (struct _UNICODE_STRING *)ProcessHandle;
            if ( ProcessHandle )
            {
              NtClose(ProcessHandle);
              v18 = 0LL;
              ProcessHandle = 0LL;
            }
            v19 = (void *)*v16;
            ClientId.UniqueThread = v18;
            ObjectAttributes.RootDirectory = v18;
            ObjectAttributes.Attributes = (unsigned int)v18;
            ObjectAttributes.ObjectName = v18;
            ClientId.UniqueProcess = v19;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ObjectAttributes.Length = 48;
            if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
              && (*(unsigned __int8 (__fastcall **)(char *, _QWORD, const unsigned __int16 *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                   (char *)a1 + 552,
                   *((unsigned int *)a1 + 155),
                   v8,
                   *((unsigned int *)a1 + 156),
                   *((_QWORD *)a1 + 4),
                   ProcessHandle) )
            {
              RmpActivityHostCommitDebtCallback(a1, ProcessHandle, (unsigned int)v19, &v32);
            }
            v16 += 2;
            --v17;
          }
          while ( v17 );
          v6 = v38;
        }
        v14 = 0;
      }
      if ( v11 && v11 != (unsigned int *)&v44 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    }
    else
    {
      v14 = -1073741801;
    }
    if ( ProcessHandle )
      NtClose(ProcessHandle);
    v29 = v14;
    if ( v14 < 0 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v67 = 4LL;
        v66 = &v29;
        v39 = *((_QWORD *)a1 + 4);
        v68 = &v39;
        v69 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180080A08, 0LL, 0LL, 4u, &pData);
        v14 = v29;
      }
      v20 = v32;
      if ( v14 < 0 )
        v20 = 0LL;
      v32 = v20;
    }
    else
    {
      v20 = v32;
    }
    v21 = v35;
    if ( v20 >= v35 )
      v20 = v35;
    v22 = v35 - v20;
    if ( v35 && v22 <= 1 )
      v22 = 1LL;
    v23 = v34;
    v24 = v22 + v34;
    v36 = v22 + v34;
    if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
    {
      v25 = &pwsz;
      v40 = *((_QWORD *)a1 + 4);
      v50 = &v40;
      LODWORD(v26) = 0;
      v51 = 8LL;
      if ( v8 )
      {
        v25 = v8;
        v26 = -1LL;
        do
          ++v26;
        while ( v8[v26] );
      }
      v52 = v25;
      v33 = *((_DWORD *)a1 + 156);
      v55 = &v33;
      v57 = &v36;
      v59 = &v35;
      v61 = &v34;
      v63 = &v32;
      v53 = 2 * v26 + 2;
      v54 = 0;
      v56 = 4LL;
      v58 = 8LL;
      v60 = 8LL;
      v62 = 8LL;
      v64 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      v46.Ptr = (ULONGLONG)off_1800920B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007DD49 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      v46.Size = *(unsigned __int16 *)off_1800920B8;
      v47 = &unk_18007DD54;
      v46.Reserved = 2;
      v48 = 150;
      v49 = 1;
      EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 9u, &v46);
      v23 = v34;
      v21 = v35;
      v24 = v36;
    }
    if ( v41 )
      *v41 = v22;
    if ( v42 )
      *v42 = v21 + v23;
    if ( v6 )
      *v6 = v24;
    return 0LL;
  }
  return result;
}
