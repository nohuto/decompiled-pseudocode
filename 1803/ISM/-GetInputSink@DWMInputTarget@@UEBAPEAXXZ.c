/*
 * XREFs of ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x180018B60
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ @ 0x18000C810 (--$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ.c)
 */

__int64 __fastcall DWMInputTarget::GetInputSink(DWMInputTarget *this)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 Attached; // rax

  v1 = *((_QWORD *)this + 14);
  v2 = 0LL;
  if ( v1 )
  {
    Attached = InputSite::GetAttachedObject<LegacyInputSinkData>(v1);
    if ( Attached )
      return *(_QWORD *)Attached;
  }
  return v2;
}
