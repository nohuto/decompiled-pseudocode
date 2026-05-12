/*
 * XREFs of RaidpLinkUp @ 0x1C003325C
 * Callers:
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 *     StorPortResume @ 0x1C0034540 (StorPortResume.c)
 */

char __fastcall RaidpLinkUp(__int64 a1)
{
  char v2; // di
  int v4; // [rsp+20h] [rbp-18h]

  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 56);
    McTemplateK0pq(a1, &EventLinkUp, 0LL, *(_QWORD *)(a1 + 536) + 16LL, v4);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 2156), 1);
  v2 = StorPortResume(*(_QWORD *)(a1 + 536) + 16LL);
  if ( v2 )
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
  return v2;
}
