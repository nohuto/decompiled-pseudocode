/*
 * XREFs of PspUmsUnInitThread @ 0x1406E26B4
 * Callers:
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 *     KeSetUmsThreadKernelLock @ 0x1406AD700 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1406AD7C8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1406AD838 (KeUpdateUmsThreadState.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406E45F4 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 */

__int64 __fastcall PspUmsUnInitThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // di
  int v9; // eax
  char v10; // r8
  int updated; // edi
  void *v12; // rsi
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0;
  CurrentThread = (struct _KTHREAD *)a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 496);
    v7 = *(_QWORD *)v6;
    if ( (*(_DWORD *)(v6 + 80) & 4) != 0 )
    {
      v8 = 1;
      LOBYTE(a4) = 1;
      v9 = PspRundownUmsThreadForApcDelivery(a1, &v14, v7, a4);
      if ( (*(_DWORD *)(a1 + 1736) & 0x10000) != 0 )
        v9 = 0;
      if ( v9 < 0 || (v14 & 8) == 0 && (v14 & 1) == 0 )
        v8 = 0;
      v10 = v8 | ((*(_DWORD *)(a1 + 1736) & 0x10000) != 0);
    }
    else
    {
      KeSetUmsThreadKernelLock(v7, 0LL);
      v10 = 1;
    }
    updated = KeUpdateUmsThreadState(v7, 2, v10);
  }
  else
  {
    --*(_WORD *)(a1 + 486);
    updated = PspDisassociateUmsThreadFromPrimary((PETHREAD)a1, 0LL);
    KiLeaveGuardedRegionUnsafe(a1);
  }
  v12 = *(void **)(*(_QWORD *)(a1 + 496) + 16LL);
  KeUnInitializeUmsThread(a1);
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( updated < 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  return (unsigned int)updated;
}
