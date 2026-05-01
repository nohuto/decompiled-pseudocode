/*
 * XREFs of ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003DE40
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18003DDD8 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorDisableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  int v3; // edx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v1 = *((_QWORD *)a1 + 5);
  *((_BYTE *)a1 + 924) &= ~2u;
  --*(_DWORD *)(v1 + 120);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v6 = *((_QWORD *)a1 + 3);
    v13 = 0;
    v16 = 0;
    v8 = v6;
    v11 = &v8;
    v9 = *(unsigned int *)(v1 + 120);
    v14 = &v9;
    v12 = v3 + 7;
    v15 = v3 + 7;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005979B, v4, v5, 4u, &pData);
  }
  v7 = *((_DWORD *)a1 + 252);
  if ( (v7 & 2) != 0 )
  {
    *((_DWORD *)a1 + 252) = v7 & 0xFFFFFFFD;
    RmpActivityHostCheckQueueWork(a1, 0);
  }
  if ( !*(_DWORD *)(v1 + 120) && (*(_BYTE *)(v1 + 132) & 1) != 0 )
    RmpGpuMonitorDisable((struct _RM_GPU_MONITOR *)(v1 + 88));
}
