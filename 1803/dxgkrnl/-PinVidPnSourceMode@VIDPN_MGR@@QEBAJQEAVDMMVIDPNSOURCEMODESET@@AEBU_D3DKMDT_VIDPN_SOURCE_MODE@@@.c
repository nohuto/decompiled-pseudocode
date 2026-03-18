/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C021646C
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0218754 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0024340 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0043BC4 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00BE024 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a3)
{
  unsigned int *NextMode; // rbx
  struct DMMVIDPNSOURCEMODESET *v4; // r9
  __int64 v8; // rax

  NextMode = 0LL;
  v4 = (struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
  if ( v4 != (struct DMMVIDPNSOURCEMODESET *const)((char *)a2 + 48) )
    NextMode = (unsigned int *)((char *)v4 - 8);
  if ( NextMode )
  {
    while ( !DMMVIDPNSOURCEMODE::operator==((__int64)NextMode, (__int64)a3) )
    {
      NextMode = (unsigned int *)DMMVIDPNSOURCEMODESET::GetNextMode(
                                   a2,
                                   (const struct DMMVIDPNSOURCEMODE *const)NextMode);
      if ( !NextMode )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    NextMode = 0LL;
  }
  if ( NextMode )
  {
    DMMVIDPNSOURCEMODESET::PinMode(a2, NextMode[6]);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = a3;
    WdLogEvent5_WdDmmEvent(v8);
    return 3223192394LL;
  }
}
