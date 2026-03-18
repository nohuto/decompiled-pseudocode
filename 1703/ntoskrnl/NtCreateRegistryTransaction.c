/*
 * XREFs of NtCreateRegistryTransaction @ 0x140458340
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, __int64 a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  BOOLEAN v9; // si
  int v10; // r9d
  char PreviousMode; // r15
  __int64 v12; // rax
  _QWORD *v13; // rcx
  int inserted; // edi
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h]

  Object = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    if ( a4 )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v12 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v12 = (__int64)a1;
        *(_QWORD *)v12 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      LOBYTE(v10) = PreviousMode;
      LOBYTE(v8) = PreviousMode;
      inserted = ObCreateObjectEx(v8, (_DWORD)CmRegistryTransactionType, a3, v10);
      if ( inserted >= 0 )
      {
        v13 = Object;
        *(_QWORD *)Object = 0LL;
        v13[1] = 0LL;
        v13[2] = 0LL;
        v13[1] = 0LL;
        inserted = ObInsertObjectEx(v13, 0LL, 0, 0LL, (__int64)&Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v9 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)inserted;
}
