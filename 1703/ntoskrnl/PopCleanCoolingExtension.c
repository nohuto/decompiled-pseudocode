/*
 * XREFs of PopCleanCoolingExtension @ 0x1406C683C
 * Callers:
 *     PopAssociateThermalRequest @ 0x1405D6C98 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1406C69DC (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14013600C (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall PopCleanCoolingExtension(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    PnpUnregisterPlugPlayNotification(v2, 1);
  if ( *(_BYTE *)(a1 + 64) )
    (*(void (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 96));
  ExFreePoolWithTag((PVOID)a1, 0x6C6F4350u);
}
