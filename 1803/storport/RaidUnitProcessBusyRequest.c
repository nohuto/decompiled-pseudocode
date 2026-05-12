/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x1C001019C
 * Callers:
 *     RaUnitAsyncError @ 0x1C000CED4 (RaUnitAsyncError.c)
 * Callees:
 *     RaidUnitReleaseIrp @ 0x1C0007EEC (RaidUnitReleaseIrp.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0008084 (RaUnitAcquireRemoveLock.c)
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     StorRemoveIoGatewayItem @ 0x1C000C170 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C000C8F8 (RaidRestartIoQueue.c)
 *     RaidStallDeviceQueue @ 0x1C0010300 (RaidStallDeviceQueue.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0010478 (RaidDeleteDeviceQueueEntry.c)
 *     IsUntaggedRequest @ 0x1C001222C (IsUntaggedRequest.c)
 *     GetSrbScsiData @ 0x1C001737C (GetSrbScsiData.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0039944 (RaidNtStatusToSrbStatus.c)
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
  unsigned int v12; // eax
  __int64 v13; // r8
  signed int v14; // ebp
  int v15; // r8d
  _BYTE v16[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v19; // [rsp+A0h] [rbp+18h]

  v19 = a3;
  v3 = *(_QWORD *)(a2 + 168);
  v5 = *(IRP **)(a2 + 160);
  v6 = 0;
  LOBYTE(v18) = 0;
  v7 = 0;
  v17 = a2;
  v8 = 0;
  v9 = *(_BYTE *)(v3 + 2);
  if ( v9 == 40 )
  {
    v11 = *(_DWORD *)(v3 + 20);
    v10 = *(_DWORD *)(v3 + 24);
    if ( !v11 )
    {
      GetSrbScsiData(v3, 0, 0, (unsigned int)&v18, 0LL, 0LL);
      v6 = v18;
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
    v8 = *(_DWORD *)(a1 + 1552);
    v7 = 1;
  }
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(a1 + 1548);
    v7 = 2;
  }
  v12 = IsUntaggedRequest(v10, v11);
  LOBYTE(v13) = 1;
  v18 = v12;
  v14 = RaUnitAcquireRemoveLock(a1, (__int64)v5, v13);
  if ( v14 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  RaidUnitReleaseIrp((__int64)v5);
  if ( (unsigned __int8)StorRemoveIoGatewayItem(
                          (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 768LL),
                          (__int64)v16,
                          0LL) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a1 + 24) + 1792LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(a1 + 400, v18);
  if ( v14 < 0 )
  {
    *(_BYTE *)(v3 + 3) = RaidNtStatusToSrbStatus((unsigned int)v14);
    RaidCompleteRequestEx(v5, 0, v14);
  }
  else
  {
    RaidStallDeviceQueue(a1 + 400, v7, v8, a1);
    if ( v19 )
      *v19 = 0;
    v15 = (v10 >> 3) & 2 | 4;
    if ( (v10 & 0x80000) == 0 )
      v15 = (v10 >> 3) & 2;
    if ( v18 )
      v15 |= 1u;
    if ( !(unsigned int)RaidStartIoPacket(a1, (__int64)v5, v15) )
      RaidRestartIoQueue(a1);
  }
}
