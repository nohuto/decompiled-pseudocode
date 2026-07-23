/*
 * XREFs of NtCreateRegistryTransaction @ 0x140598228
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // si
  char PreviousMode; // r15
  __int64 v11; // rax
  _QWORD *v12; // rcx
  NTSTATUS inserted; // edi
  __int64 v15; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+60h] [rbp-28h] BYREF

  Object[0] = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
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
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   CmRegistryTransactionType,
                   (__int64)ObjAttributes,
                   PreviousMode,
                   v15,
                   24,
                   0,
                   0,
                   Object,
                   0LL);
      if ( inserted >= 0 )
      {
        v12 = Object[0];
        *(_QWORD *)Object[0] = 0LL;
        v12[1] = 0LL;
        v12[2] = 0LL;
        v12[1] = 0LL;
        inserted = ObInsertObjectEx(v12, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&Handle);
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return inserted;
}
