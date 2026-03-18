/*
 * XREFs of AlpcCreateSecurityContext @ 0x140747310
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcCreateSecurityContext(void *a1, struct _KTHREAD *a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int SecurityContext; // ebx
  PVOID v8; // rdi
  struct _SECURITY_QUALITY_OF_SERVICE *v9; // r9
  ULONG_PTR v10; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    SecurityContext = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, 0, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      v8 = Object;
      if ( !a4 || (v9 = *(struct _SECURITY_QUALITY_OF_SERVICE **)(a4 + 8)) == 0LL )
        v9 = (struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
      SecurityContext = AlpcpCreateSecurityContext((volatile signed __int64 *)Object, a2, 1, v9, BugCheckParameter2);
      if ( SecurityContext >= 0 )
      {
        v10 = BugCheckParameter2[0];
        *(_QWORD *)(a4 + 16) = *(_QWORD *)(BugCheckParameter2[0] + 8);
        AlpcpDereferenceBlobEx(v10, 1);
      }
      ObfDereferenceObject(v8);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)SecurityContext;
}
