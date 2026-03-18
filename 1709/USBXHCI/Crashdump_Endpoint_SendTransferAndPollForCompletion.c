/*
 * XREFs of Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C003C28C
 * Callers:
 *     Crashdump_Endpoint_SendBulkTransfer @ 0x1C003BE40 (Crashdump_Endpoint_SendBulkTransfer.c)
 *     Crashdump_Endpoint_SendControlTransfer @ 0x1C003C0A0 (Crashdump_Endpoint_SendControlTransfer.c)
 * Callees:
 *     Crashdump_EventRing_Poll @ 0x1C003B170 (Crashdump_EventRing_Poll.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendTransferAndPollForCompletion(__int64 a1)
{
  __int64 v1; // r8
  int v3; // r10d
  int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(v1 + 8) + 48LL) + 4LL * *(unsigned __int8 *)(v1 + 56)) = (unsigned __int8)v3 | ((*(_BYTE *)(a1 + 128) != 0) << 16);
  _InterlockedOr(v9, 0);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Ringing doorbell: SlotId: %u, EndpointDCI: %u\n", *(unsigned __int8 *)(v1 + 56), v3);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v5 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 584LL) || (v6 = v5 + 200, *(_BYTE *)(v5 + 624)) )
    v6 = v5 + 72;
  v7 = Crashdump_EventRing_Poll(
         v6,
         32,
         v4,
         a1,
         (__int64 (__fastcall *)(__int64, __int64, int *))Crashdump_Endpoint_EventRingCallback);
  if ( v7 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 196) & 4) != 0 )
    {
      if ( *(_QWORD *)(a1 + 184) == *(_QWORD *)(a1 + 168) )
      {
        DbgPrintEx(0x93u, 3u, "XHCIDUMP: Received the correct Event Data Trb.\n");
        goto LABEL_11;
      }
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Event Data Trb received is not the one we are looking for\n");
    }
    else
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Did not receive an Event Data Trb\n");
    }
    v7 = -1073741823;
  }
LABEL_11:
  ++*(_QWORD *)(a1 + 168);
  return (unsigned int)v7;
}
