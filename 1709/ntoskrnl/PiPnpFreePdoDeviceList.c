/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x14055EC68
 * Callers:
 *     sub_14054EB00 @ 0x14054EB00 (sub_14054EB00.c)
 *     PnpGetSystemPdoList @ 0x14055EBD8 (PnpGetSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
