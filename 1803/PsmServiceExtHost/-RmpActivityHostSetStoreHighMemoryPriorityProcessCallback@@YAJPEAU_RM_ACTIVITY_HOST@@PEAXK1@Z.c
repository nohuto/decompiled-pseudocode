/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180033F50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        void *a4)
{
  unsigned int v5; // r9d
  const struct _TlgProvider_t *v7; // rcx
  unsigned int v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-21h] BYREF
  _DWORD SystemInformation[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD *v12; // [rsp+50h] [rbp-9h]
  int v13; // [rsp+58h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  unsigned int *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  int *v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  v10[1] = a2;
  v10[0] = 257LL;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v12 = v10;
  v13 = 16;
  v5 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v8 = v5;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v8;
    v18 = &v9;
    v16 = 4;
    v9 = a3;
    v19 = 4;
    TlgWrite(v7, &unk_180080942, 0LL, 0LL, 4u, &pData);
    return v8;
  }
  return v5;
}
