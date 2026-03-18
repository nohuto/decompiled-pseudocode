/*
 * XREFs of NtOpenPrivateNamespace @ 0x140489880
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404893EC (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x140489A3C (ObpLookupNamespaceEntry.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtOpenPrivateNamespace(HANDLE *a1, ACCESS_MASK a2, __int64 a3, __m128i *a4)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v7; // rcx
  __int64 result; // rax
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v11; // rsi
  __int64 v12; // r14
  void *v13; // r14
  unsigned int v14; // ebx
  int v15; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v15 = 0;
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
      v15 = *(_DWORD *)(a3 + 24);
    }
  }
  else if ( a3 )
  {
    v15 = *(_DWORD *)(a3 + 24);
  }
  result = ObpCaptureBoundaryDescriptor(a4, (char **)&P);
  if ( (int)result >= 0 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
    v12 = ObpLookupNamespaceEntry(CurrentServerSiloGlobals + 128, P);
    ExFreePoolWithTag(P, 0x534E624Fu);
    if ( v12 && (v13 = *(void **)(v12 + 16)) != 0LL )
    {
      ObfReferenceObject(v13);
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v14 = ObOpenObjectByPointer(
              v13,
              v15 & (AccessMode != 0 ? 7666 : 73714),
              0LL,
              a2,
              ObpDirectoryObjectType,
              AccessMode,
              &Handle);
      LODWORD(P) = v14;
      ObfDereferenceObject(v13);
      *a1 = Handle;
      return v14;
    }
    else
    {
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 3221225530LL;
    }
  }
  return result;
}
