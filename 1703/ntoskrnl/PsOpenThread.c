/*
 * XREFs of PsOpenThread @ 0x1404F33F0
 * Callers:
 *     NtAlpcOpenSenderThread @ 0x140447D5C (NtAlpcOpenSenderThread.c)
 *     NtOpenThread @ 0x1404F33C0 (NtOpenThread.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsLookupProcessThreadByCid @ 0x140441EF0 (PsLookupProcessThreadByCid.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     PsLookupThreadByThreadId @ 0x14050EEE0 (PsLookupThreadByThreadId.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE PreviousMode)
{
  _QWORD *v7; // r12
  char v8; // al
  bool v9; // cl
  ULONG v10; // esi
  KPROCESSOR_MODE AccessMode; // r14
  NTSTATUS v12; // edi
  PETHREAD Thread; // [rsp+50h] [rbp-258h] BYREF
  HANDLE ThreadId[2]; // [rsp+58h] [rbp-250h] BYREF
  ULONG HandleAttributes; // [rsp+68h] [rbp-240h]
  int v17; // [rsp+70h] [rbp-238h] BYREF
  int v18; // [rsp+78h] [rbp-230h] BYREF
  unsigned int v19; // [rsp+80h] [rbp-228h] BYREF
  NTSTATUS v20; // [rsp+88h] [rbp-220h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-218h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-208h] BYREF
  char v23[224]; // [rsp+140h] [rbp-168h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp-88h] BYREF
  int *v25; // [rsp+230h] [rbp-78h]
  int v26; // [rsp+238h] [rbp-70h]
  int v27; // [rsp+23Ch] [rbp-6Ch]
  int *v28; // [rsp+240h] [rbp-68h]
  int v29; // [rsp+248h] [rbp-60h]
  int v30; // [rsp+24Ch] [rbp-5Ch]
  NTSTATUS *v31; // [rsp+250h] [rbp-58h]
  int v32; // [rsp+258h] [rbp-50h]
  int v33; // [rsp+25Ch] [rbp-4Ch]

  v7 = (_QWORD *)a1;
  v8 = 0;
  ThreadId[0] = 0LL;
  ThreadId[1] = 0LL;
  if ( a5 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = *(_QWORD *)(a3 + 16) != 0LL;
    v10 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    HandleAttributes = v10;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ThreadId = *a4;
      v8 = 1;
      v10 = HandleAttributes;
    }
    else
    {
      v8 = 0;
    }
    AccessMode = PreviousMode;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 16) != 0LL;
    AccessMode = PreviousMode;
    if ( PreviousMode )
      v10 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    else
      v10 = *(_DWORD *)(a3 + 24) & 0x11FF2;
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v8 = 1;
    }
  }
  if ( v9 || !v8 )
  {
    v12 = -1073741776;
    goto LABEL_24;
  }
  v12 = SeCreateAccessState(&PassedAccessState, v23, a2, (char *)PsThreadType + 76);
  if ( v12 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    if ( ThreadId[0] )
    {
      v12 = PsLookupProcessThreadByCid((__int64)ThreadId, 0LL, &Thread);
      if ( v12 >= 0 )
      {
LABEL_22:
        v12 = ObOpenObjectByPointer(Thread, v10, &PassedAccessState, 0, (POBJECT_TYPE)PsThreadType, AccessMode, &Handle);
        SepDeleteAccessState((__int64)&PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
        ObfDereferenceObject(Thread);
        if ( v12 >= 0 )
          *v7 = Handle;
        goto LABEL_24;
      }
    }
    else
    {
      v12 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
      if ( v12 >= 0 )
      {
        ThreadId[0] = *(HANDLE *)&Thread[1].CurrentRunTime;
        goto LABEL_22;
      }
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_24:
  v20 = v12;
  v19 = a2;
  v18 = (int)ThreadId[1];
  v17 = (int)ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v17;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v25 = &v18;
  v26 = 4;
  v27 = 0;
  v28 = (int *)&v19;
  v29 = 4;
  v30 = 0;
  v31 = &v20;
  v32 = 4;
  v33 = 0;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v12;
}
