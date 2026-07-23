/*
 * XREFs of NtGetNextThread @ 0x14041F564
 * Callers:
 *     <none>
 * Callees:
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1406DFCF0 (PsSynchronizeWithThreadInsertion.c)
 */

NTSTATUS __cdecl NtGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  ACCESS_MASK v6; // esi
  KPROCESSOR_MODE AccessMode; // r13
  ULONG v10; // r12d
  __int64 v11; // rcx
  NTSTATUS result; // eax
  int v13; // esi
  PVOID v14; // r14
  PVOID v15; // rax
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v18; // r14
  void *v19; // rcx
  bool v20; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  PVOID v23; // [rsp+50h] [rbp-1F8h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-1F0h]
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  PHANDLE v26; // [rsp+68h] [rbp-1E0h]
  struct _KTHREAD *v27; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v29[224]; // [rsp+130h] [rbp-118h] BYREF

  v6 = DesiredAccess;
  v26 = NewThreadHandle;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v10 = HandleAttributes & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v11 = (__int64)NewThreadHandle;
    if ( (unsigned __int64)NewThreadHandle >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  *NewThreadHandle = 0LL;
  if ( Flags )
    return -1073741811;
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 1850045264, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( ThreadHandle )
    {
      v13 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 1850045264, (__int64)&v23, 0LL, 0LL);
      v14 = Object;
      if ( v13 < 0 )
        goto LABEL_28;
      v15 = v23;
      if ( *((PVOID *)v23 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v23, 0x6E457350u);
        v13 = -1073741811;
        goto LABEL_28;
      }
      v6 = DesiredAccess;
    }
    else
    {
      v15 = 0LL;
      v23 = 0LL;
      v14 = Object;
    }
    NextProcessThread = (_DWORD *)PsGetNextProcessThread(v14, v15);
    v24 = NextProcessThread;
    if ( NextProcessThread )
    {
      v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v27 = CurrentThread;
      v18 = Object;
      do
      {
        if ( (NextProcessThread[434] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[434] & 2) != 0) )
        {
          v13 = SeCreateAccessState(&PassedAccessState, v29, v6, (char *)PsProcessType + 76);
          if ( v13 < 0 )
            goto LABEL_21;
          if ( v20 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v13 = ObOpenObjectByPointer(
                  NextProcessThread,
                  v10,
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  &Handle);
          SepDeleteAccessState((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          if ( v13 >= 0 )
          {
            *v26 = Handle;
            goto LABEL_21;
          }
          if ( v13 != -1073741790 )
            goto LABEL_21;
        }
        NextProcessThread = (_DWORD *)PsGetNextProcessThread(v18, NextProcessThread);
        v24 = NextProcessThread;
        CurrentThread = v27;
        v6 = DesiredAccess;
      }
      while ( NextProcessThread );
      v13 = -2147483622;
LABEL_21:
      ObfDereferenceObjectWithTag(v18, 0x6E457350u);
      if ( !NextProcessThread )
        return v13;
      v19 = NextProcessThread;
LABEL_23:
      ObfDereferenceObjectWithTag(v19, 0x6E457350u);
      return v13;
    }
    v13 = -2147483622;
LABEL_28:
    v19 = v14;
    goto LABEL_23;
  }
  return result;
}
