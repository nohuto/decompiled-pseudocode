/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180035C00
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000CE50 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003BD1C (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003CAC0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemory(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_OFFERED_DECOMMIT_INFO *a2)
{
  unsigned __int64 v2; // rsi
  int v3; // edi
  int (*v6)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  int v7; // edx
  bool v8; // zf
  int v9; // edx
  const GUID *v10; // r8
  const GUID *v11; // r9
  bool v12; // al
  bool v14; // [rsp+30h] [rbp-39h] BYREF
  int v15; // [rsp+34h] [rbp-35h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  unsigned __int64 *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  char *v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]
  bool *v27; // [rsp+90h] [rbp+27h]
  int v28; // [rsp+98h] [rbp+2Fh]
  int v29; // [rsp+9Ch] [rbp+33h]

  v2 = 0LL;
  v3 = *((_DWORD *)a2 + 4) & 2;
  v16 = 0LL;
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    if ( v3 )
      RmpAcquireGlobalLock();
    RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v16);
    if ( v3 )
      RmpReleaseGlobalLock();
    v2 = v16;
    v6 = RmpActivityHostDecommitOfferedMemoryCommitSaveCallback;
    v7 = 8193;
  }
  else
  {
    v7 = 0x2000;
    v6 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostDecommitOfferedMemoryDxgCallback;
  }
  v15 = RmpActivityHostActOnProcesses(a1, v7, 0, v6, a2);
  if ( v15 >= 0 )
  {
    if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
    {
      if ( v3 )
        RmpAcquireGlobalLock();
      v15 = RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v16);
      if ( v3 )
        RmpReleaseGlobalLock();
      if ( v15 >= 0 && v2 >= v16 )
      {
        v8 = (*((_BYTE *)a2 + 16) & 4) == 0;
        *((_QWORD *)a2 + 1) = v2 - v16;
        if ( !v8 )
          *((_DWORD *)a1 + 252) |= 0x10u;
      }
    }
    if ( v3 )
      RmpAcquireGlobalLock();
    *((_QWORD *)a1 + 121) += *((_QWORD *)a2 + 1);
    if ( v3 )
      RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x19uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = &v15;
    v16 = *((_QWORD *)a1 + 3);
    v21 = &v16;
    v24 = (char *)a2 + 8;
    v12 = (*((_DWORD *)a2 + 4) & 2) != 0;
    v19 = 4;
    v29 = 0;
    v14 = v12;
    v27 = &v14;
    v22 = v9 - 17;
    v25 = v9 - 17;
    v28 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057720, v10, v11, 6u, &pData);
  }
  return (unsigned int)v15;
}
