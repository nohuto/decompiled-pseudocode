/*
 * XREFs of ?RmpEnforcementInfoInitializeProcess@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAX@Z @ 0x18003AF80
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeProcess(struct _RM_OBJECT_HEADER *P, int a2, void *a3)
{
  const GUID *v5; // r8
  const GUID *cData; // r9
  const GUID *v7; // r8
  const GUID *v8; // r9
  const GUID *v9; // r8
  const GUID *v10; // r9
  const GUID *v11; // r8
  const GUID *v12; // r9
  const GUID *v13; // r8
  const GUID *v14; // r9
  NTSTATUS v16; // [rsp+30h] [rbp-79h] BYREF
  char v17[4]; // [rsp+34h] [rbp-75h] BYREF
  void *JobHandle; // [rsp+38h] [rbp-71h] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-69h] BYREF
  _QWORD JobInformation[2]; // [rsp+48h] [rbp-61h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  NTSTATUS *v24; // [rsp+C0h] [rbp+17h]
  const GUID *v25; // [rsp+C8h] [rbp+1Fh]
  const char *v26; // [rsp+D0h] [rbp+27h]
  __int64 v27; // [rsp+D8h] [rbp+2Fh]

  ProcessHandle = 0LL;
  JobHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ClientId.UniqueProcess = (HANDLE)a2;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  RmpObjectAddRef(P);
  v16 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
  if ( v16 >= 0 )
  {
    v16 = NtCreateJobObject(&JobHandle, 0x1F003Fu, &ObjectAttributes);
    if ( v16 >= 0 )
    {
      JobInformation[0] = P;
      JobInformation[1] = a3;
      v16 = NtSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation, JobInformation, 0x10u);
      if ( v16 >= 0 )
      {
        v17[0] = 1;
        v16 = NtSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation|0x10, v17, 1u);
        if ( v16 >= 0 )
        {
          v16 = NtAssignProcessToJobObject(JobHandle, ProcessHandle);
          if ( v16 >= 0 )
          {
            RmpObjectAddRef(P);
            *((_QWORD *)P + 117) = JobHandle;
            *((_QWORD *)P + 116) = ProcessHandle;
            v16 = 0;
            JobHandle = 0LL;
            ProcessHandle = 0LL;
          }
          else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v25 = v14;
            v24 = &v16;
            v26 = "AssignProcessToJob";
            v27 = 19LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058B55, v13, v14, (UINT32)v14, &pData);
          }
        }
        else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v25 = v12;
          v24 = &v16;
          v26 = "SetJobTimerVirtualization";
          v27 = 26LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058B55, v11, v12, (UINT32)v12, &pData);
        }
      }
      else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v25 = v10;
        v24 = &v16;
        v26 = "SetJobCompletionPort";
        v27 = 21LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058B00, v9, v10, (UINT32)v10, &pData);
      }
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v25 = v8;
      v24 = &v16;
      v26 = "CreateJobObject";
      v27 = 16LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058B55, v7, v8, (UINT32)v8, &pData);
    }
  }
  else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v25 = cData;
    v24 = &v16;
    v26 = "NtOpenProcess";
    v27 = 14LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058B55, v5, cData, (UINT32)cData, &pData);
  }
  RmpObjectRelease((char *)P);
  if ( JobHandle )
  {
    NtTerminateJobObject(JobHandle, 0);
    CloseHandle(JobHandle);
  }
  if ( ProcessHandle )
  {
    NtTerminateProcess(ProcessHandle, 0);
    CloseHandle(ProcessHandle);
  }
  return (unsigned int)v16;
}
