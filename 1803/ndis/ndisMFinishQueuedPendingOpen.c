/*
 * XREFs of ndisMFinishQueuedPendingOpen @ 0x1C010F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisDereferenceAfNotification @ 0x1C0052B3C (ndisDereferenceAfNotification.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisCreateNotifyQueue @ 0x1C010DDE8 (ndisCreateNotifyQueue.c)
 *     ndisNotifyAfRegistration @ 0x1C010E070 (ndisNotifyAfRegistration.c)
 */

void __fastcall ndisMFinishQueuedPendingOpen(__int64 *P)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  KIRQL v4; // al
  KIRQL v5; // bl
  PVOID Pa; // [rsp+40h] [rbp+8h] BYREF

  v1 = *P;
  Pa = 0LL;
  v3 = *(_QWORD *)(v1 + 16);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x12u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 459666;
  v5 = v4;
  ndisCreateNotifyQueue(v3, v1, 0LL, (_QWORD **)&Pa);
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
  if ( Pa )
    ndisNotifyAfRegistration(Pa);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceAfNotification(v1);
  ndisMDereferenceOpenUnlocked(v1, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x13u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, v1);
}
