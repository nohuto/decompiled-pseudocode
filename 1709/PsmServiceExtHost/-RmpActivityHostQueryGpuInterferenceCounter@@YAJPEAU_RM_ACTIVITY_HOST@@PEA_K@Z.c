/*
 * XREFs of ?RmpActivityHostQueryGpuInterferenceCounter@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180040A50
 * Callers:
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18003DCF0 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003DFE4 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryGpuInterferenceCounter(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int v4; // ecx
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  UINT32 cData; // r10d
  unsigned __int64 v10; // rax
  NTSTATUS v11; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 JobInformation; // [rsp+48h] [rbp-11h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-9h] BYREF
  struct _RM_ACTIVITY_HOST *v14; // [rsp+58h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  NTSTATUS *v16; // [rsp+80h] [rbp+27h]
  UINT32 v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+8Ch] [rbp+33h]
  struct _RM_ACTIVITY_HOST **v19; // [rsp+90h] [rbp+37h]
  int v20; // [rsp+98h] [rbp+3Fh]
  int v21; // [rsp+9Ch] [rbp+43h]

  v4 = *((_DWORD *)a1 + 14);
  if ( !v4 )
  {
    v11 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL)
                                                                                                + 168LL))(
            (char *)a1 + 552,
            *((unsigned int *)a1 + 155),
            (char *)a1 + 88,
            *((unsigned int *)a1 + 156),
            *((_QWORD *)a1 + 3),
            &v13);
    LODWORD(v5) = v11;
    if ( v11 < 0 )
      goto LABEL_4;
    v10 = v13;
    goto LABEL_12;
  }
  if ( v4 == 1 )
  {
    v11 = NtQueryInformationJobObject(*((HANDLE *)a1 + 117), JobObjectJobSetInformation|0x10, &JobInformation, 8u, 0LL);
    LODWORD(v5) = v11;
    if ( v11 < 0 )
      goto LABEL_4;
    v10 = JobInformation;
LABEL_12:
    *a2 = v10;
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  LODWORD(v5) = -1073741585;
  v11 = -1073741585;
LABEL_4:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v16 = &v11;
    v19 = &v14;
    v17 = cData;
    v14 = a1;
    v20 = 8;
    TlgWrite(v6, &unk_18005A8D4, v7, v5, cData, &pData);
    LODWORD(v5) = v11;
  }
  return (unsigned int)v5;
}
