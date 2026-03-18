/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x14043CD0C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcCreateResourceReserve(HANDLE Handle, int a2, __int64 a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v8; // rcx
  NTSTATUS Reserve; // ebx
  PVOID v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    Reserve = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a4;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
    Reserve = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( Reserve >= 0 )
    {
      v10 = Object;
      Reserve = AlpcpCreateReserve(Object);
      if ( Reserve >= 0 )
        *a4 = v13 | 0x80000000;
      ObfDereferenceObject(v10);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)Reserve;
}
