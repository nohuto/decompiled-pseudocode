/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180005260
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        void *a4)
{
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  int v9; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-21h] BYREF
  _DWORD SystemInformation[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD *v13; // [rsp+50h] [rbp-9h]
  int v14; // [rsp+58h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  int *v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+8Ch] [rbp+33h]
  int *v19; // [rsp+90h] [rbp+37h]
  int v20; // [rsp+98h] [rbp+3Fh]
  int v21; // [rsp+9Ch] [rbp+43h]

  v11[1] = a2;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v11[0] = 257LL;
  v14 = 16;
  v13 = v11;
  LODWORD(v5) = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v9 = (int)v5;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v16 = &v9;
    v19 = &v10;
    v17 = 4;
    v10 = a3;
    v20 = 4;
    TlgWrite(v6, &unk_18005A676, v7, v5, 4u, &pData);
    LODWORD(v5) = v9;
  }
  return (unsigned int)v5;
}
