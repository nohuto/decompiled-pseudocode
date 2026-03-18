/*
 * XREFs of PnpRemoveDeviceActionRequestFromQueue @ 0x1401F9C80
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x1406A8DFC (PiQueueDeviceRequest.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     PnpDeleteDeviceActionRequest @ 0x14003D738 (PnpDeleteDeviceActionRequest.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequestFromQueue(volatile signed __int32 *a1)
{
  unsigned __int8 v2; // di
  KIRQL v3; // si
  __int64 v4; // rdx
  volatile signed __int32 **v5; // rcx
  void *v6; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( !*((_BYTE *)a1 + 76) )
  {
    v4 = *(_QWORD *)a1;
    v5 = (volatile signed __int32 **)*((_QWORD *)a1 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
      __fastfail(3u);
    *v5 = (volatile signed __int32 *)v4;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v5;
  }
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v3);
  if ( v2 )
  {
    v6 = (void *)*((_QWORD *)a1 + 2);
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    PnpDeleteDeviceActionRequest(a1);
  }
  return v2;
}
