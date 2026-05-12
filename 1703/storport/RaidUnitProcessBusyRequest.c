/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x1C000F7D0
 * Callers:
 *     RaUnitAsyncError @ 0x1C000AB10 (RaUnitAsyncError.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     RaidRestartIoQueue @ 0x1C0006A68 (RaidRestartIoQueue.c)
 *     IsUntaggedRequest @ 0x1C0006B68 (IsUntaggedRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C0006CB4 (RaidUnitReleaseIrp.c)
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     StorRemoveIoGatewayItem @ 0x1C0009840 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidStallDeviceQueue @ 0x1C000F934 (RaidStallDeviceQueue.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C000FAA8 (RaidDeleteDeviceQueueEntry.c)
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00396D8 (RaidNtStatusToSrbStatus.c)
 */

void __fastcall RaidUnitProcessBusyRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  IRP *v5; // r13
  char v6; // cl
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned __int8 v9; // al
  unsigned int v10; // esi
  unsigned int v11; // ebp
  signed int v12; // ebp
  int v13; // r8d
  _BYTE v14[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  BOOL v16; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v17; // [rsp+A0h] [rbp+18h]

  v17 = a3;
  v3 = *(_QWORD *)(a2 + 168);
  v5 = *(IRP **)(a2 + 160);
  v6 = 0;
  LOBYTE(v16) = 0;
  v7 = 0;
  v15 = a2;
  v8 = 0;
  v9 = *(_BYTE *)(v3 + 2);
  if ( v9 == 40 )
  {
    v11 = *(_DWORD *)(v3 + 20);
    v10 = *(_DWORD *)(v3 + 24);
    if ( !v11 )
    {
      GetSrbScsiData(v3, 0, 0, (unsigned int)&v16, 0LL, 0LL);
      v6 = v16;
    }
  }
  else
  {
    v10 = *(_DWORD *)(v3 + 12);
    v6 = *(_BYTE *)(v3 + 4);
    v11 = v9;
  }
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v6 == 8 )
  {
    v8 = *(_DWORD *)(a1 + 1520);
    v7 = 1;
  }
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(a1 + 1516);
    v7 = 2;
  }
  v16 = IsUntaggedRequest(v10, v11);
  v12 = RaUnitAcquireRemoveLock(a1);
  if ( v12 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  RaidUnitReleaseIrp((__int64)v5);
  if ( (unsigned __int8)StorRemoveIoGatewayItem(
                          (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 768LL),
                          (__int64)v14,
                          0LL) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a1 + 24) + 1792LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(a1 + 400, v16);
  if ( v12 < 0 )
  {
    *(_BYTE *)(v3 + 3) = RaidNtStatusToSrbStatus((unsigned int)v12);
    RaidCompleteRequestEx(v5, 0, v12);
  }
  else
  {
    RaidStallDeviceQueue(a1 + 400, v7, v8, a1);
    if ( v17 )
      *v17 = 0;
    v13 = (v10 >> 3) & 2 | 4;
    if ( (v10 & 0x80000) == 0 )
      v13 = (v10 >> 3) & 2;
    if ( v16 )
      v13 |= 1u;
    if ( !(unsigned int)RaidStartIoPacket(a1, (__int64)v5, v13) )
      RaidRestartIoQueue(a1);
  }
}
