/*
 * XREFs of RaidDriverGetName @ 0x1C0018C0C
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x1C0013F98 (RaidAdapterCreateDevmapEntry.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorTickEventQueue @ 0x1C001AE98 (StorTickEventQueue.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C001D574 (StorpLogPhysicalTopologyInfo.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C003C6D0 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitCreateDumpAdapter @ 0x1C003CB54 (RaidUnitCreateDumpAdapter.c)
 *     StorEtwMiniportEvent @ 0x1C004186C (StorEtwMiniportEvent.c)
 *     RaidInitializeAdapter @ 0x1C005F66C (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RaidDriverGetName(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int16 v8; // ax
  __int16 v9; // ax
  __int16 result; // ax

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 && (v4 = *(_WORD *)(a1 + 40)) != 0 )
  {
    LODWORD(v5) = v4 >> 1;
    if ( !(_DWORD)v5 )
      goto LABEL_6;
    while ( 1 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( *(_WORD *)(v2 + 2 * v5) == 92 )
        break;
      if ( !(_DWORD)v5 )
        goto LABEL_6;
    }
    v7 = v2 + 2 * v5;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v6 = v7 + 2;
    goto LABEL_10;
  }
LABEL_6:
  v6 = v2;
LABEL_10:
  v8 = *(_WORD *)(a1 + 40);
  *(_QWORD *)(a2 + 8) = v6;
  v9 = v2 + v8 - v6;
  *(_WORD *)a2 = v9;
  result = v9 + 2;
  *(_WORD *)(a2 + 2) = result;
  return result;
}
