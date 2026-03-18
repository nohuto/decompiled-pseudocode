/*
 * XREFs of ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C004AB50
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004AE30 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00A3D08 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ @ 0x1C001F160 (-GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ.c)
 */

__int64 __fastcall VIDMM_SEGMENT::VerifyCommitLimit(VIDMM_SEGMENT *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 SystemMemoryCommitLimit; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax

  v2 = *((_QWORD *)this + 30);
  v5 = v2 + a2;
  if ( v2 + a2 > *((_QWORD *)this + 29) || v5 < v2 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
      v14[3] = this;
      v14[4] = a2;
      v14[5] = *((_QWORD *)this + 30);
      v14[6] = *((_QWORD *)this + 29);
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 20) & 0x1001) == 0 )
      return 0LL;
    SystemMemoryCommitLimit = VIDMM_GLOBAL::GetSystemMemoryCommitLimit(*((VIDMM_GLOBAL **)this + 1));
    if ( v10 <= SystemMemoryCommitLimit && v10 >= v8 )
      return 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
      v11[3] = this;
      v11[4] = a2;
      v11[5] = VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture;
      v12 = VIDMM_GLOBAL::GetSystemMemoryCommitLimit(*((VIDMM_GLOBAL **)this + 1));
      *(_QWORD *)(v13 + 48) = v12;
      *(_QWORD *)(v13 + 56) = VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture;
    }
  }
  return 3221225773LL;
}
