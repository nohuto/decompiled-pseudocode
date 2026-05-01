/*
 * XREFs of ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180040990
 * Callers:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800478B8 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047A8C (-HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@@Z @ 0x180047D48 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x18001F138 (RmpWnfPublishMessageToClientStateName.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall HampSystemIssueActivityCallback(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *cData; // r9
  int v6; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  if ( (int)RmpWnfPublishMessageToClientStateName((_QWORD *)a1 + 13, a2, 0x18u, *((_QWORD *)a1 + 14)) < 0
    && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000028uLL) )
    {
      v6 = *((_DWORD *)a2 + 4);
      v11 = 0;
      v14 = 0;
      v7 = v6;
      v12 = &v7;
      v9 = a2;
      v10 = 8;
      v13 = (int)cData;
      TlgWrite(v3, &unk_18005A73C, v4, cData, (UINT32)cData, &pData);
    }
  }
}
