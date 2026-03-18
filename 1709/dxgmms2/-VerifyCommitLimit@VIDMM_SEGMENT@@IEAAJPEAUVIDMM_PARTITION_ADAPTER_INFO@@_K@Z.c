/*
 * XREFs of ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C004EDA0
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004F1A0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00AC2D4 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::VerifyCommitLimit(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION_ADAPTER_INFO *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  v3 = *((_QWORD *)this + 27);
  v7 = v3 + a3;
  if ( v3 + a3 > *((_QWORD *)this + 26) || v7 < v3 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7);
      v10[3] = this;
      v10[4] = a3;
      v10[5] = *((_QWORD *)this + 27);
      v11 = *((_QWORD *)this + 26);
      goto LABEL_11;
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 20) & 0x1001) == 0 )
      return 0LL;
    v9 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( v9 + a3 <= *((_QWORD *)a2 + 2) && v9 + a3 >= v9 )
      return 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
      v10[3] = this;
      v10[4] = a3;
      v10[5] = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v11 = *((_QWORD *)a2 + 2);
LABEL_11:
      v10[6] = v11;
    }
  }
  return 3221225773LL;
}
