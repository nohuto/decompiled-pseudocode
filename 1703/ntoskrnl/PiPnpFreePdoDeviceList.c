/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x14045F0F4
 * Callers:
 *     PnpGetSystemPdoList @ 0x14045F064 (PnpGetSystemPdoList.c)
 *     sub_1404E4FF0 @ 0x1404E4FF0 (sub_1404E4FF0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObject(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
