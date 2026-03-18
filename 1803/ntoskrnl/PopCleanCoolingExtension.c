/*
 * XREFs of PopCleanCoolingExtension @ 0x14075E6DC
 * Callers:
 *     PopAssociateThermalRequest @ 0x140627198 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14075E88C (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14014C068 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
