/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x1406B1970
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpDeleteBlob @ 0x14047CC60 (AlpcpDeleteBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CEE0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDeleteResourceReserve(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  PVOID v6; // rsi
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 || a3 >= 0 )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle(*((_QWORD *)Object + 2) + 40LL, a3 & 0x7FFFFFFF, AlpcReserveType);
      v8 = v7;
      if ( v7 )
      {
        if ( AlpcpDeleteBlob(v7) )
          AlpcpDereferenceBlobEx(v8, 1);
        else
          v5 = -1073741738;
        AlpcpDereferenceBlobEx(v8, 1);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
