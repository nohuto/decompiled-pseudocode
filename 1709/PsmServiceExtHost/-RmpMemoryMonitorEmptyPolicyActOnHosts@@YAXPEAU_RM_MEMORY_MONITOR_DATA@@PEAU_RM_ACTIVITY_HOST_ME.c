/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18003EBC0
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x18003F24C (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180018568 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003561C (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180036344 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B66C (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // rsi
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // r14
  char *v13; // rdi
  __int64 v14; // rbx
  const GUID *v15; // r8
  const GUID *v16; // r9
  char *v17; // rsi
  int v18; // eax
  int v19; // r8d
  int v20; // r11d
  __int64 v21; // rdx
  int v22; // eax
  int v23; // r8d
  char v24; // r8
  __int64 v25; // rdx
  const GUID *v26; // r8
  const GUID *v27; // r9
  unsigned int v28; // r11d
  char v29; // [rsp+30h] [rbp-79h]
  char v30; // [rsp+31h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-75h]
  __int64 v32; // [rsp+38h] [rbp-71h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v33; // [rsp+40h] [rbp-69h]
  unsigned __int8 *v34; // [rsp+48h] [rbp-61h]
  unsigned __int8 *v35; // [rsp+50h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  __int64 *v37; // [rsp+80h] [rbp-29h]
  __int64 v38; // [rsp+88h] [rbp-21h]
  char *v39; // [rsp+90h] [rbp-19h]
  __int64 v40; // [rsp+98h] [rbp-11h]
  char *v41; // [rsp+A0h] [rbp-9h]
  __int64 v42; // [rsp+A8h] [rbp-1h]

  v8 = a8;
  v33 = a6;
  v10 = *(_QWORD *)a1;
  v11 = 0;
  v31 = a3;
  v34 = a7;
  v12 = *(_QWORD *)(v10 + 24) + 400LL;
  v35 = a8;
  *a7 = 0;
  *a8 = 0;
  v29 = 0;
  if ( a3 )
  {
    v13 = (char *)a2 + 24;
    do
    {
      v14 = *((_QWORD *)v13 + 3);
      if ( *((__int16 *)v13 + 18) >= 0 )
      {
        if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)v13 + 3)) )
          return;
        if ( (a5 & 8) != 0 )
        {
          RmpPolicyComputeDesiredEmptyState(v12, v14, 2);
          if ( (a5 & 4) == 0 )
            *v8 = 1;
          v18 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v14 + 40) + 400LL, v14, 1);
          v21 = (unsigned int)(v19 + 31);
          if ( (v18 & *(_DWORD *)(v14 + 1012)) != v18 )
            v21 = (unsigned int)(v19 + 23);
        }
        else
        {
          v22 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v14 + 40) + 400LL, v14, 1);
          if ( (v22 & *(_DWORD *)(v14 + 1012)) == v22 )
          {
            if ( v29 )
              return;
            v20 = RmpPolicyComputeDesiredEmptyState(v12, v14, 2);
            if ( (a5 & 4) == 0 )
              *v8 = 1;
            v21 = 32LL;
          }
          else
          {
            v20 = RmpPolicyComputeDesiredEmptyState(v12, v14, v23);
            v29 = v24;
            v21 = 24LL;
          }
        }
        *(_DWORD *)(v14 + 1328) |= v20;
        v17 = &v13[v21 - 24];
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v32 = *(_QWORD *)(v14 + 24);
          v37 = &v32;
          v38 = 8LL;
          v41 = &v30;
          v39 = v17;
          v40 = 8LL;
          v30 = v25 & (v28 >> 5);
          v42 = v25;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059DBB, v26, v27, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v14, v33);
        RmpActivityHostCheckQueueWork(*((struct _RM_ACTIVITY_HOST **)v13 + 3), 0);
      }
      else
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v32 = *(_QWORD *)(v14 + 24);
          v37 = &v32;
          v41 = v13 - 24;
          v38 = 8LL;
          v39 = v13;
          v40 = 8LL;
          v42 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059FD3, v15, v16, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v14, v33);
        RmpActivityHostRevokeResourceSets(v14, 3u, 4u, 0LL);
        v17 = v13;
      }
      *v34 = 1;
      if ( (a5 & 2) != 0 )
        break;
      if ( *(_QWORD *)v17 > a4 )
        break;
      a4 -= *(_QWORD *)v17;
      ++v11;
      v8 = v35;
      v13 += 64;
    }
    while ( v11 < v31 );
  }
}
