/*
 * XREFs of ?HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180043978
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180043E00 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18004800C (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180016E7C (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043888 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800438A0 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18004718C (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@@Z @ 0x180047D48 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@@Z.c)
 */

char __fastcall HampHostQueueTerminate(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  struct _HAM_ACTIVITY *i; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _HAM_ACTIVITY *v13; // rdi
  __int64 v14; // rax
  int v15; // r10d
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  char v19; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v20[7]; // [rsp+39h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-51h] BYREF
  __int64 v22; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v24; // [rsp+78h] [rbp-19h]
  int v25; // [rsp+80h] [rbp-11h]
  int v26; // [rsp+84h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  __int64 *v28; // [rsp+98h] [rbp+7h]
  int v29; // [rsp+A0h] [rbp+Fh]
  int v30; // [rsp+A4h] [rbp+13h]
  _BYTE *v31; // [rsp+A8h] [rbp+17h]
  int v32; // [rsp+B0h] [rbp+1Fh]
  int v33; // [rsp+B4h] [rbp+23h]
  char *v34; // [rsp+B8h] [rbp+27h]
  int v35; // [rsp+C0h] [rbp+2Fh]
  int v36; // [rsp+C4h] [rbp+33h]

  v3 = *(_DWORD *)(a1 + 628) & 3;
  if ( v3 >= a2 )
  {
    if ( hProvider > 5u )
    {
      LOBYTE(v3) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL);
      if ( (_BYTE)v3 )
      {
        v9 = *(_QWORD *)(a1 - 40);
        v26 = 0;
        pDesc.Reserved = 0;
        v21 = v9;
        v24 = &v21;
        pDesc.Ptr = (ULONGLONG)&v19;
        LOBYTE(v9) = *(_BYTE *)(a1 + 628) & 3;
        v25 = 8;
        v30 = 0;
        v20[0] = v9;
        v28 = (__int64 *)v20;
        v19 = a2;
        pDesc.Size = 1;
        v29 = 1;
        LOBYTE(v3) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B344, v7, v8, 5u, &pData);
      }
    }
    return v3;
  }
  for ( i = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1); ; i = HampHostGetNextActivity(v13) )
  {
    v13 = i;
    if ( !i )
      break;
    if ( HampActCanBeInvalidated(i) && *((_BYTE *)v13 + 500) == 3 )
    {
      if ( a2 == 1 )
      {
        v12 = 1LL;
      }
      else
      {
        if ( a2 - 2 > 1 )
          continue;
        v12 = 2LL;
      }
      HampActRequestStop(v11, v12);
    }
  }
  *(_DWORD *)(a1 + 628) &= 0xFFFFFFE0;
  *(_DWORD *)(a1 + 628) |= a2 & 3 | (4 * (a3 & 7));
  LOBYTE(v3) = HampHostCheckQueueTerminateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  if ( hProvider > 4u )
  {
    LOBYTE(v3) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000028uLL);
    if ( (_BYTE)v3 )
    {
      v14 = *(_QWORD *)(a1 - 40);
      v26 = 0;
      v22 = v14;
      v24 = &v22;
      v25 = 8;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 24));
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v28 = &v21;
      v31 = v20;
      v34 = &v19;
      LODWORD(v21) = v15;
      v29 = 4;
      v20[0] = a2;
      v32 = 1;
      v19 = a3;
      v35 = 1;
      LOBYTE(v3) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B3AC, v16, v17, 7u, &pData);
    }
  }
  return v3;
}
