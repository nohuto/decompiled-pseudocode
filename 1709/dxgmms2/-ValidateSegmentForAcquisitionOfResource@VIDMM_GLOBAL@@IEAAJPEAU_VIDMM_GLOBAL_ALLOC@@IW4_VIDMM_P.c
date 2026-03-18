/*
 * XREFs of ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005E750
 * Callers:
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005E3A4 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C005E564 (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5)
{
  __int64 v6; // rbp
  _QWORD *v7; // rsi
  int v8; // edx
  int v9; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v6 = a3;
  v7 = (_QWORD *)a1;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * a3) + 80LL);
  if ( (v8 & 0x1001) != 0 )
  {
    if ( a4 == 1 )
      goto LABEL_11;
  }
  else
  {
    a1 = *(unsigned int *)(a2 + 80);
    if ( (a1 & 0x4000) != 0 && *(_DWORD *)(a2 + 344) || (a1 & 0x2000) != 0 )
      goto LABEL_11;
  }
  if ( a4 != 2 || (v8 & 0x1001) != 0 )
  {
    if ( !*(_DWORD *)(a2 + 344) || (v8 & 0x1001) != 0 )
      goto LABEL_5;
    if ( (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
    {
      v11 = **(unsigned int **)(a2 + 504);
      if ( (v11 & 4) != 0 && (v11 = *(unsigned int *)(v7[3] + 300LL), (v11 & 8) == 0) || (v8 & 0x2004) == 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v11);
          v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
          v13[3] = (**(_DWORD **)(a2 + 504) >> 2) & 1;
          v13[4] = (*(_DWORD *)(v7[3] + 300LL) >> 3) & 1;
          v13[5] = (*(_DWORD *)(*(_QWORD *)(v7[464] + 8 * v6) + 80LL) >> 2) & 1;
          v13[6] = (*(_DWORD *)(*(_QWORD *)(v7[464] + 8 * v6) + 80LL) >> 13) & 1;
        }
        return 3221225473LL;
      }
      goto LABEL_5;
    }
    if ( a4 == 1 )
    {
LABEL_5:
      if ( a5 )
        v9 = *(_DWORD *)(a2 + 64);
      else
        v9 = *(_DWORD *)(a2 + 68);
      a1 = 1552LL * (*(_DWORD *)(a2 + 76) & 0x3F);
      if ( _bittest(&v9, (unsigned __int8)(a3 - *(_BYTE *)(a1 + v7[5021] + 20))) )
        return 0LL;
    }
  }
LABEL_11:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(a1);
  return 3221225473LL;
}
