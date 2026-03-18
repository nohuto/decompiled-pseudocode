/*
 * XREFs of ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005B3E0
 * Callers:
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005B03C (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C005B1FC (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
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
  _QWORD *v6; // rsi
  int v7; // edx
  __int64 v9; // rbp
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v6 = (_QWORD *)a1;
  if ( a4 != 1 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * a3) + 80LL) & 0x1001) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 80) & 0x2000) == 0
      || (a1 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * a3), (*(_DWORD *)(a1 + 80) & 0x1001) != 0) )
    {
      if ( a4 != 2 || (a1 = *(_QWORD *)(v6[464] + 8LL * a3), (*(_DWORD *)(a1 + 80) & 0x1001) != 0) )
      {
        if ( !*(_DWORD *)(a2 + 344) )
          goto LABEL_5;
        v9 = a3;
        a1 = *(_QWORD *)(v6[464] + 8LL * a3);
        v10 = *(_DWORD *)(a1 + 80);
        if ( (v10 & 0x1001) != 0 )
          goto LABEL_5;
        if ( (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
        {
          v11 = **(unsigned int **)(a2 + 520);
          if ( (v11 & 4) != 0 && (v11 = *(unsigned int *)(v6[3] + 300LL), (v11 & 8) == 0) || (v10 & 0x2004) == 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v11);
              v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
              v13[3] = (**(_DWORD **)(a2 + 520) >> 2) & 1;
              v13[4] = (*(_DWORD *)(v6[3] + 300LL) >> 3) & 1;
              v13[5] = (*(_DWORD *)(*(_QWORD *)(v6[464] + 8 * v9) + 80LL) >> 2) & 1;
              v13[6] = (*(_DWORD *)(*(_QWORD *)(v6[464] + 8 * v9) + 80LL) >> 13) & 1;
            }
            return 3221225473LL;
          }
          goto LABEL_5;
        }
        if ( a4 == 1 )
        {
LABEL_5:
          if ( a5 )
            v7 = *(_DWORD *)(a2 + 64);
          else
            v7 = *(_DWORD *)(a2 + 68);
          a1 = 472LL * (*(_DWORD *)(a2 + 76) & 0x3F);
          if ( _bittest(&v7, (unsigned __int8)(a3 - *(_BYTE *)(a1 + v6[5021] + 20))) )
            return 0LL;
        }
      }
    }
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(a1);
  return 3221225473LL;
}
