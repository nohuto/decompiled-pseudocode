/*
 * XREFs of DbgkUserReportWorkRoutine @ 0x140680D30
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x14017E0E0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x14017E980 (ZwResumeThread.c)
 *     ZwCreateThreadEx @ 0x14017F660 (ZwCreateThreadEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsResumeThread @ 0x140440ED0 (PsResumeThread.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 */

LONG_PTR __fastcall DbgkUserReportWorkRoutine(char *P)
{
  __int64 v2; // rdi
  _KPROCESS *v3; // rax
  NTSTATUS v4; // edx
  _OWORD *v5; // rcx
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  $5BC46E0569261879018906DEC3127961 v12; // [rsp+C0h] [rbp-48h] BYREF

  RegionSize[2] = (ULONG_PTR)P;
  Handle = 0LL;
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  RegionSize[0] = 168LL;
  v2 = *(_QWORD *)P;
  RegionSize[1] = v2;
  v3 = IoThreadToProcess((PETHREAD)v2);
  KiStackAttachProcess(v3, 0, (__int64)&v12);
  v4 = ObOpenObjectByPointer((PVOID)v2, 0, 0LL, 0x72u, (POBJECT_TYPE)PsThreadType, 1, &Handle);
  if ( v4 >= 0 )
  {
    v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
    if ( v4 >= 0 )
    {
      *((_QWORD *)BaseAddress + 1) = *((_QWORD *)P + 1);
      *(_QWORD *)BaseAddress = Handle;
      if ( P[16] )
      {
        v5 = BaseAddress;
        *((_OWORD *)BaseAddress + 1) = *(_OWORD *)(P + 24);
        v5[2] = *(_OWORD *)(P + 40);
        v5[3] = *(_OWORD *)(P + 56);
        v5[4] = *(_OWORD *)(P + 72);
        v5[5] = *(_OWORD *)(P + 88);
        v5[6] = *(_OWORD *)(P + 104);
        v5[7] = *(_OWORD *)(P + 120);
        v5[8] = *(_OWORD *)(P + 136);
        v5[9] = *(_OWORD *)(P + 152);
        *((_QWORD *)v5 + 20) = *((_QWORD *)P + 21);
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             DbgkWerReportExceptionWorker,
             BaseAddress,
             0x27u,
             0LL,
             0LL,
             0LL,
             0LL);
    }
    else
    {
      BaseAddress = 0LL;
    }
  }
  if ( v4 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1736), 0xFFDFFFFF);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    PsResumeThread(v2, 0LL);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, 0x8000u);
  }
  else
  {
    ZwSetInformationThread(ThreadHandle, ThreadDbgkWerReportActive, &unk_1402B2130, 4u);
    ZwResumeThread(ThreadHandle, 0LL);
    ZwClose(ThreadHandle);
    ThreadHandle = 0LL;
  }
  KiUnstackDetachProcess(&v12, 0LL);
  ExFreePoolWithTag(P, 0x4B474244u);
  return ObfDereferenceObject((PVOID)v2);
}
