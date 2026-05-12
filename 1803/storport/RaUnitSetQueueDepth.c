/*
 * XREFs of RaUnitSetQueueDepth @ 0x1C00121BC
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C0014224 (RaidBusEnumeratorGetUnit.c)
 *     RaidCreateUnit @ 0x1C0014F78 (RaidCreateUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0017620 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     McTemplateK0zqcccqqqt @ 0x1C002F234 (McTemplateK0zqcccqqqt.c)
 */

__int64 __fastcall RaUnitSetQueueDepth(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 404);
  v5 = v4;
  v6 = -1073741823;
  if ( a2 && a2 <= a3 )
  {
    *(_DWORD *)(a1 + 404) = a2;
    v5 = a2;
  }
  if ( a2 == v5 )
  {
    *(_DWORD *)(a1 + 576) = a3;
    v6 = 0;
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
      McTemplateK0zqcccqqqt(
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        a2,
        a3,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        v4,
        a2,
        a3,
        0);
  }
  return v6;
}
