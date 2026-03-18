/*
 * XREFs of PnpRemoveDeviceActionRequestFromQueue @ 0x14023C56C
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14073B9A0 (PiQueueDeviceRequest.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PnpDeleteDeviceActionRequest @ 0x140146378 (PnpDeleteDeviceActionRequest.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequestFromQueue(volatile signed __int32 *a1)
{
  unsigned __int8 v2; // di
  KIRQL v3; // si
  __int64 v4; // rcx
  volatile signed __int32 **v5; // rdx
  void *v6; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( !*((_BYTE *)a1 + 76) )
  {
    v4 = *(_QWORD *)a1;
    if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1
      || (v5 = (volatile signed __int32 **)*((_QWORD *)a1 + 1), *v5 != a1) )
    {
      __fastfail(3u);
    }
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
