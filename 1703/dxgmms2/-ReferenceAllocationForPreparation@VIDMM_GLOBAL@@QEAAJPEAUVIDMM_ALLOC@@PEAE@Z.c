/*
 * XREFs of ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005B874
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     Template_pqt @ 0x1C001FBA4 (Template_pqt.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B274 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006DD5C (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForPreparation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        unsigned __int8 *a3)
{
  VIDMM_GLOBAL *v5; // rsi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-18h]
  __int64 v11; // [rsp+28h] [rbp-10h]

  v5 = this;
  v6 = **(_QWORD **)a2;
  if ( *(_WORD *)(*(_QWORD *)(v6 + 520) + 4LL) )
    *(_DWORD *)(v6 + 76) &= ~0x1000000u;
  v7 = *(_DWORD *)(v6 + 128);
  if ( !v7 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqt((__int64)this, (__int64)a2, (__int64)a3, a2, 0, 1);
    *((_QWORD *)v5 + 916) += *(_QWORD *)(v6 + 16);
    ++*((_DWORD *)v5 + 1830);
    v8 = *(_DWORD *)(v6 + 76);
    if ( (v8 & 0x1000000) != 0 )
      *(_DWORD *)(v6 + 76) = v8 | 0x2000000;
    return 3221225473LL;
  }
  if ( v7 == 1 )
  {
    if ( (*(_DWORD *)(v6 + 76) & 0x1000000) != 0 )
      goto LABEL_22;
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqt((__int64)this, (__int64)a2, (__int64)a3, a2, 1, 1);
    *((_QWORD *)v5 + 908) += *(_QWORD *)(v6 + 16);
    ++*((_DWORD *)v5 + 1814);
    VIDMM_SEGMENT::ReclaimResource(*(VIDMM_LINEAR_POOL ***)(v6 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v6);
    *a3 = 1;
  }
  if ( (*(_DWORD *)(v6 + 76) & 0x1000000) != 0 )
  {
LABEL_22:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    LOBYTE(this) = bTracingEnabled;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v11) = 1;
      LODWORD(v10) = 4;
      Template_pqt((__int64)this, (__int64)a2, (__int64)a3, a2, v10, v11);
      LOBYTE(this) = bTracingEnabled;
    }
    *((_QWORD *)v5 + 910) += *(_QWORD *)(v6 + 16);
    ++*((_DWORD *)v5 + 1818);
    *(_DWORD *)(v6 + 76) |= 0x2000000u;
    if ( (_BYTE)this && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p((__int64)this, &EventMigrateAllocation, (__int64)a3, v6);
    VIDMM_GLOBAL::EvictAllocation(v5, a2);
    return 3221225473LL;
  }
  return 0LL;
}
