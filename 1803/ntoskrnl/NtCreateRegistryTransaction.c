/*
 * XREFs of NtCreateRegistryTransaction @ 0x140580D98
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // si
  char PreviousMode; // r15
  __int64 v11; // rax
  _QWORD *v12; // rcx
  NTSTATUS inserted; // edi
  __int64 v15; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+60h] [rbp-28h] BYREF

  v5 = (int)ObjAttributes;
  Object[0] = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    if ( CreateOptions )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v11 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
          v11 = (__int64)RegistryTransactionHandle;
        *(_QWORD *)v11 = 0LL;
      }
      else
      {
        *RegistryTransactionHandle = 0LL;
      }
      inserted = ObCreateObjectEx(PreviousMode, CmRegistryTransactionType, v5, PreviousMode, v15, 24, 0, 0, Object, 0LL);
      if ( inserted >= 0 )
      {
        v12 = Object[0];
        *(_QWORD *)Object[0] = 0LL;
        v12[1] = 0LL;
        v12[2] = 0LL;
        v12[1] = 0LL;
        inserted = ObInsertObjectEx(v12, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
        Object[0] = 0LL;
        if ( inserted >= 0 )
        {
          *RegistryTransactionHandle = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v9 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return inserted;
}
