/*
 * XREFs of ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005350
 * Callers:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000539C (--0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C004526C (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     BmlGetNextBestTargetMode @ 0x1C00C1BE0 (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C0226D40 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::GetNextMode(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODE *const a2)
{
  DMMVIDPNTARGETMODESET *v4; // rdx
  struct DMMVIDPNTARGETMODE *result; // rax
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v4 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNTARGETMODESET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    return 0LL;
  return result;
}
