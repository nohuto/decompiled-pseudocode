/*
 * XREFs of RaidpLinkUp @ 0x1C002F6A4
 * Callers:
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C0023FBC (McTemplateK0pq.c)
 *     StorPortResume @ 0x1C0031140 (StorPortResume.c)
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
