/*
 * XREFs of PnpBusTypeGuidGet @ 0x14055C1C0
 * Callers:
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PnpBusTypeGuidGet(unsigned __int16 a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = a1;
  ExAcquireFastMutex(&PnpBusTypeGuidLock);
  if ( v2 >= PnpBusTypeGuidCount )
  {
    v5 = -1073741772;
  }
  else
  {
    v4 = 2LL * (unsigned __int16)v2;
    v5 = 0;
    *a2 = *(_OWORD *)((char *)PnpBusTypeGuidArray + 8 * v4);
  }
  KeReleaseGuardedMutex(&PnpBusTypeGuidLock);
  return v5;
}
