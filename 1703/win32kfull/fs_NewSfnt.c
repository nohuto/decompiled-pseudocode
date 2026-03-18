/*
 * XREFs of fs_NewSfnt @ 0x1C02BC070
 * Callers:
 *     bLoadTTF @ 0x1C0227B94 (bLoadTTF.c)
 *     bReloadGlyphSet @ 0x1C02282DC (bReloadGlyphSet.c)
 *     pvHandleKerningPairs @ 0x1C022E254 (pvHandleKerningPairs.c)
 *     bInitInAndOut @ 0x1C0230A10 (bInitInAndOut.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02BC1D0 (fs_SetUpKey.c)
 *     fsg_PrivateFontSpaceSize @ 0x1C02C8268 (fsg_PrivateFontSpaceSize.c)
 *     fsg_WorkSpaceSetOffsets @ 0x1C02C8AE0 (fsg_WorkSpaceSetOffsets.c)
 *     sfac_ComputeMapping @ 0x1C02C94E4 (sfac_ComputeMapping.c)
 *     sfac_DoOffsetTableMap @ 0x1C02C989C (sfac_DoOffsetTableMap.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C02CA4F0 (sfac_LoadCriticalSfntMetrics.c)
 */

__int64 __fastcall fs_NewSfnt(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8) )
    return 4099LL;
  v5 = fs_SetUpKey(a1, 0LL, &v7);
  v6 = v5;
  if ( !v5 )
    return v7;
  result = sfac_DoOffsetTableMap(v5);
  if ( !(_DWORD)result )
  {
    result = sfac_LoadCriticalSfntMetrics(v6, v6 + 316, v6 + 364, v6 + 388);
    if ( !(_DWORD)result )
    {
      result = fsg_PrivateFontSpaceSize(v6, v6 + 388, v6 + 568, &v7);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a2 + 16) = v7 + 4;
        *(_DWORD *)(a2 + 12) = fsg_WorkSpaceSetOffsets(v6 + 388, v6 + 480, v6 + 944) + 4;
        result = sfac_ComputeMapping(v6, *(unsigned __int16 *)(a1 + 104), *(unsigned __int16 *)(a1 + 106));
        if ( !(_DWORD)result )
        {
          *(_DWORD *)(v6 + 420) = 2;
          *(_DWORD *)(v6 + 428) = 1;
        }
      }
    }
  }
  return result;
}
