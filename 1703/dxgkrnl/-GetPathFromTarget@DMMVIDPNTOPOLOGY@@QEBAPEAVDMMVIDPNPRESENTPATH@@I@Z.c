/*
 * XREFs of ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000A78C
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00E18C8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetPathFromTarget(DMMVIDPNTOPOLOGY *this, int a2)
{
  DMMVIDPNTOPOLOGY *v2; // r8
  char *v4; // r8
  DMMVIDPNTOPOLOGY *v6; // rdx

  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v2 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    return 0LL;
  v4 = (char *)v2 - 8;
  while ( v4 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v4 + 12) + 24LL) == a2 )
      break;
    v6 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v4 + 1);
    v4 = (char *)v6 - 8;
    if ( v6 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
      v4 = 0LL;
  }
  return (struct DMMVIDPNPRESENTPATH *)v4;
}
