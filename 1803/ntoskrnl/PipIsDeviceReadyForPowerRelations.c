/*
 * XREFs of PipIsDeviceReadyForPowerRelations @ 0x1405CABA8
 * Callers:
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1405CAB1C (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405CABD8 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsDeviceReadyForPowerRelations(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 300) != 769 )
        return 1;
    }
  }
  return result;
}
