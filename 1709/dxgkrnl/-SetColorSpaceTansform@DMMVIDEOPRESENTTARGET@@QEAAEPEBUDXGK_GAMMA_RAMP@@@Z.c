/*
 * XREFs of ?SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00162D0
 * Callers:
 *     ?DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z @ 0x1C007B0D0 (-DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00A8B60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     memcmp @ 0x1C0016620 (memcmp.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::SetColorSpaceTansform(DMMVIDEOPRESENTTARGET *this, const void **a2)
{
  ReferenceCounted *v4; // rcx
  const void **v6; // rsi

  if ( a2 )
  {
    v6 = (const void **)*((_QWORD *)this + 66);
    if ( v6 )
    {
      if ( a2 == v6 || !memcmp(a2[4], v6[4], (size_t)a2[3]) )
        return 0;
      ReferenceCounted::Release((ReferenceCounted *)v6);
    }
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *((_QWORD *)this + 66) = a2;
  }
  else
  {
    v4 = (ReferenceCounted *)*((_QWORD *)this + 66);
    if ( !v4 )
      return 0;
    ReferenceCounted::Release(v4);
    *((_QWORD *)this + 66) = 0LL;
  }
  return 1;
}
