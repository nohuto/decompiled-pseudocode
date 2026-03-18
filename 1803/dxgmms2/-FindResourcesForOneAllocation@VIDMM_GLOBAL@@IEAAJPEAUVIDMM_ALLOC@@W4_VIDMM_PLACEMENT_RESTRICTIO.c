/*
 * XREFs of ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0063150
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C0024428 (McTemplateK0pq.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0062A78 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C0062C34 (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FindResourcesForOneAllocation(__int64 a1, __int64 **a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // esi
  int v13; // edx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-18h]

  v7 = **a2;
  v8 = *(_DWORD *)(v7 + 72);
  if ( !v8 )
  {
LABEL_8:
    v9 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(a1, v7, a3, 0);
    goto LABEL_5;
  }
  if ( !(_BYTE)a4 || (v8 & 0x1F) == 0 && (v8 & 0x7C0) == 0 )
  {
    v12 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2, a3, a4, 4u);
    if ( v12 >= 0 )
      goto LABEL_6;
    goto LABEL_8;
  }
  v9 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2, a3, a4, 1u);
LABEL_5:
  v12 = v9;
LABEL_6:
  v13 = *(_DWORD *)(v7 + 76);
  if ( (v13 & 0x2000000) != 0 && v12 >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 224) + 80LL) & 0x1001) == 0 || (v13 & 0x400) != 0 )
    {
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v17) = 0;
        McTemplateK0pq(v10, &EventCompleteAllocationMigration, v11, v7, v17);
      }
      *(_QWORD *)(a1 + 8240) += *(_QWORD *)(v7 + 16);
      ++*(_DWORD *)(a1 + 8232);
      ++*(_DWORD *)(a1 + 41956);
    }
    else
    {
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v17) = -1073741823;
        McTemplateK0pq(v10, &EventCompleteAllocationMigration, v11, v7, v17);
      }
      v15 = *(_QWORD *)(v7 + 16);
      ++*(_DWORD *)(a1 + 8248);
      *(_QWORD *)(a1 + 8256) += v15;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v10);
      v16[3] = a2;
      v16[4] = *(_QWORD *)(v7 + 136);
      v16[5] = *(_QWORD *)(v7 + 224);
    }
    *(_DWORD *)(v7 + 76) &= 0xFCFFFFFF;
  }
  return (unsigned int)v12;
}
