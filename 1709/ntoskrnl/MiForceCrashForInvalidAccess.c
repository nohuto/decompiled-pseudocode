/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x1406DEB64
 * Callers:
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 * Callees:
 *     IoThreadToProcess @ 0x14006A740 (IoThreadToProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsGetProcessId @ 0x1400BAF50 (PsGetProcessId.c)
 *     ZwCreateThreadEx @ 0x14017F000 (ZwCreateThreadEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PsFreezeProcess @ 0x14057D084 (PsFreezeProcess.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 *     DbgkQueueUserExceptionReport @ 0x1406ABCD4 (DbgkQueueUserExceptionReport.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 *     KeRequestTerminationProcess @ 0x1406D7900 (KeRequestTerminationProcess.c)
 */

_QWORD *__fastcall MiForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rax
  int v7; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+68h] [rbp-98h]
  __int64 v9; // [rsp+70h] [rbp-90h]
  int v10; // [rsp+78h] [rbp-88h]
  __int128 v11; // [rsp+80h] [rbp-80h]
  _QWORD v12[22]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+160h] [rbp+60h] BYREF
  PVOID Object; // [rsp+168h] [rbp+68h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 || (CurrentThread->MiscFlags & 0x400) != 0 )
  {
    _m_prefetchw(&Process[1].DirectoryTableBase);
    DirectoryTableBase = Process[1].DirectoryTableBase;
    do
    {
      v4 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v4 != DirectoryTableBase );
    if ( (DirectoryTableBase & 0x4000000) == 0 )
    {
      if ( (IoThreadToProcess(CurrentThread)[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        ProcessId = PsGetProcessId(Process);
        DbgkWerCaptureLiveKernelDump(L"MemoryManager", 26, 36864LL, -1073739994LL, (__int64)ProcessId, 0LL, 0LL, 0LL, 0);
      }
      else
      {
        memset(v12, 0, 0x98uLL);
        LODWORD(v12[0]) = -1073739994;
        LODWORD(v12[3]) = 1;
        v12[4] = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport((__int64)CurrentThread, 0xEu, (__int64)v12);
      }
      PsFreezeProcess((ULONG_PTR)Process, 0);
      v8 = 0LL;
      v9 = 0LL;
      v7 = 48;
      v10 = 512;
      v11 = 0LL;
      if ( (int)ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL, (__int64)&v7) < 0 )
      {
        PsTerminateProcess((ULONG_PTR)Process, 0xC0000725);
      }
      else
      {
        ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(Handle, 0);
        ObfDereferenceObject(Object);
      }
    }
  }
  else
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 2);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
