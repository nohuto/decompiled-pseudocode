/*
 * XREFs of ?HampSystemNotificationClientUnregister@@YAXPEAX@Z @ 0x180060808
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064564 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     PdcNotificationClientUnregister @ 0x18006B728 (PdcNotificationClientUnregister.c)
 */

void __fastcall HampSystemNotificationClientUnregister(void *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  UINT32 cData; // r9d
  int v3; // [rsp+30h] [rbp-68h] BYREF
  void *v4; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  UINT32 v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  void **v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v4 = a1;
  v3 = PdcNotificationClientUnregister(a1);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v3;
      v9 = &v4;
      v7 = cData;
      v10 = 8;
      TlgWrite(v1, &unk_180080C57, 0LL, 0LL, cData, &pData);
    }
  }
}
