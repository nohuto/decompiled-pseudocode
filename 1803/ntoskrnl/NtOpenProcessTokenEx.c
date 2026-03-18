/*
 * XREFs of NtOpenProcessTokenEx @ 0x14059A540
 * Callers:
 *     NtOpenProcessToken @ 0x140568E20 (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x140787398 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400F0E30 (ObReferenceObjectByPointerWithTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int v7; // esi
  ULONG v8; // esi
  __int64 v9; // rdx
  NTSTATUS result; // eax
  PVOID v11; // rbx
  _QWORD *v12; // r14
  char *v13; // rdi
  POBJECT_TYPE *v14; // r14
  NTSTATUS v15; // ebx
  signed __int64 *v16; // rbx
  int v17; // [rsp+30h] [rbp-238h]
  PVOID Object; // [rsp+60h] [rbp-208h] BYREF
  void *v19; // [rsp+68h] [rbp-200h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-1F8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-1E8h] BYREF
  int v22[8]; // [rsp+A0h] [rbp-1C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v23; // [rsp+C0h] [rbp-1A8h] BYREF
  _QWORD v24[28]; // [rsp+140h] [rbp-128h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 73714;
  if ( PreviousMode )
    v7 = 7666;
  v8 = HandleAttributes & v7;
  if ( PreviousMode )
  {
    v9 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x65537350u, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v11 = Object;
    v12 = (char *)Object + 856;
    v13 = (char *)ObFastReferenceObject((signed __int64 *)Object + 107);
    if ( !v13 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = (signed __int64 *)((char *)Object + 728);
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 728, 0LL);
      v13 = (char *)ObFastReferenceObjectLocked(v12);
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v11 = Object;
    }
    ObfDereferenceObjectWithTag(v11, 0x65537350u);
    v14 = SeTokenObjectType;
    v19 = 0LL;
    v15 = ObReferenceObjectByPointerWithTag(v13, 0, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, 0x6E48624Fu);
    if ( v15 >= 0 )
    {
      if ( !v14 )
        v14 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8)];
      if ( (v8 & (_DWORD)v14[9]) != 0 || (*(v13 - 21) & 1) != 0 && *((_QWORD *)v13 - 2) )
      {
        ++ObpInvalidOpenByPointer;
        ObfDereferenceObjectWithTag(v13, 0x6E48624Fu);
        v15 = -1073741811;
      }
      else
      {
        SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
        v15 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v22,
                v24,
                DesiredAccess,
                (PGENERIC_MAPPING)((char *)v14 + 76));
        if ( v15 < 0 )
        {
          ObfDereferenceObjectWithTag(v13, 0x6E48624Fu);
        }
        else
        {
          LOBYTE(v17) = PreviousMode;
          v15 = ObpCreateHandle(1LL, v13, 0LL, v22, 0, v8, v17, 0LL, 0, 0LL, &v19);
          if ( v15 < 0 )
            ObfDereferenceObjectWithTag(v13, 0x6E48624Fu);
          SepDeleteAccessState((__int64)v22);
          SeReleaseSubjectContext(&v23);
        }
      }
    }
    ObfDereferenceObject(v13);
    if ( v15 >= 0 )
      *TokenHandle = v19;
    return v15;
  }
  return result;
}
