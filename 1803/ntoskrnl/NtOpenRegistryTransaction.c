/*
 * XREFs of NtOpenRegistryTransaction @ 0x1406EC05C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 */

__int64 __fastcall NtOpenRegistryTransaction(HANDLE *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v7; // di
  int v8; // ebx
  char PreviousMode; // r14
  __int64 v10; // rax
  HANDLE Handle[5]; // [rsp+40h] [rbp-28h] BYREF

  Handle[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v7 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a1;
      *(_QWORD *)v10 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v8 = ObOpenObjectByName(a3, (__int64)CmRegistryTransactionType, PreviousMode, 0LL, a2, 0LL, (__int64)Handle);
    if ( v8 >= 0 )
    {
      *a1 = Handle[0];
      Handle[0] = 0LL;
      v8 = 0;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = -1073741431;
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  if ( v7 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v8;
}
