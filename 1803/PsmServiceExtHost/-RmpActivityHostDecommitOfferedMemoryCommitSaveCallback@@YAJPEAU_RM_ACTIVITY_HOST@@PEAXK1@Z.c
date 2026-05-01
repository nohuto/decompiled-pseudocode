/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800542D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryCommitSaveCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _BYTE *a4)
{
  int v8; // eax
  NTSTATUS v9; // r9d
  const struct _TlgProvider_t *v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp-49h] BYREF
  int v13; // [rsp+34h] [rbp-45h] BYREF
  __int64 v14; // [rsp+38h] [rbp-41h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+44h] [rbp-35h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  unsigned int *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  __int64 *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  int *v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]

  memset_0(&ProcessInformation, 0, 0x20uLL);
  ProcessInformation = 3;
  if ( (a4[16] & 2) != 0 )
    v8 = v16 | 3;
  else
    v8 = v16 | 5;
  v16 = v8;
  v9 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u);
  if ( v9 >= 0 )
    v9 = 0;
  v12 = v9;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v19 = 4LL;
    v18 = &v12;
    v14 = *((_QWORD *)a1 + 4);
    v20 = &v14;
    v22 = &v13;
    v21 = 8LL;
    v13 = a3;
    v23 = 4LL;
    TlgWrite(v10, &unk_18007DDEB, 0LL, 0LL, 5u, &pData);
    return v12;
  }
  return (unsigned int)v9;
}
