/*
 * XREFs of NtGetNextThread @ 0x1405C2B40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14077A398 (PsSynchronizeWithThreadInsertion.c)
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
  char AccessMode; // r13
  ULONG v10; // r12d
  __int64 v11; // rcx
  NTSTATUS result; // eax
  NTSTATUS AccessState; // esi
  PVOID v14; // r14
  _QWORD *v15; // rax
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
  _QWORD v29[28]; // [rsp+130h] [rbp-118h] BYREF

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
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             1024,
             (__int64)PsProcessType,
             AccessMode,
             0x6E457350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( ThreadHandle )
    {
      AccessState = ObpReferenceObjectByHandleWithTag(
                      (ULONG_PTR)ThreadHandle,
                      0,
                      (__int64)PsThreadType,
                      AccessMode,
                      0x6E457350u,
                      &v23,
                      0LL,
                      0LL);
      v14 = Object;
      if ( AccessState < 0 )
        goto LABEL_28;
      v15 = v23;
      if ( *((PVOID *)v23 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v23, 0x6E457350u);
        AccessState = -1073741811;
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
    NextProcessThread = PsGetNextProcessThread((__int64)v14, v15);
    v24 = NextProcessThread;
    if ( NextProcessThread )
    {
      v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v27 = CurrentThread;
      v18 = Object;
      do
      {
        if ( (NextProcessThread[436] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[436] & 2) != 0) )
        {
          AccessState = SeCreateAccessState(
                          (int *)&PassedAccessState,
                          v29,
                          v6,
                          (GENERIC_MAPPING *)((char *)PsProcessType + 76));
          if ( AccessState < 0 )
            goto LABEL_21;
          if ( v20 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          AccessState = ObOpenObjectByPointer(
                          NextProcessThread,
                          v10,
                          &PassedAccessState,
                          0,
                          (POBJECT_TYPE)PsThreadType,
                          AccessMode,
                          &Handle);
          SepDeleteAccessState((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          if ( AccessState >= 0 )
          {
            *v26 = Handle;
            goto LABEL_21;
          }
          if ( AccessState != -1073741790 )
            goto LABEL_21;
        }
        NextProcessThread = PsGetNextProcessThread((__int64)v18, NextProcessThread);
        v24 = NextProcessThread;
        CurrentThread = v27;
        v6 = DesiredAccess;
      }
      while ( NextProcessThread );
      AccessState = -2147483622;
LABEL_21:
      ObfDereferenceObjectWithTag(v18, 0x6E457350u);
      if ( !NextProcessThread )
        return AccessState;
      v19 = NextProcessThread;
LABEL_23:
      ObfDereferenceObjectWithTag(v19, 0x6E457350u);
      return AccessState;
    }
    AccessState = -2147483622;
LABEL_28:
    v19 = v14;
    goto LABEL_23;
  }
  return result;
}
