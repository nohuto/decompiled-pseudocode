/*
 * XREFs of ?VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ @ 0x1C004AAFC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0091D5C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ @ 0x1C001F160 (-GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00560E4 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 */

char __fastcall VIDMM_SEGMENT::VerifyResidentLimit(VIDMM_GLOBAL **this)
{
  char v2; // di
  _QWORD *v4; // rax
  __int64 SystemMemoryCommitLimit; // rax
  __int64 v6; // rdx

  if ( ((_DWORD)this[10] & 0x1001) == 0 || this[31] <= this[29] )
    return VIDMM_GLOBAL::VerifyGlobalResidentLimit(this[1]);
  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v4[3] = this;
    v4[4] = this[31];
    v4[5] = this[29];
    SystemMemoryCommitLimit = VIDMM_GLOBAL::GetSystemMemoryCommitLimit(this[1]);
    *(_QWORD *)(v6 + 48) = SystemMemoryCommitLimit;
    *(_QWORD *)(v6 + 56) = VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture;
  }
  return v2;
}
