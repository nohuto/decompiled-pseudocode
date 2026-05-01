/*
 * XREFs of ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003B0C
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180003C4C (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003CF8 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180003EA8 (-RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001269C (-RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpQoSEnableDisableForHost(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  struct _RM_QOS_CONTEXT *v3; // rsi
  int v5; // eax
  unsigned int v6; // ebp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RM_QOS_CONTEXT *)(*((_QWORD *)a1 + 5) + 176LL);
  RtlQueryUnbiasedInterruptTime(&v11);
  v5 = RmpQoSSetForHost(v3, a1, a2);
  v6 = v5;
  if ( !a2 )
  {
    v8 = (_QWORD *)((char *)a1 + 1040);
    v9 = *((_QWORD *)a1 + 130);
    if ( *(struct _RM_ACTIVITY_HOST **)(v9 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1040)
      || (v10 = (_QWORD *)*((_QWORD *)a1 + 131), (_QWORD *)*v10 != v8) )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    *((_QWORD *)a1 + 131) = 0LL;
    RmpActivityHostRelease(a1);
    goto LABEL_4;
  }
  if ( v5 >= 0 )
  {
    RmpQoSEnableWatchdogForHost(v3, a1, v11);
LABEL_4:
    RmpQoSCheckHostsSetTimer(v3, v11);
  }
  return v6;
}
