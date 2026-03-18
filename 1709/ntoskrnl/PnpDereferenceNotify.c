/*
 * XREFs of PnpDereferenceNotify @ 0x140585F14
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x140126F40 (PnpUnregisterPlugPlayNotification.c)
 *     PnpProcessDeferredRegistrations @ 0x14054B6E0 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x140585D88 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x1406BFB64 (PnpNotifyHwProfileChange.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(PVOID **P)
{
  PVOID *v3; // rax
  PVOID *v4; // rcx
  PVOID *v5; // rcx
  PVOID *v6; // rcx

  if ( (*((_WORD *)P + 28))-- == 1 )
  {
    v3 = *P;
    if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    ObfDereferenceObject(P[6]);
    if ( *((_DWORD *)P + 4) == 3 )
    {
      v5 = P[11];
      if ( v5 )
      {
        ObfDereferenceObject(v5);
        P[11] = 0LL;
      }
    }
    v6 = P[3];
    if ( v6 )
    {
      ZwClose(v6);
      P[3] = 0LL;
    }
    ExDeleteResourceLite((PERESOURCE)P[9]);
    ExFreePoolWithTag(P[9], 0x56706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
