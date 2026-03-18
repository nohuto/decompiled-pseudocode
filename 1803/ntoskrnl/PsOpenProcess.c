/*
 * XREFs of PsOpenProcess @ 0x14059A0D0
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x1404DDA8C (NtAlpcOpenSenderProcess.c)
 *     NtOpenProcess @ 0x14059A0A0 (NtOpenProcess.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SepPrivilegeCheck @ 0x140105560 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404D5720 (SePrivilegedServiceAuditAlarm.c)
 *     PsLookupProcessThreadByCid @ 0x1404D9260 (PsLookupProcessThreadByCid.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(unsigned __int64 a1, ACCESS_MASK a2, __int64 a3, _OWORD *a4, char a5, char a6)
{
  _QWORD *v7; // r14
  char v8; // al
  bool v9; // cl
  char v10; // di
  GENERIC_MAPPING *v11; // rbx
  int v12; // ebx
  LUID v13; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  char v15; // bl
  PEPROCESS v16; // rdi
  int v18; // edx
  KPROCESSOR_MODE AccessMode; // [rsp+28h] [rbp-2B0h]
  int HandleAttributes; // [rsp+44h] [rbp-294h]
  int Flink; // [rsp+50h] [rbp-288h]
  int v22; // [rsp+58h] [rbp-280h] BYREF
  ACCESS_MASK v23; // [rsp+60h] [rbp-278h] BYREF
  int v24; // [rsp+68h] [rbp-270h] BYREF
  HANDLE ProcessId[2]; // [rsp+70h] [rbp-268h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-258h] BYREF
  PVOID Object; // [rsp+88h] [rbp-250h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-248h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v29; // [rsp+98h] [rbp-240h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-220h] BYREF
  _DWORD v31[2]; // [rsp+D8h] [rbp-200h] BYREF
  LUID v32; // [rsp+E0h] [rbp-1F8h] BYREF
  int v33; // [rsp+E8h] [rbp-1F0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v35[28]; // [rsp+190h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+270h] [rbp-68h] BYREF
  ACCESS_MASK *v37; // [rsp+280h] [rbp-58h]
  __int64 v38; // [rsp+288h] [rbp-50h]
  int *v39; // [rsp+290h] [rbp-48h]
  __int64 v40; // [rsp+298h] [rbp-40h]

  v7 = (_QWORD *)a1;
  v8 = 0;
  ProcessId[0] = 0LL;
  ProcessId[1] = 0LL;
  Flink = -1;
  if ( a5 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = *(_QWORD *)(a3 + 16) != 0LL;
    HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ProcessId = *a4;
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    v10 = a6;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 16) != 0LL;
    v18 = 73714;
    v10 = a6;
    if ( a6 )
      v18 = 7666;
    HandleAttributes = *(_DWORD *)(a3 + 24) & v18;
    if ( a4 )
    {
      *(_OWORD *)ProcessId = *a4;
      v8 = 1;
    }
  }
  if ( v9 || !v8 )
  {
    v12 = -1073741776;
    goto LABEL_29;
  }
  v11 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  v12 = SepCreateAccessStateFromSubjectContext(&SubjectContext, (int *)&PassedAccessState, v35, a2, v11);
  if ( v12 >= 0 )
  {
    v13 = SeDebugPrivilege;
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &v29);
    v31[0] = 1;
    v31[1] = 1;
    v32 = v13;
    v33 = 0;
    if ( v10 )
    {
      ClientToken = v29.ClientToken;
      if ( !v29.ClientToken )
      {
        ClientToken = v29.PrimaryToken;
LABEL_18:
        v15 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v32, 1u, 1, v10);
        goto LABEL_19;
      }
      if ( v29.ImpersonationLevel >= SecurityImpersonation )
        goto LABEL_18;
      v15 = 0;
    }
    else
    {
      v15 = 1;
    }
LABEL_19:
    if ( v10 )
      SePrivilegedServiceAuditAlarm(0, (__int64 *)&v29, (__int64)v31, v15);
    SeReleaseSubjectContext(&v29);
    if ( v15 )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    if ( ProcessId[1] )
    {
      v12 = PsLookupProcessThreadByCid((__int64)ProcessId, &Process, &Object);
      if ( v12 >= 0 )
      {
        ObfDereferenceObject(Object);
LABEL_27:
        AccessMode = v10;
        v16 = Process;
        v12 = ObOpenObjectByPointer(
                Process,
                HandleAttributes,
                &PassedAccessState,
                0,
                (POBJECT_TYPE)PsProcessType,
                AccessMode,
                &Handle);
        SepDeleteAccessState((__int64)&PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
        Flink = (int)v16[1].Header.WaitListHead.Flink;
        ObfDereferenceObjectWithTag(v16, 0x746C6644u);
        if ( v12 >= 0 )
          *v7 = Handle;
        goto LABEL_29;
      }
    }
    else
    {
      v12 = PsLookupProcessByProcessId(ProcessId[0], &Process);
      if ( v12 >= 0 )
        goto LABEL_27;
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_29:
  v24 = v12;
  v23 = a2;
  v22 = Flink;
  UserData.Ptr = (ULONGLONG)&v22;
  *(_QWORD *)&UserData.Size = 4LL;
  v37 = &v23;
  v38 = 4LL;
  v39 = &v24;
  v40 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  return (unsigned int)v12;
}
