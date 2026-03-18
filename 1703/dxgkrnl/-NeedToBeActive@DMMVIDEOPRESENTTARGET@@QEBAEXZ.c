/*
 * XREFs of ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0002CFC
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00E18C8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C016D17C (-IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

char __fastcall DMMVIDEOPRESENTTARGET::NeedToBeActive(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // bl

  v1 = 1;
  if ( *((_DWORD *)this + 28) != 1 || !*((_BYTE *)this + 407) && !DMMVIDEOPRESENTTARGET::IsTargetForcable(this) )
    return 0;
  return v1;
}
