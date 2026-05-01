/*
 * XREFs of ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180005AA0
 * Callers:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementApplyForegroundBoost(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  int v4; // ebx
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  int v10; // r10d
  bool ProcessInformation[4]; // [rsp+38h] [rbp-39h] BYREF
  NTSTATUS v13; // [rsp+3Ch] [rbp-35h] BYREF
  int v14; // [rsp+40h] [rbp-31h] BYREF
  BOOL v15; // [rsp+44h] [rbp-2Dh] BYREF
  __int64 v16; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  NTSTATUS *v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  __int64 *v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  int *v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]
  BOOL *v27; // [rsp+A8h] [rbp+37h]
  int v28; // [rsp+B0h] [rbp+3Fh]
  int v29; // [rsp+B4h] [rbp+43h]

  v4 = (int)a4;
  ProcessInformation[0] = (_DWORD)a4 != 0;
  v13 = NtSetInformationProcess(a2, ProcessForegroundInformation, ProcessInformation, 1u);
  LODWORD(v7) = v13;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = &v13;
    v16 = *((_QWORD *)a1 + 3);
    v21 = &v16;
    v24 = &v14;
    v19 = v10;
    v22 = 8;
    v14 = a3;
    v29 = 0;
    v15 = v4 != 0;
    v27 = &v15;
    v25 = v10;
    v28 = v10;
    TlgWrite(v8, &unk_18005A4F2, v9, v7, 6u, &pData);
    LODWORD(v7) = v13;
  }
  return (unsigned int)v7;
}
