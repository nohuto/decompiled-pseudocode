/*
 * XREFs of NtAlpcDeleteSecurityContext @ 0x1404D99B8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1404D03B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteBlob @ 0x1404D9EC0 (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDeleteSecurityContext(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  PVOID v6; // rsi
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle(*((_QWORD *)Object + 2) + 40LL, a3, AlpcSecurityType);
      v8 = v7;
      if ( v7 )
      {
        if ( v6 == *(PVOID *)(v7 + 24) )
        {
          if ( (unsigned __int8)AlpcpDeleteBlob(v7) )
            AlpcpDereferenceBlobEx(v8, 1);
          else
            v5 = -1073741738;
        }
        else
        {
          v5 = -1073741790;
        }
        AlpcpDereferenceBlobEx(v8, 1);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
