/*
 * XREFs of ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005CF4C
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DAA0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18005CEE0 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorDisableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  int v3; // edx
  unsigned int v4; // r9d
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp-68h] BYREF
  __int64 v8; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v1 = *((_QWORD *)a1 + 6);
  --*(_DWORD *)(v1 + 104);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v5 = *((_QWORD *)a1 + 4);
    v12 = 0;
    v15 = 0;
    v7 = v5;
    v10 = &v7;
    v8 = v4;
    v13 = &v8;
    v11 = v3 + 7;
    v14 = v3 + 7;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F9DA, 0LL, 0LL, 4u, &pData);
  }
  v6 = *((_DWORD *)a1 + 288);
  if ( (v6 & 2) != 0 )
  {
    *((_DWORD *)a1 + 288) = v6 & 0xFFFFFFFD;
    RmpActivityHostCheckQueueWork(a1);
  }
  if ( !*(_DWORD *)(v1 + 104) && (*(_BYTE *)(v1 + 116) & 1) != 0 )
    RmpGpuMonitorDisable((struct _RM_GPU_MONITOR *)(v1 + 72));
}
