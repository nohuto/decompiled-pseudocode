/*
 * XREFs of ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025A60
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180051BB8 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18005405C (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x18005AB78 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180025C9C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RmpActivityHostComputeCommitLimit(struct _RM_ACTIVITY_HOST *a1)
{
  _QWORD *v1; // r11
  unsigned __int64 v2; // r9
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-51h] BYREF
  __int64 v10; // [rsp+40h] [rbp-49h] BYREF
  __int64 v11; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  unsigned __int64 *v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  __int64 *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  __int64 v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]
  __int64 v25; // [rsp+B0h] [rbp+27h]
  int v26; // [rsp+B8h] [rbp+2Fh]
  int v27; // [rsp+BCh] [rbp+33h]
  unsigned __int64 *v28; // [rsp+C0h] [rbp+37h]
  int v29; // [rsp+C8h] [rbp+3Fh]
  int v30; // [rsp+CCh] [rbp+43h]

  RmpCommitValuesAdd(*((_QWORD *)a1 + 165), *((_QWORD *)a1 + 161), &v8);
  v2 = v1[157];
  v11 = v1[135];
  if ( !v2 )
  {
    v2 = v1[158];
    if ( v2 )
    {
      if ( v8 < v2 )
        v2 = v8;
    }
    else
    {
      v2 = v8;
    }
  }
  v9 = v2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v6 = *(_QWORD *)(v5 + 32);
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v10 = v6;
    v13 = &v10;
    v16 = &v9;
    v19 = &v11;
    v25 = v5 + 1264;
    v28 = &v8;
    v14 = 8;
    v17 = 8;
    v20 = 8;
    v22 = v4;
    v23 = 8;
    v26 = 8;
    v29 = 8;
    TlgWrite(v3, &unk_18007DB7D, 0LL, 0LL, 8u, &pData);
    return v9;
  }
  return v2;
}
