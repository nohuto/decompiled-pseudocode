/*
 * XREFs of ?RecordLog@details@wil@@YAHJ@Z @ 0x140005E00
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x14000596C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::RecordLog(wil::details *this)
{
  `wil::details::RecordLog'::`2'::s_hrErrorLast = (int)this;
  return (unsigned int)_InterlockedIncrement(&`wil::details::RecordLog'::`2'::s_cErrorCount);
}
