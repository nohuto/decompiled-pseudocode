/*
 * XREFs of PsOpenThread @ 0x1404D52E0
 * Callers:
 *     NtOpenThread @ 0x1404D5D30 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x1404E032C (NtAlpcOpenSenderThread.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsLookupThreadByThreadId @ 0x1404D75A0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x1404D9260 (PsLookupProcessThreadByCid.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE PreviousMode)
{
  _QWORD *v7; // r12
  bool v8; // cl
  ULONG v9; // esi
  char v10; // al
  KPROCESSOR_MODE AccessMode; // r14
  int AccessState; // edi
  PETHREAD Thread; // [rsp+50h] [rbp-248h] BYREF
  HANDLE ThreadId[2]; // [rsp+58h] [rbp-240h] BYREF
  ULONG HandleAttributes; // [rsp+68h] [rbp-230h]
  int v17; // [rsp+70h] [rbp-228h] BYREF
  int v18; // [rsp+78h] [rbp-220h] BYREF
  ACCESS_MASK v19; // [rsp+80h] [rbp-218h] BYREF
  int v20; // [rsp+88h] [rbp-210h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-208h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-1F8h] BYREF
  __int64 v23[28]; // [rsp+140h] [rbp-158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp-78h] BYREF
  int *v25; // [rsp+230h] [rbp-68h]
  int v26; // [rsp+238h] [rbp-60h]
  int v27; // [rsp+23Ch] [rbp-5Ch]
  ACCESS_MASK *v28; // [rsp+240h] [rbp-58h]
  int v29; // [rsp+248h] [rbp-50h]
  int v30; // [rsp+24Ch] [rbp-4Ch]
  int *v31; // [rsp+250h] [rbp-48h]
  int v32; // [rsp+258h] [rbp-40h]
  int v33; // [rsp+25Ch] [rbp-3Ch]

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
    AccessMode = PreviousMode;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    AccessMode = PreviousMode;
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
    AccessState = -1073741776;
    goto LABEL_24;
  }
  AccessState = SeCreateAccessState((int *)&PassedAccessState, v23, a2, (GENERIC_MAPPING *)((char *)PsThreadType + 76));
  if ( AccessState >= 0 )
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
      AccessState = PsLookupProcessThreadByCid(ThreadId, 0LL, &Thread);
      if ( AccessState >= 0 )
      {
LABEL_22:
        AccessState = ObOpenObjectByPointer(
                        Thread,
                        v9,
                        &PassedAccessState,
                        0,
                        (POBJECT_TYPE)PsThreadType,
                        AccessMode,
                        &Handle);
        SepDeleteAccessState((__int64)&PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
        ObfDereferenceObject(Thread);
        if ( AccessState >= 0 )
          *v7 = Handle;
        goto LABEL_24;
      }
    }
    else
    {
      AccessState = PsLookupThreadByThreadId(ThreadId[1], &Thread);
      if ( AccessState >= 0 )
      {
        ThreadId[0] = (HANDLE)Thread[1].CycleTime;
        goto LABEL_22;
      }
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_24:
  v20 = AccessState;
  v19 = a2;
  v18 = (int)ThreadId[1];
  v17 = (int)ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v17;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v25 = &v18;
  v26 = 4;
  v27 = 0;
  v28 = &v19;
  v29 = 4;
  v30 = 0;
  v31 = &v20;
  v32 = 4;
  v33 = 0;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)AccessState;
}
