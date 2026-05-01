/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005188
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014000 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriority(struct _RM_ACTIVITY_HOST *a1)
{
  const GUID *v2; // r9
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  UINT32 cData; // r10d
  int v7; // [rsp+30h] [rbp-9h] BYREF
  __int64 v8; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v10; // [rsp+60h] [rbp+27h]
  UINT32 v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  v7 = RmpActivityHostActOnProcesses(
         a1,
         0x2000u,
         1u,
         (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
         0LL);
  LODWORD(v2) = v7;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v7;
    v8 = *((_QWORD *)a1 + 3);
    v13 = &v8;
    v11 = cData;
    v14 = 8;
    TlgWrite(v3, &unk_18005A9EC, v4, v2, cData, &pData);
    LODWORD(v2) = v7;
  }
  return (unsigned int)v2;
}
