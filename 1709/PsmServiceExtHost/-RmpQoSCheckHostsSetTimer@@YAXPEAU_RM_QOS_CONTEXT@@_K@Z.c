/*
 * XREFs of ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180003C4C
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003B0C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180003BC0 (-RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x180003CE4 (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003CF8 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001269C (-RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpQoSCheckHostsSetTimer(struct _RM_QOS_CONTEXT *a1, unsigned __int64 a2)
{
  struct _RM_QOS_CONTEXT *i; // rbx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v4; // rax
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // r9
  char *v9; // rdi
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]

  for ( i = a1; ; a1 = i )
  {
    v4 = RmpQoSGetEarliestHostInfo(a1);
    if ( !v4 || *((_QWORD *)v4 + 25) > a2 )
      break;
    v9 = (char *)v4 - 872;
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x19uLL) )
    {
      v12 = *((_QWORD *)v9 + 3);
      v21 = 0;
      v16 = v12;
      v19 = &v16;
      v20 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A2A9, v10, v11, 3u, &pData);
    }
    *((_DWORD *)v9 + 252) |= 4u;
    RmpQoSSetForHost(i, (struct _RM_ACTIVITY_HOST *)v9, 0);
    v13 = v9 + 1040;
    v14 = *((_QWORD *)v9 + 130);
    if ( *(char **)(v14 + 8) != v9 + 1040 || (v15 = (_QWORD *)*((_QWORD *)v9 + 131), (_QWORD *)*v15 != v13) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = 0LL;
    *((_QWORD *)v9 + 131) = 0LL;
    RmpActivityHostRelease((struct _RM_ACTIVITY_HOST *)v9);
  }
  v5 = RmpQoSGetEarliestHostInfo(i);
  v6 = *((_QWORD *)i + 2);
  if ( v5 )
  {
    v7 = &v17;
    v8 = *((unsigned int *)i + 7);
    v17 = *((_QWORD *)v5 + 25);
  }
  else
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  TpSetTimer(v6, v7, 0LL, v8);
}
