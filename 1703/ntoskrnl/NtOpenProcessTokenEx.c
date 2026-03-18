/*
 * XREFs of NtOpenProcessTokenEx @ 0x14050EFA0
 * Callers:
 *     NtOpenProcessToken @ 0x14050ED00 (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x1406EB860 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400948B0 (ObReferenceObjectByPointerWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1400EE570 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  ACCESS_MASK v5; // r13d
  KPROCESSOR_MODE PreviousMode; // r15
  int v8; // eax
  ULONG v9; // r14d
  __int64 v10; // rcx
  NTSTATUS result; // eax
  PVOID v12; // rbx
  _QWORD *v13; // rsi
  char *v14; // rdi
  POBJECT_TYPE *v15; // rsi
  NTSTATUS v16; // ebx
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v18; // rbx
  int v19; // [rsp+30h] [rbp-238h]
  PVOID Object; // [rsp+68h] [rbp-200h] BYREF
  void *v22; // [rsp+70h] [rbp-1F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-1E8h] BYREF
  _QWORD v24[4]; // [rsp+A0h] [rbp-1C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v25; // [rsp+C0h] [rbp-1A8h] BYREF
  _QWORD v26[28]; // [rsp+140h] [rbp-128h] BYREF

  v5 = DesiredAccess;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 7666;
  if ( !PreviousMode )
    v8 = 73714;
  v9 = v8 & HandleAttributes;
  if ( PreviousMode )
  {
    v10 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 1699967824, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v12 = Object;
    v13 = (char *)Object + 856;
    v14 = (char *)ObFastReferenceObject((signed __int64 *)Object + 107);
    if ( !v14 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = (signed __int64 *)((char *)Object + 728);
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 728, 0LL);
      v14 = (char *)ObFastReferenceObjectLocked(v13);
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((ULONG_PTR)v18);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v12 = Object;
      v5 = DesiredAccess;
    }
    ObfDereferenceObjectWithTag(v12, 0x65537350u);
    v15 = SeTokenObjectType;
    v22 = 0LL;
    v16 = ObReferenceObjectByPointerWithTag(v14, 0, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, 0x6E48624Fu);
    if ( v16 >= 0 )
    {
      if ( !v15 )
        v15 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)];
      if ( (v9 & (_DWORD)v15[9]) != 0 || (*(v14 - 21) & 1) != 0 && *((_QWORD *)v14 - 2) )
      {
        ++ObpInvalidOpenByPointer;
        ObfDereferenceObjectWithTag(v14, 0x6E48624Fu);
        v16 = -1073741811;
      }
      else
      {
        SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
        v16 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v24,
                v26,
                v5,
                (PGENERIC_MAPPING)((char *)v15 + 76));
        if ( v16 < 0 )
        {
          ObfDereferenceObjectWithTag(v14, 0x6E48624Fu);
        }
        else
        {
          LOBYTE(v19) = PreviousMode;
          v16 = ObpCreateHandle(1LL, v14, 0LL, v24, 0, v9, v19, 0LL, 0, 0LL, &v22);
          if ( v16 < 0 )
            ObfDereferenceObjectWithTag(v14, 0x6E48624Fu);
          SepDeleteAccessState((__int64)v24);
          SeReleaseSubjectContext(&v25);
        }
      }
    }
    ObfDereferenceObject(v14);
    if ( v16 >= 0 )
      *TokenHandle = v22;
    return v16;
  }
  return result;
}
