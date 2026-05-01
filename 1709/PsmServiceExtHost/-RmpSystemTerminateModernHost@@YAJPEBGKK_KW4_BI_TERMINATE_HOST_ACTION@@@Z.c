/*
 * XREFs of ?RmpSystemTerminateModernHost@@YAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x1800414E4
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180041490 (-RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 RmpSystemTerminateModernHost(const WCHAR *a1, unsigned int a2, unsigned int a3, ...)
{
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // r10
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  signed int LastError; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v14; // [rsp+38h] [rbp-89h] BYREF
  int v15; // [rsp+3Ch] [rbp-85h] BYREF
  HANDLE hToken; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  signed int *p_LastError; // [rsp+80h] [rbp-41h]
  __int64 v20; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-31h] BYREF
  int *v22; // [rsp+A0h] [rbp-21h]
  __int64 v23; // [rsp+A8h] [rbp-19h]
  int *v24; // [rsp+B0h] [rbp-11h]
  __int64 v25; // [rsp+B8h] [rbp-9h]
  va_list v26; // [rsp+C0h] [rbp-1h]
  __int64 v27; // [rsp+C8h] [rbp+7h]
  int *v28; // [rsp+D0h] [rbp+Fh]
  __int64 v29; // [rsp+D8h] [rbp+17h]
  va_list va; // [rsp+138h] [rbp+77h] BYREF

  va_start(va, a3);
  hToken = 0LL;
  if ( (unsigned int)QueryUserToken(a2, &hToken) && ImpersonateLoggedOnUser(hToken) )
  {
    RtlInitUnicodeString(&DestinationString, a1);
    v6 = BiTerminateApplicationHost(&DestinationString, a3, 1LL);
    if ( v6 >= 0 )
      v6 = 0;
    LastError = v6;
    RevertToSelf();
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( hToken )
    CloseHandle(hToken);
  if ( LastError < 0 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v20 = v7;
    p_LastError = &LastError;
    TlgCreateWsz(&pDesc, a1);
    v13 = a2;
    v22 = (int *)&v13;
    v23 = v8;
    v24 = (int *)&v14;
    va_copy(v26, va);
    v28 = &v15;
    v14 = a3;
    v25 = v8;
    v27 = (unsigned int)(v8 + 4);
    v15 = 1;
    v29 = v8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A862, v9, v10, v8 + 4, &pData);
  }
  return (unsigned int)LastError;
}
