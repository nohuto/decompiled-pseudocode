/*
 * XREFs of NtOpenPrivateNamespace @ 0x14053FF0C
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObpLookupNamespaceEntry @ 0x1405403D8 (ObpLookupNamespaceEntry.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140540674 (ObpCaptureBoundaryDescriptor.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtOpenPrivateNamespace(HANDLE *a1, ACCESS_MASK a2, __int64 a3, void *a4)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v7; // rcx
  __int64 result; // rax
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // r14
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h]
  unsigned int Pa; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v18 = 0;
  if ( AccessMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( a3 )
    {
      if ( (a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = *(_DWORD *)(a3 + 24);
    }
  }
  else if ( a3 )
  {
    v18 = *(_DWORD *)(a3 + 24);
  }
  result = ObpCaptureBoundaryDescriptor(a4);
  if ( (int)result >= 0 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
    v12 = ((__int64 (__fastcall *)(char *))ObpLookupNamespaceEntry)(CurrentServerSiloGlobals + 128);
    ExFreePoolWithTag(P, 0x534E624Fu);
    if ( v12 && (v15 = *(void **)(v12 + 16)) != 0LL )
    {
      ObfReferenceObject(v15);
      ExReleasePushLockEx(v11, 0LL, v16, v17);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      Pa = ObOpenObjectByPointer(
             v15,
             v18 & (AccessMode != 0 ? 7666 : 73714),
             0LL,
             a2,
             ObpDirectoryObjectType,
             AccessMode,
             &Handle);
      ObfDereferenceObject(v15);
      *a1 = Handle;
      return Pa;
    }
    else
    {
      ExReleasePushLockEx(v11, 0LL, v13, v14);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 3221225530LL;
    }
  }
  return result;
}
