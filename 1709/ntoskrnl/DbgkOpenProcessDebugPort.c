/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x1406A9950
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14053919C (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  NTSTATUS v6; // ebx
  void *v7; // rdi
  __int64 v8; // rcx
  bool v9; // al

  v6 = -1073740973;
  if ( *(_QWORD *)(a1 + 1056) )
  {
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v7 = *(void **)(a1 + 1056);
    if ( v7 )
      ObfReferenceObject(*(PVOID *)(a1 + 1056));
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
    if ( v7 )
    {
      LOBYTE(v8) = a2;
      v9 = PsTestProtectedProcessIncompatibility(v8, (__int64)KeGetCurrentThread()->ApcState.Process, a1);
      v6 = v9 ? 0xC0000712 : 0;
      if ( !v9 )
        v6 = ObOpenObjectByPointer(v7, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, DbgkDebugObjectType, a2, a3);
      if ( v6 < 0 )
        ObfDereferenceObject(v7);
    }
  }
  return (unsigned int)v6;
}
