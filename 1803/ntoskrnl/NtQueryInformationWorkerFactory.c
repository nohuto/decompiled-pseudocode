/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x1402BCAEC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtQueryInformationWorkerFactory(HANDLE Handle, int a2, unsigned __int64 a3, int a4, _DWORD *a5)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rbx
  __int64 v13; // rdx
  int v14; // ecx
  PVOID Object[18]; // [rsp+30h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-38h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 != 7 )
    return -1073741821;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v11 = a3;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 119) = *(_BYTE *)(v11 + 119);
    if ( a5 )
    {
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a5;
      *(_DWORD *)v10 = 120;
    }
  }
  else if ( a5 )
  {
    *a5 = 120;
  }
  if ( a4 != 120 )
    return -1073741820;
  result = ObReferenceObjectByHandle(Handle, 8u, ExpWorkerFactoryObjectType, PreviousMode, Object, 0LL);
  if ( result >= 0 )
  {
    memset(&Object[2], 0, 0x78uLL);
    v12 = (char *)Object[0];
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object[0] + 2), &LockHandle);
    Object[4] = *((PVOID *)v12 + 14);
    LOWORD(Object[5]) = 0;
    BYTE2(Object[5]) = (v12[152] & 8) != 0;
    v13 = *((_QWORD *)v12 + 2);
    v14 = *(_DWORD *)(v13 + 28);
    BYTE3(Object[5]) = v14 == 0;
    BYTE4(Object[5]) = *((_DWORD *)v12 + 36) != 0;
    *(_WORD *)((char *)&Object[5] + 5) = *(_WORD *)(v13 + 32);
    LODWORD(Object[6]) = *((_DWORD *)v12 + 37);
    *(PVOID *)((char *)&Object[6] + 4) = *((PVOID *)v12 + 15);
    HIDWORD(Object[7]) = *((_DWORD *)v12 + 34);
    LODWORD(Object[8]) = v14;
    HIDWORD(Object[8]) = *((_DWORD *)v12 + 33);
    LODWORD(Object[9]) = *(_DWORD *)(v13 + 24);
    Object[10] = 0LL;
    Object[11] = *((PVOID *)v12 + 3);
    Object[12] = *((PVOID *)v12 + 4);
    Object[13] = *(PVOID *)(*((_QWORD *)v12 + 6) + 736LL);
    *(_OWORD *)&Object[14] = *(_OWORD *)(v12 + 56);
    LODWORD(Object[16]) = *((_DWORD *)v12 + 40);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)&Object[4];
    *(_OWORD *)(a3 + 32) = *(_OWORD *)&Object[6];
    *(_OWORD *)(a3 + 48) = *(_OWORD *)&Object[8];
    *(_OWORD *)(a3 + 64) = *(_OWORD *)&Object[10];
    *(_OWORD *)(a3 + 80) = *(_OWORD *)&Object[12];
    *(_OWORD *)(a3 + 96) = *(_OWORD *)&Object[14];
    *(PVOID *)(a3 + 112) = Object[16];
    return 0;
  }
  return result;
}
