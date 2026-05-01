/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800540F0
 * Callers:
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180011F40 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005A6E8 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005BDA0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800138F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemory(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_OFFERED_DECOMMIT_INFO *a2)
{
  unsigned __int64 v2; // rsi
  int v3; // ebx
  int (*v6)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  int v7; // edx
  bool v8; // zf
  int v9; // edx
  bool v10; // al
  bool v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  unsigned __int64 *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  char *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  bool *v25; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+98h] [rbp+2Fh]
  int v27; // [rsp+9Ch] [rbp+33h]

  v2 = 0LL;
  v3 = *((_DWORD *)a2 + 4) & 2;
  v14 = 0LL;
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    if ( v3 )
      RmpAcquireGlobalLock();
    RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v14);
    if ( v3 )
      RmpReleaseGlobalLock();
    v2 = v14;
    v6 = RmpActivityHostDecommitOfferedMemoryCommitSaveCallback;
    v7 = 8193;
  }
  else
  {
    v7 = 0x2000;
    v6 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostDecommitOfferedMemoryDxgCallback;
  }
  v13 = RmHamHostActOnProcesses(a1, v7, 0, v6, a2);
  if ( v13 >= 0 )
  {
    if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
    {
      if ( v3 )
        RmpAcquireGlobalLock();
      v13 = RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v14);
      if ( v3 )
        RmpReleaseGlobalLock();
      if ( v13 >= 0 && v2 >= v14 )
      {
        v8 = (*((_BYTE *)a2 + 16) & 4) == 0;
        *((_QWORD *)a2 + 1) = v2 - v14;
        if ( !v8 )
          *((_DWORD *)a1 + 288) |= 0x10u;
      }
    }
    if ( v3 )
      RmpAcquireGlobalLock();
    *((_QWORD *)a1 + 139) += *((_QWORD *)a2 + 1);
    if ( v3 )
      RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x19uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v13;
    v14 = *((_QWORD *)a1 + 4);
    v19 = &v14;
    v22 = (char *)a2 + 8;
    v10 = (*((_DWORD *)a2 + 4) & 2) != 0;
    v17 = 4;
    v27 = 0;
    v12 = v10;
    v25 = &v12;
    v20 = v9 - 17;
    v23 = v9 - 17;
    v26 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007DC30, 0LL, 0LL, 6u, &pData);
  }
  return (unsigned int)v13;
}
