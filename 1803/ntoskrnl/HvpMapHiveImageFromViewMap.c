/*
 * XREFs of HvpMapHiveImageFromViewMap @ 0x1404E35C4
 * Callers:
 *     HvLoadHive @ 0x140496B18 (HvLoadHive.c)
 *     HvpPerformLogFileRecovery @ 0x1406F86F4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpViewMapFindViewForFileOffset @ 0x1404E366C (HvpViewMapFindViewForFileOffset.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 *     CmpClaimGlobalQuota @ 0x140514DD4 (CmpClaimGlobalQuota.c)
 */

__int64 __fastcall HvpMapHiveImageFromViewMap(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  bool v7; // zf
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int64 ViewForFileOffset; // rax
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r11

  v6 = 0;
  if ( (unsigned __int8)CmpClaimGlobalQuota(a3) )
  {
    v7 = a2 + a3 == 0;
    v8 = a2 + a3;
    v9 = 0;
    if ( !v7 )
    {
      do
      {
        HvpGetCellMap(a1, v9);
        v9 += 4096;
        ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1 + 216, v9);
        v12 = v11 + *(_QWORD *)(ViewForFileOffset + 56) - *(_QWORD *)(ViewForFileOffset + 24);
        *(_QWORD *)v13 = 0LL;
        *(_DWORD *)(v13 + 16) = 4096;
        *(_QWORD *)(v13 + 8) = v12 | 1;
      }
      while ( v9 < v8 );
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
