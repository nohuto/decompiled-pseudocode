/*
 * XREFs of ??0StoredFailureInfo@wil@@QEAA@XZ @ 0x18001DEDC
 * Callers:
 *     ??$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA?AV01@AEAPEBG@Z @ 0x1801CCD38 (--$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA-AV01@AEAPEBG@Z.c)
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 */

wil::StoredFailureInfo *__fastcall wil::StoredFailureInfo::StoredFailureInfo(wil::StoredFailureInfo *this)
{
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  memset(this, 0, 0x90uLL);
  return this;
}
