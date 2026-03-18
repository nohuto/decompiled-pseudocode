/*
 * XREFs of PopCleanCoolingExtension @ 0x1406F6F14
 * Callers:
 *     PopAssociateThermalRequest @ 0x1406F6D24 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1406F70BC (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140126F40 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanCoolingExtension(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    PnpUnregisterPlugPlayNotification(v2, 1);
  if ( *((_BYTE *)P + 64) )
    ((void (__fastcall *)(_QWORD))P[14])(P[12]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
