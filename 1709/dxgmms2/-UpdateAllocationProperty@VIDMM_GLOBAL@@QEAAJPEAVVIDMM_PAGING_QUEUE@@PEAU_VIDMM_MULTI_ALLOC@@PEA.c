/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C009DDD0
 * Callers:
 *     ?VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C0020A90 (-VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_AL.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C005F1B0 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C005F380 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0098F2C (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0098FB4 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct _VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // r13
  unsigned int v12; // r14d
  struct _D3DDDI_SEGMENTPREFERENCE v13; // ebx
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v17; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // si
  int v22; // edi
  __int64 v23; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v25; // rax
  _QWORD v26[16]; // [rsp+40h] [rbp-31h] BYREF
  int v28; // [rsp+E0h] [rbp+6Fh] BYREF
  VIDMM_GLOBAL *v29; // [rsp+E8h] [rbp+77h]

  memset(v26, 0, 0x50uLL);
  v9 = (VIDMM_GLOBAL *)HIDWORD(*(_QWORD *)a4);
  v10 = (*((_DWORD *)a3 + 8) >> 2) & 0x3F;
  v11 = **a3;
  *(_OWORD *)((char *)&v26[4] + 4) = *(_OWORD *)a4;
  LODWORD(v26[0]) = 214;
  v12 = *(_DWORD *)(v11 + 68);
  v13.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v11 + 72);
  v26[2] = a3;
  v29 = v9;
  if ( (_mm_srli_si128(*(__m128i *)(v26 + 36), 8).m128i_i8[4] & 2) != 0 )
  {
    v14 = HIDWORD(v26[4]);
    if ( !HIDWORD(v26[4]) )
      goto LABEL_3;
    v17 = *((_QWORD *)this + 5021) + 1552LL * v10;
    v9 = (VIDMM_GLOBAL *)(unsigned __int8)(*(_WORD *)(v17 + 28) - *(_BYTE *)(v17 + 20));
    if ( _bittest((const int *)&v14, (unsigned int)v9) )
      goto LABEL_3;
    LOBYTE(v9) = (~v12 & HIDWORD(v26[4])) != 0;
    if ( ((unsigned __int8)v9 & ((*((_BYTE *)a3 + 28) & 8) != 0)) != 0 )
      goto LABEL_3;
    v18 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 **)(v11 + 504);
    v28 = 0;
    if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
            this,
            v10,
            HIDWORD(v26[4]),
            v18,
            *(_QWORD *)(v11 + 16),
            *(_QWORD *)(v11 + 24),
            (*(_DWORD *)(v11 + 76) & 0x8000000) != 0,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v28) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v19, v8);
      *(_QWORD *)(v15 + 24) = 4820LL;
      goto LABEL_4;
    }
    BYTE4(v26[6]) = v28 & 1;
    BYTE5(v26[6]) = (v28 & 2) != 0;
    if ( v14 == v12 )
    {
      LOBYTE(v19) = v28 & 1;
      v20 = WdLogNewEntry5_WdWarning(v19);
      WdLogEvent5_WdWarning(v20);
    }
    v9 = v29;
    v12 = v14;
  }
  v21 = v26[6];
  v22 = (LODWORD(v26[6]) >> 2) & 1;
  if ( v22 )
  {
    if ( (_DWORD)v9 == v13.0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v9);
      WdLogEvent5_WdWarning(v23);
      v9 = v29;
    }
    v13.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v9;
  }
  if ( (v21 & 2) != 0 || v22 )
  {
    if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(v9, v13, v12) )
      goto LABEL_3;
    MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v10, v13, (bool *)&v28);
    if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
            this,
            v10,
            v12,
            MostPreferredSegment,
            (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v26[4]) )
      goto LABEL_3;
    v21 = v26[6];
  }
  if ( (v21 & 1) == 0 || (**(_DWORD **)(v11 + 504) & 0x8000) == 0 )
    return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v26, 0, a5);
  if ( (v26[5] & 0x100000000LL) == 0 )
  {
LABEL_3:
    v15 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  v25 = WdLogNewEntry5_WdWarning(v9);
  WdLogEvent5_WdWarning(v25);
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v26, 0, a5);
}
