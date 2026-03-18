/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01D3598
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01D4630 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00441CC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0045848 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00DFE24 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a3,
        __int64 a4)
{
  struct DMMVIDPNSOURCEMODESET *v5; // rbx
  unsigned int *NextMode; // rbx
  __int64 v9; // rax

  v5 = (struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
  if ( v5 == (struct DMMVIDPNSOURCEMODESET *const)((char *)a2 + 48)
    || (NextMode = (unsigned int *)((char *)v5 - 8)) == 0LL )
  {
LABEL_5:
    NextMode = 0LL;
  }
  else
  {
    while ( !DMMVIDPNSOURCEMODE::operator==((__int64)NextMode, (__int64)a3, (__int64)a3, a4) )
    {
      NextMode = (unsigned int *)DMMVIDPNSOURCEMODESET::GetNextMode(
                                   a2,
                                   (const struct DMMVIDPNSOURCEMODE *const)NextMode,
                                   (__int64)a3,
                                   a4);
      if ( !NextMode )
        goto LABEL_5;
    }
  }
  if ( NextMode )
  {
    DMMVIDPNSOURCEMODESET::PinMode(a2, NextMode[6]);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = a3;
    WdLogEvent5_WdDmmEvent(v9);
    return 3223192394LL;
  }
}
