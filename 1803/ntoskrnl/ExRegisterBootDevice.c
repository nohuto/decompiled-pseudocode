/*
 * XREFs of ExRegisterBootDevice @ 0x1402B86B0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ExRegisterBootDevice(__int64 a1, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  _DWORD *PoolWithTag; // rsi
  void *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  KIRQL v10; // di
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  KeWaitForSingleObject(&ExExternalBootSupportInitializationEvent, Executive, 0, 0, 0LL);
  if ( !ExBootDeviceRemovalHandler )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ExpWaitForBootDevices, 0LL);
    if ( v4 >= 0 )
    {
      v4 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      ExBootDeviceRemovalHandler = (PKTHREAD)Object;
      ZwClose(ThreadHandle);
      KeSetPriorityThread(ExBootDeviceRemovalHandler, 31);
    }
  }
  KeSetEvent(&ExExternalBootSupportInitializationEvent, 0, 0);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)a1 != 1 || !*(_QWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) || !*(_QWORD *)(a1 + 24) )
      v4 = -1073741811;
    if ( v4 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x504E4442u);
      if ( !PoolWithTag )
        v4 = -1073741670;
      if ( v4 >= 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        v6 = *(void **)(a1 + 16);
        if ( v6 )
          ObfReferenceObjectWithTag(v6, 0x746C6644u);
        memset(PoolWithTag, 0, 0x40uLL);
        *PoolWithTag = 1347306562;
        *(_OWORD *)(PoolWithTag + 6) = *(_OWORD *)a1;
        *(_OWORD *)(PoolWithTag + 10) = *(_OWORD *)(a1 + 16);
        *((_QWORD *)PoolWithTag + 7) = *(_QWORD *)(a1 + 32);
        v7 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v8 = (_QWORD *)qword_1403A1638;
        v9 = PoolWithTag + 2;
        v10 = v7;
        if ( *(__int64 **)qword_1403A1638 != &ExBootDeviceList )
          __fastfail(3u);
        *v9 = &ExBootDeviceList;
        *((_QWORD *)PoolWithTag + 2) = v8;
        *v8 = v9;
        qword_1403A1638 = (__int64)(PoolWithTag + 2);
        KxReleaseSpinLock(&ExBootDeviceListSpinLock);
        __writecr8(v10);
        *a2 = PoolWithTag;
      }
    }
  }
  return (unsigned int)v4;
}
