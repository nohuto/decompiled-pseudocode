/*
 * XREFs of PsOpenThread @ 0x14046BF70
 * Callers:
 *     NtAlpcOpenSenderThread @ 0x140468EC8 (NtAlpcOpenSenderThread.c)
 *     NtOpenThread @ 0x14046BF40 (NtOpenThread.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     PsLookupProcessThreadByCid @ 0x14046C560 (PsLookupProcessThreadByCid.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     PsLookupThreadByThreadId @ 0x1404C5690 (PsLookupThreadByThreadId.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  bool v8; // cl
  ULONG v9; // esi
  char v10; // al
  NTSTATUS v11; // edi
  PETHREAD Thread; // [rsp+50h] [rbp-248h] BYREF
  HANDLE ThreadId[2]; // [rsp+58h] [rbp-240h] BYREF
  ULONG HandleAttributes; // [rsp+68h] [rbp-230h]
  int v16; // [rsp+70h] [rbp-228h] BYREF
  int v17; // [rsp+78h] [rbp-220h] BYREF
  unsigned int v18; // [rsp+80h] [rbp-218h] BYREF
  NTSTATUS v19; // [rsp+88h] [rbp-210h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-208h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-1F8h] BYREF
  char v22[224]; // [rsp+140h] [rbp-158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp-78h] BYREF
  int *v24; // [rsp+230h] [rbp-68h]
  int v25; // [rsp+238h] [rbp-60h]
  int v26; // [rsp+23Ch] [rbp-5Ch]
  int *v27; // [rsp+240h] [rbp-58h]
  int v28; // [rsp+248h] [rbp-50h]
  int v29; // [rsp+24Ch] [rbp-4Ch]
  NTSTATUS *v30; // [rsp+250h] [rbp-48h]
  int v31; // [rsp+258h] [rbp-40h]
  int v32; // [rsp+25Ch] [rbp-3Ch]

  v7 = (_QWORD *)a1;
  ThreadId[0] = 0LL;
  ThreadId[1] = 0LL;
  if ( a5 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    v9 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    HandleAttributes = v9;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ThreadId = *a4;
      v10 = 1;
      v9 = HandleAttributes;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    v9 = *(_DWORD *)(a3 + 24) & (PreviousMode != 0 ? 7666 : 73714);
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v8 || !v10 )
  {
    v11 = -1073741776;
    goto LABEL_23;
  }
  v11 = SeCreateAccessState(&PassedAccessState, v22, a2, (char *)PsThreadType + 76);
  if ( v11 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    if ( ThreadId[0] )
    {
      v11 = PsLookupProcessThreadByCid(ThreadId, 0LL, &Thread);
      if ( v11 >= 0 )
      {
LABEL_21:
        v11 = ObOpenObjectByPointer(
                Thread,
                v9,
                &PassedAccessState,
                0,
                (POBJECT_TYPE)PsThreadType,
                PreviousMode,
                &Handle);
        SepDeleteAccessState((__int64)&PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
        ObfDereferenceObject(Thread);
        if ( v11 >= 0 )
          *v7 = Handle;
        goto LABEL_23;
      }
    }
    else
    {
      v11 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
      if ( v11 >= 0 )
      {
        ThreadId[0] = (HANDLE)Thread[1].CycleTime;
        goto LABEL_21;
      }
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_23:
  v19 = v11;
  v18 = a2;
  v17 = (int)ThreadId[1];
  v16 = (int)ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v16;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v24 = &v17;
  v25 = 4;
  v26 = 0;
  v27 = (int *)&v18;
  v28 = 4;
  v29 = 0;
  v30 = &v19;
  v31 = 4;
  v32 = 0;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v11;
}
