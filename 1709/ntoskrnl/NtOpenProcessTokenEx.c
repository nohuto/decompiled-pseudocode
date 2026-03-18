/*
 * XREFs of NtOpenProcessTokenEx @ 0x1404C5240
 * Callers:
 *     NtOpenProcessToken @ 0x1404C5C70 (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x140723ACC (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140088FC0 (ObReferenceObjectByPointerWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  PHANDLE v4; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int v6; // esi
  ULONG v7; // esi
  void *v8; // r12
  NTSTATUS result; // eax
  PVOID v10; // rbx
  _QWORD *v11; // r14
  char *v12; // rdi
  POBJECT_TYPE *v13; // r14
  NTSTATUS Handle; // ebx
  _KPROCESS *Process; // r15
  struct _KTHREAD *v16; // rbx
  unsigned __int64 *v17; // r12
  ULONG_PTR v18; // rbx
  __int64 v19; // rdx
  signed __int64 *v20; // rbx
  signed __int64 *p_Lock; // r15
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v23; // rbx
  PVOID Object; // [rsp+68h] [rbp-220h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-218h]
  struct _KTHREAD *v27; // [rsp+78h] [rbp-210h]
  PHANDLE v28; // [rsp+80h] [rbp-208h]
  void *v29; // [rsp+88h] [rbp-200h] BYREF
  PVOID v30; // [rsp+90h] [rbp-1F8h]
  __int128 v31; // [rsp+98h] [rbp-1F0h] BYREF
  ULONG_PTR v32; // [rsp+A8h] [rbp-1E0h]
  struct _LIST_ENTRY *Flink; // [rsp+B0h] [rbp-1D8h]
  _QWORD v34[4]; // [rsp+C0h] [rbp-1C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-1A8h] BYREF
  _QWORD v36[28]; // [rsp+160h] [rbp-128h] BYREF

  v4 = TokenHandle;
  v28 = TokenHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 73714;
  if ( PreviousMode )
    v6 = 7666;
  v7 = HandleAttributes & v6;
  if ( PreviousMode )
  {
    v19 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v19 = *(_QWORD *)v19;
  }
  v8 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             4096,
             (__int64)PsProcessType,
             KeGetCurrentThread()->PreviousMode,
             1699967824,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v10 = Object;
    v11 = (char *)Object + 856;
    v12 = (char *)ObFastReferenceObject((signed __int64 *)Object + 107);
    if ( !v12 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v23 = (signed __int64 *)((char *)Object + 728);
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 728, 0LL);
      v12 = (char *)ObFastReferenceObjectLocked(v11);
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v10 = Object;
      v8 = 0LL;
    }
    v30 = v12;
    ObfDereferenceObjectWithTag(v10, 0x65537350u);
    v13 = SeTokenObjectType;
    v29 = 0LL;
    Handle = ObReferenceObjectByPointerWithTag(v12, 0, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, 0x6E48624Fu);
    if ( Handle >= 0 )
    {
      if ( !v13 )
        v13 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)];
      if ( (v7 & (_DWORD)v13[9]) != 0 || (*(v12 - 21) & 1) != 0 && *((_QWORD *)v12 - 2) )
      {
        ++ObpInvalidOpenByPointer;
        ObfDereferenceObjectWithTag(v12, 0x6E48624Fu);
        Handle = -1073741811;
      }
      else
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v16 = KeGetCurrentThread();
        Flink = Process[1].Header.WaitListHead.Flink;
        if ( v16 && (*(_DWORD *)(&v16[1].SwapListEntry + 1) & 8) != 0 )
        {
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)&v16[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v16[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&v16[1].SwapListEntry + 1) & 8) != 0 )
          {
            v8 = (void *)(*(_QWORD *)((char *)&v16[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v8);
            DWORD2(v31) = *((_DWORD *)&v16[1].0 + 1) & 3;
          }
          v20 = (signed __int64 *)BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v20);
          KeAbPostRelease((ULONG_PTR)v20);
          KeLeaveCriticalRegionThread((__int64)v27);
        }
        *(_QWORD *)&v31 = v8;
        v17 = &Process[1].Affinity.Bitmap[5];
        v18 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
        if ( !v18 )
        {
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
          p_Lock = (signed __int64 *)&Process[1].Header.Lock;
          ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
          v18 = ObFastReferenceObjectLocked(v17);
          if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(p_Lock);
          KeAbPostRelease((ULONG_PTR)p_Lock);
          KeLeaveCriticalRegionThread((__int64)v27);
        }
        v32 = v18;
        if ( SeTokenLeakTracking )
        {
          if ( v18 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 1144) + 284LL));
            if ( v18 == SepTokenLeakToken )
              __debugbreak();
          }
          if ( (_QWORD)v31 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v31 + 1144) + 284LL));
            if ( (_QWORD)v31 == SepTokenLeakToken )
              __debugbreak();
          }
        }
        Handle = SepCreateAccessStateFromSubjectContext(
                   &v31,
                   v34,
                   v36,
                   DesiredAccess,
                   (PGENERIC_MAPPING)((char *)v13 + 76));
        if ( Handle < 0 )
        {
          ObfDereferenceObjectWithTag(v12, 0x6E48624Fu);
          v4 = v28;
        }
        else
        {
          Handle = ObpCreateHandle(1, v12, 0, (__int64)v34, 0, v7, PreviousMode, 0LL, 0, 0LL, (unsigned __int64 *)&v29);
          if ( Handle < 0 )
            ObfDereferenceObjectWithTag(v12, 0x6E48624Fu);
          SepDeleteAccessState((__int64)v34);
          SeReleaseSubjectContext(&SubjectContext);
          v4 = v28;
        }
      }
    }
    ObfDereferenceObject(v30);
    if ( Handle >= 0 )
      *v4 = v29;
    return Handle;
  }
  return result;
}
