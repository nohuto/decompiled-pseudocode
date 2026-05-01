/*
 * XREFs of ?RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800359A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpActivityHostCommitSavingsCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, int *a4)
{
  int v4; // edi
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  int v11; // r10d
  bool v13; // [rsp+30h] [rbp-69h] BYREF
  NTSTATUS v14; // [rsp+34h] [rbp-65h] BYREF
  int v15; // [rsp+38h] [rbp-61h] BYREF
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  int ProcessInformation; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-4Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  NTSTATUS *v20; // [rsp+90h] [rbp-9h]
  int v21; // [rsp+98h] [rbp-1h]
  int v22; // [rsp+9Ch] [rbp+3h]
  __int64 *v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A8h] [rbp+Fh]
  int v25; // [rsp+ACh] [rbp+13h]
  bool *v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B8h] [rbp+1Fh]
  int v28; // [rsp+BCh] [rbp+23h]
  int *v29; // [rsp+C0h] [rbp+27h]
  int v30; // [rsp+C8h] [rbp+2Fh]
  int v31; // [rsp+CCh] [rbp+33h]

  v4 = *a4;
  memset_0(&ProcessInformation, 0, 0x20uLL);
  ProcessInformation = 3;
  v18 = v18 & 0xFFFFFFFE | (v4 != 0);
  v14 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u);
  LODWORD(v8) = v14;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v22 = 0;
    v25 = 0;
    v20 = &v14;
    v16 = *((_QWORD *)a1 + 3);
    v13 = v4 != 0;
    v28 = 0;
    v31 = 0;
    v23 = &v16;
    v26 = &v13;
    v29 = &v15;
    v21 = v11;
    v24 = 8;
    v27 = 1;
    v15 = a3;
    v30 = v11;
    TlgWrite(v9, &unk_180057C74, v10, v8, 6u, &pData);
    LODWORD(v8) = v14;
  }
  return (unsigned int)v8;
}
