/*
 * XREFs of ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180009340
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180005354 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000CE50 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     ?RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800092E0 (-RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemory(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  bool v2; // zf
  unsigned __int64 *v4; // r15
  int (*v5)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r13
  unsigned int *v6; // r14
  unsigned int *Heap; // r15
  char *v8; // rdx
  char *v9; // r11
  int v10; // eax
  int v11; // esi
  unsigned int *v12; // rsi
  __int64 v13; // r15
  unsigned int v14; // r12d
  int v15; // ecx
  PVOID ProcessHeap; // rcx
  unsigned int *v18; // rax
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  void *ProcessHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 *v24; // [rsp+68h] [rbp-A0h]
  unsigned int *v25; // [rsp+70h] [rbp-98h]
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+90h] [rbp-78h] BYREF
  char v29; // [rsp+A0h] [rbp-68h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  void *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F4h] [rbp-14h]
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  __int64 *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  __int64 *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  int *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]

  v2 = (*((_BYTE *)a1 + 1012) & 0x10) == 0;
  v4 = a2;
  v24 = a2;
  if ( v2 )
  {
    v5 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostQueryOfferedMemoryDxgCallback;
  }
  else
  {
    if ( (*((_BYTE *)a1 + 1008) & 0x10) != 0 )
    {
      v23 = 0LL;
      *a2 = 0LL;
LABEL_29:
      LODWORD(v21) = 0;
      v11 = 0;
      goto LABEL_30;
    }
    v5 = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
  }
  v6 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  ProcessHandle = 0LL;
  if ( *((_DWORD *)a1 + 14) == 1 )
  {
    ((void (__fastcall *)(struct _RM_ACTIVITY_HOST *, _QWORD, _QWORD, __int64 *))v5)(
      a1,
      *((_QWORD *)a1 + 116),
      *((unsigned int *)a1 + 22),
      &v23);
    v11 = 0;
    goto LABEL_25;
  }
  v20 = 1;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v11 = -1073741801;
    goto LABEL_24;
  }
  v8 = (char *)a1 + 88;
  v9 = (char *)a1 + 552;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) + 152LL))(
            v9,
            *((unsigned int *)a1 + 155),
            v8,
            *((unsigned int *)a1 + 156),
            *((_QWORD *)a1 + 3),
            Heap,
            &v20);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v6 = Heap;
      v25 = Heap;
      goto LABEL_8;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v10 != -2147483643 )
      break;
    RtlFreeHeap(ProcessHeap, 0, Heap);
    v18 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v20);
    v8 = (char *)a1 + 88;
    Heap = v18;
    v9 = (char *)a1 + 552;
    if ( !v18 )
    {
      v11 = -1073741801;
      goto LABEL_8;
    }
  }
  RtlFreeHeap(ProcessHeap, 0, Heap);
LABEL_8:
  if ( v11 < 0 )
    goto LABEL_21;
  if ( !v20 )
    goto LABEL_20;
  v12 = v6;
  v13 = v20;
  do
  {
    if ( ProcessHandle )
    {
      NtClose(ProcessHandle);
      ProcessHandle = 0LL;
    }
    v14 = *v12;
    ClientId.UniqueProcess = (HANDLE)*v12;
    ClientId.UniqueThread = 0LL;
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      v15 = *((_DWORD *)a1 + 14);
      if ( !v15 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL)
                                                                                                + 160LL))(
                (char *)a1 + 552,
                *((unsigned int *)a1 + 155),
                (char *)a1 + 88,
                *((unsigned int *)a1 + 156),
                *((_QWORD *)a1 + 3),
                ProcessHandle) )
          goto LABEL_18;
LABEL_16:
        if ( (char *)v5 == (char *)RmpActivityHostQueryOfferedMemoryDxgCallback )
          RmpActivityHostQueryOfferedMemoryDxgCallback(a1, ProcessHandle, v14, &v23);
        else
          ((void (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, _QWORD, __int64 *))v5)(a1, ProcessHandle, v14, &v23);
        goto LABEL_18;
      }
      if ( v15 == 1 && NtIsProcessInJob(ProcessHandle, *((HANDLE *)a1 + 117)) == 292 )
        goto LABEL_16;
    }
LABEL_18:
    v12 += 2;
    --v13;
  }
  while ( v13 );
  v6 = v25;
LABEL_20:
  v11 = 0;
LABEL_21:
  if ( v6 && v6 != (unsigned int *)&v29 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_24:
  v4 = v24;
LABEL_25:
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  LODWORD(v21) = v11;
  if ( v11 >= 0 )
  {
    *v4 = v23;
    goto LABEL_29;
  }
  v23 = -1LL;
LABEL_30:
  if ( hProvider <= 5u || (qword_1800670D0 & 1) == 0 || (qword_1800670D8 & 1) != qword_1800670D8 )
    return (unsigned int)v11;
  v2 = (*((_BYTE *)a1 + 1012) & 0x10) == 0;
  v35 = &v21;
  v26 = *((_QWORD *)a1 + 3);
  v37 = &v26;
  v39 = &v23;
  v36 = 4LL;
  LOBYTE(v19) = !v2;
  v41 = &v19;
  v38 = 8LL;
  v40 = 8LL;
  v42 = 1LL;
  *(_DWORD *)&EventDescriptor.Level = 5;
  UserData.Ptr = (ULONGLONG)off_1800670C8;
  *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180057D82 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_1800670C8;
  v32 = &unk_180057D8D;
  v34 = 1;
  UserData.Reserved = 2;
  v33 = 83;
  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  return (unsigned int)v21;
}
