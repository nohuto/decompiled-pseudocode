/*
 * XREFs of ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01FBCB8
 * Callers:
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01FBA2C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01FBAC8 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 * Callees:
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C01FBC18 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

bool __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(
        const struct DXGADAPTER *a1,
        const struct DMMVIDEOPRESENTTARGET *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  bool result; // al
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // r11
  int VotPreference; // eax
  int v9; // r10d

  result = 0;
  if ( !a3 )
    return 1;
  if ( *((_QWORD *)a2 + 13) )
  {
    if ( !*((_QWORD *)a3 + 13) )
      return 1;
    if ( *((_BYTE *)a2 + 405) )
    {
      if ( !*((_BYTE *)a3 + 405) )
        return result;
    }
    else if ( *((_BYTE *)a3 + 405) )
    {
      return 1;
    }
    v5 = *((_DWORD *)a2 + 29);
    v6 = *((_DWORD *)a3 + 29);
  }
  else
  {
    if ( *((_QWORD *)a3 + 13) )
      return result;
    v5 = *((_DWORD *)a2 + 30);
    v6 = *((_DWORD *)a3 + 30);
  }
  if ( v5 < v6 )
    return 1;
  if ( v5 > v6 )
    return 0;
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference((__int64)a1, *((_DWORD *)a2 + 21), *((_DWORD *)a2 + 22), 0);
  VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    (__int64)a1,
                    *(_DWORD *)(v7 + 84),
                    *(_DWORD *)(v7 + 88),
                    0);
  return v9 < VotPreference;
}
