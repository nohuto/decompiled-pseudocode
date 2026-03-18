/*
 * XREFs of PipDmgConsoleUnlockCallback @ 0x1407291F0
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1405C89E0 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1407292E0 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PiDmaGuardQueueFlush @ 0x14073DCFC (PiDmaGuardQueueFlush.c)
 *     PipDgqFreeEntry @ 0x14073DE08 (PipDgqFreeEntry.c)
 */

PVOID *PipDmgConsoleUnlockCallback()
{
  PVOID *v0; // rbx
  PVOID v1; // rcx
  PVOID *result; // rax
  _QWORD *v3; // rax
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  P[1] = P;
  P[0] = P;
  PiDmaGuardQueueFlush(P);
  v0 = (PVOID *)P[0];
  if ( P[0] == P )
    goto LABEL_4;
  do
  {
    v1 = v0[2];
    v0 = (PVOID *)*v0;
    PipDmgRequestRestartOnBlockedDevice(v1);
  }
  while ( v0 != P );
  while ( 1 )
  {
    v0 = (PVOID *)P[0];
LABEL_4:
    result = P;
    if ( v0 == P )
      break;
    if ( v0[1] != P || (v3 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v3[1] = P;
    PipDgqFreeEntry(v0);
  }
  return result;
}
