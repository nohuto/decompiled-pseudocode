/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180035DD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryCommitSaveCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _BYTE *a4)
{
  int v8; // eax
  const GUID *v9; // r9
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  int v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+34h] [rbp-45h] BYREF
  __int64 v15; // [rsp+38h] [rbp-41h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+44h] [rbp-35h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  __int64 *v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+98h] [rbp+1Fh]
  int *v23; // [rsp+A0h] [rbp+27h]
  __int64 v24; // [rsp+A8h] [rbp+2Fh]

  memset_0(&ProcessInformation, 0, 0x20uLL);
  ProcessInformation = 3;
  if ( (a4[16] & 2) != 0 )
    v8 = v17 | 3;
  else
    v8 = v17 | 5;
  v17 = v8;
  LODWORD(v9) = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u);
  if ( (int)v9 >= 0 )
    LODWORD(v9) = 0;
  v13 = (int)v9;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v20 = 4LL;
    v19 = &v13;
    v15 = *((_QWORD *)a1 + 3);
    v21 = &v15;
    v23 = &v14;
    v22 = 8LL;
    v14 = a3;
    v24 = 4LL;
    TlgWrite(v10, &unk_1800579E8, v11, v9, 5u, &pData);
    LODWORD(v9) = v13;
  }
  return (unsigned int)v9;
}
