/*
 * XREFs of ?RmpSystemQueryActivityHostRawCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180007840
 * Callers:
 *     ?RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180001B44 (-RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RmpSystemQueryActivityHostRawCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v5; // ecx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // r12d
  __int64 v10; // r13
  __int64 v11; // rax
  const GUID *v12; // r9
  NTSTATUS result; // eax
  const GUID *v14; // r8
  const GUID *v15; // r8
  const GUID *v16; // r8
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  NTSTATUS v18; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD JobInformation[5]; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  int *v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  __int64 *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  int *v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v31; // [rsp+E8h] [rbp-20h] BYREF
  int *v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  __int64 *v34; // [rsp+118h] [rbp+10h]
  __int64 v35; // [rsp+120h] [rbp+18h]

  v5 = *((_DWORD *)a1 + 14);
  v7 = 0LL;
  v8 = 0LL;
  if ( !v5 )
  {
    v9 = *((_DWORD *)a1 + 156);
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL);
    v11 = *((_QWORD *)a1 + 3);
    LODWORD(v20) = *((_DWORD *)a1 + 155);
    v19 = v11;
    v17 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, unsigned __int64 *, _QWORD))(v10 + 104))(
            (char *)a1 + 552,
            (unsigned int)v20,
            (char *)a1 + 88,
            v9,
            v11,
            &v22,
            0LL);
    LODWORD(v12) = v17;
    if ( v17 < 0 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v33 = 4LL;
        v32 = &v17;
        v34 = &v19;
        v35 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055727, v15, v12, 4u, &v31);
        LODWORD(v12) = v17;
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, unsigned __int64 *))(v10 + 176))(
              (char *)a1 + 552,
              (unsigned int)v20,
              (char *)a1 + 88,
              v9,
              v19,
              &v21);
      LODWORD(v12) = v17;
      if ( v17 < 0 )
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v26 = 4LL;
          v25 = &v17;
          v27 = &v19;
          v28 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005576F, v16, v12, 4u, &pData);
          LODWORD(v12) = v17;
        }
      }
      else
      {
        v8 = v21 << 12;
        if ( is_mul_ok(v21, 0x1000uLL) )
        {
          LODWORD(v12) = 0;
        }
        else
        {
          v8 = -1LL;
          LODWORD(v12) = -1073741675;
        }
        v7 = v22;
      }
    }
    if ( (int)v12 >= 0 )
      goto LABEL_8;
    return (int)v12;
  }
  if ( v5 != 1 )
    return -1073741585;
  result = NtQueryInformationJobObject(*((HANDLE *)a1 + 117), MaxJobObjectInfoClass|0x10, JobInformation, 0x28u, 0LL);
  v18 = result;
  if ( result >= 0 )
  {
    v7 = JobInformation[0];
    v8 = JobInformation[2];
LABEL_8:
    *a2 = v7;
    result = 0;
    *a3 = v8;
    return result;
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v26 = 4LL;
      v25 = &v18;
      v19 = *((_QWORD *)a1 + 3);
      v27 = &v19;
      v17 = *((_DWORD *)a1 + 22);
      v29 = &v17;
      v28 = 8LL;
      v30 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A535, v14, v12, 5u, &pData);
      return v18;
    }
    return (int)v12;
  }
  return result;
}
