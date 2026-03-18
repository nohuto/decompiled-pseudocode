/*
 * XREFs of ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C005B1FC
 * Callers:
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C005B7D4 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005B3E0 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  int v7; // esi
  bool v8; // r12
  unsigned int v9; // ebx
  __int64 v10; // rbp
  unsigned int v11; // r14d
  int v12; // ecx
  __int64 v13; // r13
  __int64 v14; // r9
  bool v15; // dl
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v20; // eax
  int v21; // [rsp+20h] [rbp-58h]
  unsigned int v22; // [rsp+90h] [rbp+18h]
  bool v23; // [rsp+98h] [rbp+20h]

  v22 = a3;
  v7 = -1071775488;
  v8 = ((a3 - 3) & 0xFFFFFFFA) == 0
    && a3 != 8
    && ((v20 = **(_DWORD **)(a2 + 520), (v20 & 0x20000000) == 0) || v20 < 0x80000000)
    && (v20 & 0x80000) == 0;
  if ( !*(_BYTE *)(a1 + 7096) || v8 )
    v9 = 2;
  else
    v9 = 0;
  v10 = *(_QWORD *)(a1 + 40168) + 472LL * (*(_DWORD *)(a2 + 76) & 0x3F);
  do
  {
    v11 = 0;
    do
    {
      v12 = (*(_DWORD *)(a2 + 72) >> (6 * v11)) & 0x1F;
      v23 = ((*(_DWORD *)(a2 + 72) >> (6 * v11)) & 0x20) == 0;
      if ( *(_DWORD *)(a2 + 408) >= 0xA0000000 )
      {
        v23 = ((*(_DWORD *)(a2 + 72) >> (6 * v11)) & 0x20) == 0;
        if ( *(_QWORD *)(a2 + 16) >= 0x1000000uLL )
          v23 = ((*(_DWORD *)(a2 + 72) >> (6 * v11)) & 0x20) != 0;
      }
      if ( v12 )
      {
        LOBYTE(v21) = 0;
        v13 = (unsigned int)(v12 + *(_DWORD *)(v10 + 20) - 1);
        v7 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, (unsigned int)v13, a3, v21);
        if ( v7 >= 0 )
        {
          if ( (*(_BYTE *)(v10 + 436) & 3) != 0
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v13) + 80LL) & 1) != 0
            && (**(_DWORD **)(a2 + 520) & 0x8000) == 0 )
          {
            v13 = *(unsigned __int16 *)(v10 + 28);
          }
          v15 = v9 == 1 || v8;
          v16 = v22;
          LOBYTE(v16) = v23;
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v13);
          LOBYTE(v21) = v15;
          LOBYTE(v14) = v9 == 0;
          v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, unsigned int))(*(_QWORD *)v17 + 16LL))(
                 v17,
                 a2,
                 v16,
                 v14,
                 v21,
                 v22);
          if ( v7 >= 0 )
            return (unsigned int)v7;
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = v13;
        }
        a3 = v22;
      }
      ++v11;
    }
    while ( v11 <= a5 );
    ++v9;
  }
  while ( v9 <= 2 );
  return (unsigned int)v7;
}
