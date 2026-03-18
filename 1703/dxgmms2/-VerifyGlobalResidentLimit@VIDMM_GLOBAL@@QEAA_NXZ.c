/*
 * XREFs of ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00560E4
 * Callers:
 *     ?VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ @ 0x1C004AAFC (-VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ.c)
 * Callees:
 *     ?GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ @ 0x1C001F160 (-GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ.c)
 */

char __fastcall VIDMM_GLOBAL::VerifyGlobalResidentLimit(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  __int64 SystemMemoryCommitLimit; // rax
  __int64 v5; // rdx

  if ( VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture <= VIDMM_GLOBAL::GetSystemMemoryCommitLimit(this) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v2);
    SystemMemoryCommitLimit = VIDMM_GLOBAL::GetSystemMemoryCommitLimit(this);
    *(_QWORD *)(v5 + 24) = SystemMemoryCommitLimit;
    *(_QWORD *)(v5 + 32) = VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture;
  }
  return 0;
}
