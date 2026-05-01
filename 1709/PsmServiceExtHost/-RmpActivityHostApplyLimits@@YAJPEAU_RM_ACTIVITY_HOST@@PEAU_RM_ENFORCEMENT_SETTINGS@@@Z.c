/*
 * XREFs of ?RmpActivityHostApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18003A1CC
 * Callers:
 *     ?RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18003AC78 (-RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpActivityHostApplyLimits(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  void *v2; // r15
  void *v4; // r12
  const GUID *v5; // r9
  const GUID *v6; // r8
  const GUID *v7; // r8
  unsigned int v8; // eax
  const GUID *v9; // r8
  __int64 v10; // rsi
  const GUID *v11; // r8
  const GUID *v12; // r8
  __int64 v13; // rsi
  const GUID *v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  const GUID *v17; // r8
  signed int LastError; // eax
  NTSTATUS InformationJobObject; // [rsp+30h] [rbp-D0h] BYREF
  __int64 JobInformation; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v22[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+70h] [rbp-90h]
  _BYTE ProcessInformation[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+D0h] [rbp-30h]
  _BYTE v30[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+1A0h] [rbp+A0h]
  __int64 v35; // [rsp+1A8h] [rbp+A8h]
  const char *v36; // [rsp+1B0h] [rbp+B0h]
  __int64 v37; // [rsp+1B8h] [rbp+B8h]

  v2 = (void *)*((_QWORD *)a1 + 117);
  v4 = (void *)*((_QWORD *)a1 + 116);
  memset_0(v30, 0, 0x98uLL);
  InformationJobObject = NtQueryInformationJobObject(
                           v2,
                           MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                           &JobInformation,
                           8u,
                           0LL);
  LODWORD(v5) = InformationJobObject;
  if ( InformationJobObject >= 0 )
  {
    if ( (JobInformation & 1) != 0
      && (JobInformation = 0LL,
          InformationJobObject = NtSetInformationJobObject(
                                   v2,
                                   MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                                   &JobInformation,
                                   8u),
          LODWORD(v5) = InformationJobObject,
          InformationJobObject < 0) )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v35 = 4LL;
        p_InformationJobObject = &InformationJobObject;
        v36 = "DisableJobRateControl";
        v37 = 22LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058808, v7, v5, 4u, &pData);
        goto LABEL_5;
      }
    }
    else
    {
      if ( *((_DWORD *)a2 + 12) == 100 )
        goto LABEL_20;
      JobInformation = 1LL;
      if ( (*((_BYTE *)a2 + 52) & 1) != 0 )
        LODWORD(JobInformation) = 5;
      v8 = 100 * *((_DWORD *)a2 + 12);
      if ( v8 <= 1 )
        v8 = 1;
      HIDWORD(JobInformation) = v8;
      InformationJobObject = NtSetInformationJobObject(
                               v2,
                               MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                               &JobInformation,
                               8u);
      LODWORD(v5) = InformationJobObject;
      if ( InformationJobObject >= 0 )
      {
LABEL_20:
        v10 = *((_QWORD *)a2 + 3);
        if ( v10
          && (memset_0(ProcessInformation, 0, 0x58uLL),
              v29 = 4,
              v27 = 81920LL,
              v28 = v10,
              InformationJobObject = NtSetInformationProcess(v4, ProcessQuotaLimits, ProcessInformation, 0x58u),
              LODWORD(v5) = InformationJobObject,
              InformationJobObject < 0) )
        {
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v35 = 4LL;
            p_InformationJobObject = &InformationJobObject;
            v36 = "SetProcessQuotaLimits";
            v37 = 22LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058808, v11, v5, 4u, &pData);
            goto LABEL_5;
          }
        }
        else
        {
          InformationJobObject = NtQueryInformationJobObject(v2, JobObjectExtendedLimitInformation, v30, 0x98u, 0LL);
          LODWORD(v5) = InformationJobObject;
          if ( InformationJobObject >= 0 )
          {
            v13 = *((_QWORD *)a2 + 2);
            if ( v13 == -1 )
              v13 = 0LL;
            if ( v32 != v13 )
            {
              memset_0(v30, 0, 0x98uLL);
              if ( v13 )
              {
                v31 = 512;
                v32 = v13;
              }
              else
              {
                v31 = 0;
              }
              LODWORD(v5) = NtSetInformationJobObject(v2, JobObjectExtendedLimitInformation, v30, 0x98u);
              InformationJobObject = (int)v5;
            }
            if ( (int)v5 >= 0 )
            {
              InformationJobObject = NtQueryInformationJobObject(v2, MaxJobObjectInfoClass, v22, 0x38u, 0LL);
              memset_0(v22, 0, 0x38uLL);
              if ( (unsigned __int64)(*((_QWORD *)a2 + 1) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
              {
                v15 = v25 & 0xFFFFFDFF;
                v24 = 0LL;
              }
              else
              {
                v15 = v25 | 0x200;
                v24 = *((_QWORD *)a2 + 1);
              }
              if ( (unsigned __int64)(*(_QWORD *)a2 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
              {
                v16 = v15 & 0xFFFF7FFF;
                v23 = 0LL;
              }
              else
              {
                v16 = v15 | 0x8000;
                v23 = *(_QWORD *)a2;
              }
              v25 = v16 | 0x200000;
              InformationJobObject = NtSetInformationJobObject(v2, MaxJobObjectInfoClass, v22, 0x38u);
              LODWORD(v5) = InformationJobObject;
              if ( InformationJobObject >= 0 )
              {
                if ( SetPriorityClass(v4, *((_DWORD *)a2 + 11)) )
                {
                  LODWORD(v5) = 0;
                  InformationJobObject = 0;
                  goto LABEL_58;
                }
                LastError = GetLastError();
                LODWORD(v5) = LastError;
                if ( LastError > 0 )
                {
                  LODWORD(v5) = (unsigned __int16)LastError | 0xC0070000;
                  InformationJobObject = (int)v5;
                }
                else
                {
                  InformationJobObject = LastError;
                }
                if ( hProvider <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
                  goto LABEL_58;
              }
              else if ( hProvider <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
              {
                goto LABEL_58;
              }
              v35 = 4LL;
              p_InformationJobObject = &InformationJobObject;
              v36 = "SetCommitWarningLevel";
              v37 = 22LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058808, v17, v5, 4u, &pData);
              goto LABEL_5;
            }
            if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
            {
              v35 = 4LL;
              p_InformationJobObject = &InformationJobObject;
              v36 = "SetJobExtendedLimitInfo";
              v37 = 24LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058808, v14, v5, 4u, &pData);
              goto LABEL_5;
            }
          }
          else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v35 = 4LL;
            p_InformationJobObject = &InformationJobObject;
            v36 = "QueryJobExtendedLimitInfo";
            v37 = 26LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058808, v12, v5, 4u, &pData);
            goto LABEL_5;
          }
        }
      }
      else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v35 = 4LL;
        p_InformationJobObject = &InformationJobObject;
        v36 = "EnableJobRateControl";
        v37 = 21LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058808, v9, v5, 4u, &pData);
        goto LABEL_5;
      }
    }
  }
  else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v35 = 4LL;
    p_InformationJobObject = &InformationJobObject;
    v36 = "QueryJobRateControl";
    v37 = 20LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058808, v6, v5, 4u, &pData);
LABEL_5:
    LODWORD(v5) = InformationJobObject;
  }
LABEL_58:
  if ( (int)v5 < 0 )
  {
    NtTerminateJobObject(v2, -1073740662);
    LODWORD(v5) = InformationJobObject;
  }
  return (unsigned int)v5;
}
