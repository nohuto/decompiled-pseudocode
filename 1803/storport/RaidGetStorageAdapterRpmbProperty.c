/*
 * XREFs of RaidGetStorageAdapterRpmbProperty @ 0x1C002A3DC
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005E6CC (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorageAdapterRpmbProperty(_DWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r10d
  _DWORD *v5; // r9

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v5 = *(_DWORD **)(a2 + 24);
  *a3 = 20LL;
  if ( *(_DWORD *)(v3 + 8) >= 0x14u )
  {
    *v5 = 1;
    v5[1] = 20;
    v5[3] = a1[1411];
    v5[2] = a1[1410];
    v5[4] = a1[1418];
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v4;
}
