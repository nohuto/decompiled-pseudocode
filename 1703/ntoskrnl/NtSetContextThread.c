/*
 * XREFs of NtSetContextThread @ 0x1406E2E60
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     EtwTiLogSetContextThread @ 0x14070F650 (EtwTiLogSetContextThread.c)
 */

NTSTATUS __stdcall NtSetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  int v5; // edi
  PEPROCESS v6; // rax
  PETHREAD v7; // rbx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  PETHREAD Thread; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v5 = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, (PVOID *)&Thread, 0LL);
  if ( v5 >= 0 )
  {
    v6 = IoThreadToProcess(CurrentThread);
    v7 = Thread;
    if ( ((__int64)v6[2].SchedulingGroup & 2) != 0 && v6 == IoThreadToProcess(Thread) )
    {
      v5 = -1073740278;
    }
    else if ( (v7->MiscFlags & 0x400) != 0 || *(_QWORD *)&v7[1].WaitBlockFill11[112] )
    {
      v5 = -1073741816;
    }
    else
    {
      v5 = PspSetContextThreadInternal(v7, Context, PreviousMode, PreviousMode, 1);
    }
    EtwTiLogSetContextThread((unsigned int)v5, v7, Context);
    ObfDereferenceObject(v7);
  }
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v9;
  v9 = v5;
  UserData.Size = 4;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_SETCONTEXTTHREAD, 0LL, 1u, &UserData);
  return v5;
}
