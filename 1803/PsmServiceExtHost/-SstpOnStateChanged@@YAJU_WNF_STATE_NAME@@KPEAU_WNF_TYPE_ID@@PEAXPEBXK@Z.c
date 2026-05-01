/*
 * XREFs of ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18006AB20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x1800374C0 (-SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18006ACB0 (-SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 */

__int64 __fastcall SstpOnStateChanged(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        void *a5,
        unsigned int a6)
{
  int v10; // r14d
  int v11; // edi
  int v12; // ebx
  __int64 v13; // r9
  char v15; // [rsp+30h] [rbp-89h] BYREF
  int v16; // [rsp+34h] [rbp-85h] BYREF
  int v17; // [rsp+38h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-79h] BYREF
  char *v19; // [rsp+60h] [rbp-59h]
  __int64 v20; // [rsp+68h] [rbp-51h]
  int *v21; // [rsp+70h] [rbp-49h]
  __int64 v22; // [rsp+78h] [rbp-41h]
  int *v23; // [rsp+80h] [rbp-39h]
  __int64 v24; // [rsp+88h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-29h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800848A0, 0LL, 0LL, 2u, &pData);
  RtlAcquireSRWLockExclusive(a4);
  a4[2] = GetCurrentThreadId();
  v10 = a4[4];
  v11 = a4[5];
  if ( v10 != 2 )
  {
    SstpStateChangeTriage(a1, a2, a3, a4, a5, a6);
    if ( a4[4] == 1 )
      SstpPublish((const struct _SYSTEM_STATE_TRACKER *)a4);
  }
  v12 = a4[5];
  a4[2] = 0;
  RtlReleaseSRWLockExclusive(a4);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v15 = v10;
    v19 = &v15;
    v21 = &v16;
    v23 = &v17;
    v20 = 1LL;
    v16 = v11;
    v22 = v13;
    v17 = v12;
    v24 = v13;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180084806, 0LL, 0LL, 5u, &v18);
  }
  return 0LL;
}
