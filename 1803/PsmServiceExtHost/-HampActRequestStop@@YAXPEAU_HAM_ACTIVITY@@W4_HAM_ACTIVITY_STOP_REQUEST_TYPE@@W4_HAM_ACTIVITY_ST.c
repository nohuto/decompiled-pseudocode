/*
 * XREFs of ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC
 * Callers:
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180005138 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CC40 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003DC70 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041100 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180064F50 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065204 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065358 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800656FC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x1800662F8 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampActIssueCallback@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180034278 (-HampActIssueCallback@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180067E10 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 */

void __fastcall HampActRequestStop(__int64 a1, unsigned int a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  int v10; // r15d
  unsigned int v11; // ebx
  int v12; // r9d
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  char v16; // [rsp+30h] [rbp-A9h] BYREF
  char v17; // [rsp+31h] [rbp-A8h] BYREF
  _DWORD v18[3]; // [rsp+34h] [rbp-A5h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-99h] BYREF
  int v20; // [rsp+50h] [rbp-89h]
  unsigned int v21; // [rsp+58h] [rbp-81h]
  int v22; // [rsp+5Ch] [rbp-7Dh]
  int v23; // [rsp+60h] [rbp-79h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-59h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-39h]
  __int64 v26; // [rsp+A8h] [rbp-31h]
  _DWORD *v27; // [rsp+B0h] [rbp-29h]
  __int64 v28; // [rsp+B8h] [rbp-21h]
  char *v29; // [rsp+C0h] [rbp-19h]
  __int64 v30; // [rsp+C8h] [rbp-11h]
  char *v31; // [rsp+D0h] [rbp-9h]
  __int64 v32; // [rsp+D8h] [rbp-1h]

  if ( a6 )
    v10 = *(_DWORD *)(a6 + 136);
  else
    v10 = 0;
  v11 = a2;
  if ( !a6 )
    v11 = a2;
  if ( a5 )
    HampActCheckSetExpiration((struct _HAM_ACTIVITY *)a1, a5);
  v12 = *(_DWORD *)(a1 + 536);
  if ( (unsigned __int8)v12 >> 6 < v11 )
  {
    if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
    {
      v26 = v13;
      v25 = a1 + 40;
      v27 = v18;
      v29 = &v16;
      v31 = &v17;
      v18[0] = v10;
      v28 = 4LL;
      v16 = a2;
      v30 = 1LL;
      v17 = a3;
      v32 = 1LL;
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800839C1, 0LL, 0LL, 6u, &pData);
      v12 = *(_DWORD *)(a1 + 536);
    }
    v14 = *(_QWORD *)(a1 + 64) == 0LL;
    *(_DWORD *)(a1 + 536) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((_BYTE)v11 << 6)) & 0xC0;
    if ( !v14 )
    {
      memset_0(v19, 0, 0x40uLL);
      v15 = *(_QWORD *)(a1 + 40);
      v19[1] = 0LL;
      v19[0] = v15;
      v20 = 1;
      v21 = a2;
      v22 = a3;
      v23 = a4;
      HampActIssueCallback((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v19);
    }
  }
  else if ( _volatile_metadata > 5u )
  {
    v26 = 8LL;
    v25 = a1 + 40;
    v27 = v18;
    v29 = &v16;
    v18[0] = v10;
    v28 = 4LL;
    v16 = a2;
    v30 = 1LL;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800838F1, 0LL, 0LL, 5u, &pData);
  }
}
