/*
 * XREFs of ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001203C
 * Callers:
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180011F40 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x18002E054 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemory(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int (*v4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  unsigned int v5; // edx
  bool v6; // al
  bool v8; // [rsp+30h] [rbp-59h] BYREF
  int v9; // [rsp+34h] [rbp-55h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  int *v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+8Ch] [rbp+3h]
  __int64 *v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+9Ch] [rbp+13h]
  unsigned __int64 *v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A8h] [rbp+1Fh]
  int v25; // [rsp+ACh] [rbp+23h]
  bool *v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B8h] [rbp+2Fh]
  int v28; // [rsp+BCh] [rbp+33h]

  if ( (*((_BYTE *)a1 + 1156) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)a1 + 1152) & 0x10) != 0 )
    {
      v10 = 0LL;
      *a2 = 0LL;
LABEL_9:
      v5 = 0;
      v9 = 0;
      goto LABEL_10;
    }
    v4 = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
  }
  else
  {
    v4 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostQueryOfferedMemoryDxgCallback;
  }
  v10 = 0LL;
  v9 = RmHamHostActOnProcesses(a1, 0x1000u, 1u, v4, &v10);
  v5 = v9;
  if ( v9 >= 0 )
  {
    *a2 = v10;
    goto LABEL_9;
  }
  v10 = -1LL;
LABEL_10:
  if ( hProvider > 5u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v9;
    v11 = *((_QWORD *)a1 + 4);
    v20 = &v11;
    v23 = &v10;
    v6 = (*((_BYTE *)a1 + 1156) & 0x10) != 0;
    v18 = 4;
    v28 = 0;
    v8 = v6;
    v26 = &v8;
    v21 = 8;
    v24 = 8;
    v27 = 1;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007E1D8 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v14 = &unk_18007E1E3;
    UserData.Reserved = 2;
    v15 = 83;
    v16 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    return (unsigned int)v9;
  }
  return v5;
}
