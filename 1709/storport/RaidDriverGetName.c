/*
 * XREFs of RaidDriverGetName @ 0x1C0018680
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x1C0012E04 (RaidAdapterCreateDevmapEntry.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorTickEventQueue @ 0x1C001B010 (StorTickEventQueue.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C001E380 (StorpLogPhysicalTopologyInfo.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002EA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C003DFD0 (RaidUnitAbortSrbCompletion.c)
 *     StorEtwMiniportEvent @ 0x1C00426B8 (StorEtwMiniportEvent.c)
 *     RaidInitializeAdapter @ 0x1C0061E4C (RaidInitializeAdapter.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0066170 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RaidDriverGetName(__int64 a1, __int64 a2)
{
  _WORD *v2; // r9
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  _WORD *v7; // rcx
  _WORD *v8; // rcx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 result; // ax

  v2 = *(_WORD **)(a1 + 48);
  if ( v2 && (v5 = *(_WORD *)(a1 + 40)) != 0 )
  {
    LODWORD(v6) = v5 >> 1;
    if ( !(_DWORD)v6 )
      goto LABEL_6;
    while ( 1 )
    {
      v6 = (unsigned int)(v6 - 1);
      v7 = &v2[v6];
      if ( *v7 == 92 )
        break;
      if ( !(_DWORD)v6 )
        goto LABEL_6;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = v7 + 1;
    goto LABEL_9;
  }
LABEL_6:
  v8 = v2;
LABEL_9:
  v9 = *(_WORD *)(a1 + 40);
  *(_QWORD *)(a2 + 8) = v8;
  v10 = (_WORD)v2 + v9 - (_WORD)v8;
  *(_WORD *)a2 = v10;
  result = v10 + 2;
  *(_WORD *)(a2 + 2) = result;
  return result;
}
