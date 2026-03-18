/*
 * XREFs of ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005E3A4
 * Callers:
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C644 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C005EB70 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005E750 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v4; // r14d
  __int64 v8; // rsi
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // dl
  int v15; // eax
  bool v16; // dl
  __int64 v17; // rcx
  int v18; // eax
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-48h]

  v4 = 0;
  v8 = *(_QWORD *)(a1 + 40168) + 1552LL * (*(_DWORD *)(a2 + 76) & 0x3F);
  v10 = -1071775488;
  if ( *(_DWORD *)(v8 + 24) )
  {
    while ( 1 )
    {
      v11 = (unsigned int)(v4 + *(_DWORD *)(v8 + 20));
      LOBYTE(v21) = a4;
      v10 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, (unsigned int)v11, a3, v21);
      if ( (v10 & 0x80000000) == 0 )
        break;
LABEL_14:
      if ( (unsigned int)++v4 >= *(_DWORD *)(v8 + 24) )
        return v10;
    }
    v14 = *(_BYTE *)(v8 + 436);
    if ( (v14 & 3) != 0 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11);
      if ( (*(_DWORD *)(v12 + 80) & 1) != 0 )
      {
        if ( (**(_DWORD **)(a2 + 504) & 0x8000) == 0 )
          goto LABEL_23;
        if ( !a4 )
          goto LABEL_5;
        if ( (v14 & 4) != 0 )
LABEL_23:
          v11 = *(unsigned __int16 *)(v8 + 28);
      }
    }
    if ( a4 )
    {
      if ( (v14 & 4) == 0 && (_DWORD)v11 == *(unsigned __int16 *)(v8 + 28) )
        goto LABEL_28;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11);
      v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 80LL))(v20, a2);
      goto LABEL_12;
    }
LABEL_5:
    if ( (_DWORD)v11 == *(unsigned __int16 *)(v8 + 28) && (**(_DWORD **)(a2 + 504) & 0x8000) != 0 )
    {
LABEL_28:
      v10 = -1071775488;
LABEL_29:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v11;
      goto LABEL_14;
    }
    v16 = ((a3 - 3) & 0xFFFFFFFA) == 0
       && a3 != 8
       && ((v15 = **(_DWORD **)(a2 + 504), (v15 & 0x20000000) == 0) || v15 >= 0)
       && (v15 & 0x80000) == 0;
    LOBYTE(v13) = 1;
    LOBYTE(v21) = v16;
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, unsigned int))(*(_QWORD *)v17 + 16LL))(
            v17,
            a2,
            v13,
            0LL,
            v21,
            a3);
LABEL_12:
    v10 = v18;
    if ( v18 >= 0 )
      return v10;
    goto LABEL_29;
  }
  return v10;
}
