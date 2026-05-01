/*
 * XREFs of RmgrSrv_RmSetMemoryUsageLimit @ 0x180030210
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     CempRpcQueryClientInformation @ 0x18001DD00 (CempRpcQueryClientInformation.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180033FF0 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 */

__int64 __fastcall RmgrSrv_RmSetMemoryUsageLimit(void *a1, unsigned __int64 a2, BOOL *a3)
{
  BOOL v5; // eax
  unsigned int v6; // r9d
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  int v12; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  int *v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+6Ch] [rbp-1Ch]

  if ( a3 )
  {
    v12 = CempRpcQueryClientInformation(a1, 0LL, 0LL, &v13, &v14);
    LODWORD(v8) = v12;
    if ( v12 >= 0 )
    {
      v5 = RmSrvHostTrySetCommitTargetForPple(v7, v14, v13, a2) >= 0;
      v6 = 0;
    }
    else
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
      {
        v18 = 0;
        v16 = &v12;
        v17 = 4;
        TlgWrite(v9, &unk_18005530B, v10, v8, 3u, &pData);
        LODWORD(v8) = v12;
      }
      v5 = 0;
      v6 = (unsigned int)v8 | 0x10000000;
    }
  }
  else
  {
    v5 = 0;
    v6 = -2147024809;
  }
  *a3 = v5;
  return v6;
}
