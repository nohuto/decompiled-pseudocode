/*
 * XREFs of ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800478B8
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047A8C (-HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180040990 (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 */

void __fastcall HampActInvalidateAndNotify(struct _HAM_ACTIVITY *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // ecx
  unsigned int v6; // ecx
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  _QWORD v8[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+40h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-40h] BYREF
  char *v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+70h] [rbp-18h]
  int v13; // [rsp+74h] [rbp-14h]

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v13 = 0;
    v11 = (char *)a1 + 40;
    v12 = 8;
    TlgWrite(v2, &unk_18005BA36, v3, v4, 3u, &pData);
  }
  v5 = *((_DWORD *)a1 + 124);
  if ( (v5 & 0x180) == 0x100 )
  {
    if ( (unsigned __int8)(*((_BYTE *)a1 + 500) - 2) > 1u )
      goto LABEL_9;
    v6 = v5 & 0xFFFFFF9F | 0x40;
  }
  else
  {
    v6 = v5 | 0x10;
  }
  *((_DWORD *)a1 + 124) = v6;
LABEL_9:
  if ( (*((_DWORD *)a1 + 124) & 0x180) == 0 )
  {
    v7 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
    v8[1] = 0LL;
    v9 = 0LL;
    v8[0] = *((_QWORD *)a1 + 5);
    LODWORD(v9) = 2;
    HampSystemIssueActivityCallback(v7, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v8);
  }
}
