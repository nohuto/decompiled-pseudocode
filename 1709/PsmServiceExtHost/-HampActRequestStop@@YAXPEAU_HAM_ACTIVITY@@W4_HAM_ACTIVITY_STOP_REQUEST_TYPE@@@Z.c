/*
 * XREFs of ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@@Z @ 0x180047D48
 * Callers:
 *     ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180025570 (-HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180043978 (-HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_H.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043DB8 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180040990 (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 */

void __fastcall HampActRequestStop(__int64 a1, unsigned int a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  const GUID *v6; // r8
  const GUID *v7; // r9
  struct _HAM_CLIENT_CONTEXT *v8; // rcx
  __int64 v9; // rax
  char v10; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+38h] [rbp-11h] BYREF
  __int64 v12; // [rsp+40h] [rbp-9h]
  __int64 v13; // [rsp+48h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  __int64 v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  char *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  if ( ((*(_DWORD *)(a1 + 496) >> 5) & 3u) < a2 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v17 = 0;
      v20 = 0;
      v15 = a1 + 40;
      v18 = &v10;
      v16 = 8;
      v10 = a2;
      v19 = 1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B9AA, v6, v7, 4u, &pData);
    }
    *(_DWORD *)(a1 + 496) &= 0xFFFFFF9F;
    *(_DWORD *)(a1 + 496) |= 32 * (a2 & 3);
    if ( (*(_DWORD *)(a1 + 496) & 0x180) == 0 )
    {
      v8 = *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64);
      v13 = 0LL;
      v12 = 0LL;
      v9 = *(_QWORD *)(a1 + 40);
      v12 = 0LL;
      v11 = v9;
      LODWORD(v13) = 1;
      HIDWORD(v13) = a2;
      HampSystemIssueActivityCallback(v8, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)&v11);
    }
  }
  else if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    {
      v17 = 0;
      v20 = 0;
      v15 = a1 + 40;
      v18 = &v10;
      v16 = 8;
      v10 = a2;
      v19 = 1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005BA6A, v4, v5, 4u, &pData);
    }
  }
}
