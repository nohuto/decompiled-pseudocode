/*
 * XREFs of StorPortGetScatterGatherListVrfy @ 0x1C0067230
 * Callers:
 *     <none>
 * Callees:
 *     RaidRemapScatterGatherList @ 0x1C0067008 (RaidRemapScatterGatherList.c)
 */

PVOID __fastcall StorPortGetScatterGatherListVrfy(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // cl
  int v4; // r8d
  __int64 v5; // rbx
  __int64 v6; // rcx

  v2 = 0LL;
  if ( a1 )
    v2 = **(_QWORD **)(a1 - 16);
  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v4 = *(_DWORD *)(a2 + 24);
  else
    v4 = *(_DWORD *)(a2 + 12);
  if ( v3 == 40 )
    v5 = *(_QWORD *)(a2 + 96);
  else
    v5 = *(_QWORD *)(a2 + 48);
  if ( !*(_BYTE *)(v2 + 4450)
    || (*(_BYTE *)(v2 + 4451) & 4) == 0
    || (v4 & 0xC0) == 0
    || KeGetCurrentIrql() > 2u
    || !RaidRemapScatterGatherList(*(unsigned int **)(v5 + 112), v5) )
  {
    return *(PVOID *)(v5 + 112);
  }
  v6 = *(_QWORD *)(v5 + 120);
  if ( (*(_BYTE *)(v6 + 10) & 5) != 0 )
    return *(PVOID *)(v6 + 24);
  else
    return MmMapLockedPagesSpecifyCache((PMDL)v6, 0, MmCached, 0LL, 0, 0x40000010u);
}
