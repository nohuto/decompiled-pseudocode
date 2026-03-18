/*
 * XREFs of PsOpenProcess @ 0x14050F290
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x1404751D8 (NtAlpcOpenSenderProcess.c)
 *     NtOpenProcess @ 0x14050F260 (NtOpenProcess.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400948B0 (ObReferenceObjectByPointerWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1400EE570 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsLookupProcessThreadByCid @ 0x140441EF0 (PsLookupProcessThreadByCid.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14050FBC8 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140527F60 (SePrivilegeCheck.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE a6)
{
  _QWORD *v7; // r12
  bool v8; // cl
  KPROCESSOR_MODE v9; // r15
  int v10; // eax
  char v11; // al
  GENERIC_MAPPING *v12; // rbx
  int v13; // ebx
  BOOLEAN v14; // al
  BOOLEAN v15; // bl
  POBJECT_TYPE *v16; // r14
  PEPROCESS v17; // rsi
  int v19; // [rsp+64h] [rbp-2A4h]
  int Flink; // [rsp+70h] [rbp-298h]
  int v21; // [rsp+78h] [rbp-290h] BYREF
  ACCESS_MASK v22; // [rsp+80h] [rbp-288h] BYREF
  int v23; // [rsp+88h] [rbp-280h] BYREF
  HANDLE ProcessId[2]; // [rsp+90h] [rbp-278h] BYREF
  PEPROCESS Process; // [rsp+A0h] [rbp-268h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-260h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-258h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+B8h] [rbp-250h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-230h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+F8h] [rbp-210h] BYREF
  _QWORD v31[2]; // [rsp+110h] [rbp-1F8h] BYREF
  int v32; // [rsp+120h] [rbp-1E8h]
  int v33; // [rsp+124h] [rbp-1E4h]
  struct _SECURITY_SUBJECT_CONTEXT v34; // [rsp+130h] [rbp-1D8h] BYREF
  __int64 v35[28]; // [rsp+1B0h] [rbp-158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+290h] [rbp-78h] BYREF
  ACCESS_MASK *v37; // [rsp+2A0h] [rbp-68h]
  __int64 v38; // [rsp+2A8h] [rbp-60h]
  int *v39; // [rsp+2B0h] [rbp-58h]
  __int64 v40; // [rsp+2B8h] [rbp-50h]

  v7 = (_QWORD *)a1;
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
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    v19 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ProcessId = *a4;
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    v9 = a6;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    v9 = a6;
    if ( a6 )
      v10 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    else
      v10 = *(_DWORD *)(a3 + 24) & 0x11FF2;
    v19 = v10;
    if ( a4 )
    {
      *(_OWORD *)ProcessId = *a4;
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v8 || !v11 )
  {
    v13 = -1073741776;
    goto LABEL_26;
  }
  v12 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  v13 = SepCreateAccessStateFromSubjectContext(&SubjectContext, v31, v35, a2, v12);
  if ( v13 >= 0 )
  {
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectSecurityContext);
    v14 = SePrivilegeCheck(&RequiredPrivileges, &SubjectSecurityContext, v9);
    v15 = v14;
    if ( v9 )
      SePrivilegedServiceAuditAlarm(0LL, &SubjectSecurityContext, &RequiredPrivileges, v14);
    SeReleaseSubjectContext(&SubjectSecurityContext);
    if ( v15 )
    {
      if ( (v32 & 0x2000000) != 0 )
        v33 |= 0x1FFFFFu;
      else
        v33 |= v32;
      v32 = 0;
    }
    if ( ProcessId[1] )
    {
      v13 = PsLookupProcessThreadByCid((__int64)ProcessId, &Process, &Object);
      if ( v13 >= 0 )
      {
        ObfDereferenceObject(Object);
        goto LABEL_17;
      }
    }
    else
    {
      v13 = PsLookupProcessByProcessId(ProcessId[0], &Process);
      if ( v13 >= 0 )
      {
LABEL_17:
        v16 = PsProcessType;
        v26 = 0LL;
        v17 = Process;
        v13 = ObReferenceObjectByPointerWithTag(Process, 0, (POBJECT_TYPE)PsProcessType, v9, 0x6E48624Fu);
        if ( v13 >= 0 )
        {
          if ( !v16 )
            v16 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v17[-1].Spare2[63] ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v17 - 48) >> 8)];
          if ( (v19 & (_DWORD)v16[9]) != 0 || (v17[-1].Spare2[66] & 1) != 0 && v17[-1].InstrumentationCallback )
          {
            ++ObpInvalidOpenByPointer;
            ObfDereferenceObjectWithTag(v17, 0x6E48624Fu);
            v13 = -1073741811;
          }
          else
          {
            v13 = ObpCreateHandle(1LL, v17, 0LL, v31, 0, v19, v9, 0LL, 0, 0LL, &v26);
            if ( v13 < 0 )
              ObfDereferenceObjectWithTag(v17, 0x6E48624Fu);
          }
        }
        SepDeleteAccessState((__int64)v31);
        SeReleaseSubjectContext(&v34);
        Flink = (int)v17[1].Header.WaitListHead.Flink;
        ObfDereferenceObjectWithTag(v17, 0x746C6644u);
        if ( v13 >= 0 )
          *v7 = v26;
        goto LABEL_26;
      }
    }
    SepDeleteAccessState((__int64)v31);
    SeReleaseSubjectContext(&v34);
  }
LABEL_26:
  v23 = v13;
  v22 = a2;
  v21 = Flink;
  UserData.Ptr = (ULONGLONG)&v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v37 = &v22;
  v38 = 4LL;
  v39 = &v23;
  v40 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  return (unsigned int)v13;
}
