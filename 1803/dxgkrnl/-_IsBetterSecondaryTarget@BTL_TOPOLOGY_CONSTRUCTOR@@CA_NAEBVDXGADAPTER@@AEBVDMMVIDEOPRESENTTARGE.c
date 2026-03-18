/*
 * XREFs of ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C0229630
 * Callers:
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0228370 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C022939C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0229440 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 * Callees:
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C0229590 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

bool __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(
        const struct DXGADAPTER *a1,
        const struct DMMVIDEOPRESENTTARGET *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  __int64 v5; // rax
  char v6; // al
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r11
  int VotPreference; // eax
  int v11; // r10d

  if ( !a3 )
    return 1;
  v5 = *((_QWORD *)a3 + 13);
  if ( *((_QWORD *)a2 + 13) )
  {
    if ( !v5 )
      return 1;
    v6 = *((_BYTE *)a3 + 404);
    if ( !*((_BYTE *)a2 + 404) )
    {
      if ( !v6 )
      {
LABEL_7:
        v7 = *((_DWORD *)a2 + 29);
        v8 = *((_DWORD *)a3 + 29);
        goto LABEL_14;
      }
      return 1;
    }
    if ( v6 )
      goto LABEL_7;
    return 0;
  }
  if ( v5 )
    return 0;
  v7 = *((_DWORD *)a2 + 30);
  v8 = *((_DWORD *)a3 + 30);
LABEL_14:
  if ( v7 < v8 )
    return 1;
  if ( v7 > v8 )
    return 0;
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference((__int64)a1, *((_DWORD *)a2 + 21), *((_DWORD *)a2 + 23), 0);
  VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    (__int64)a1,
                    *(_DWORD *)(v9 + 84),
                    *(_DWORD *)(v9 + 92),
                    0);
  return v11 < VotPreference;
}
