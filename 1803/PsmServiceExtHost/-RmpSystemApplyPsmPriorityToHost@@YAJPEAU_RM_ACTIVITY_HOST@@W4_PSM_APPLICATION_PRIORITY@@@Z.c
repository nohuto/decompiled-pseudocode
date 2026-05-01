/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180032094
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18001065C (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x1800162C0 (-SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATIO.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v5; // r9d
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r10
  int v9; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-21h] BYREF
  __int64 v11; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  unsigned int *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  __int64 *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  int *v17; // [rsp+90h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+3Fh]

  v2 = *(_QWORD *)(a1 + 48);
  v9 = a2;
  v10 = ModernResourceEnforcer::SetApplicationPriority(
          *(ModernResourceEnforcer **)(v2 + 40),
          (struct _RM_ACTIVITY_HOST *)a1,
          (enum _PSM_APPLICATION_PRIORITY *)&v9);
  v5 = v10;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v14 = v7;
    v13 = &v10;
    v11 = *(_QWORD *)(a1 + 32);
    v15 = &v11;
    v17 = &v9;
    v16 = 8LL;
    v9 = a2;
    v18 = v7;
    TlgWrite(v6, &unk_180080BFB, 0LL, 0LL, 5u, &pData);
    return v10;
  }
  return v5;
}
