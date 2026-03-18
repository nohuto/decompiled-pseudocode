/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C006CE00
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C006A520 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C006D208 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C006BCB0 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        VIDMM_PROCESS_BUDGET_STATE *this,
        unsigned __int64 *a2,
        char a3,
        unsigned __int8 a4,
        struct VIDMM_GLOBAL *a5,
        unsigned int a6)
{
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v6; // edi
  unsigned __int64 *v7; // rbx
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  char *v23; // [rsp+78h] [rbp+10h]

  v6 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
  *a2 = 0LL;
  v7 = (unsigned __int64 *)&v21;
  v23 = (char *)this + 32 * (a4 ^ 1LL) + 72;
  v10 = 24 - (32 * (a4 ^ 1LL) + 72);
  v11 = v23 - (char *)&v21;
  v13 = 0LL;
  do
  {
    if ( a3 )
      v14 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                          a5,
                          a6,
                          v6,
                          *(struct VIDMM_PARTITION **)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 240LL))
            + 2);
    else
      v14 = *(unsigned __int64 *)((char *)v7 + v11 + v10);
    v15 = *(unsigned __int64 *)((char *)v7 + v11);
    *v7 = v14;
    if ( v15 > v14 )
    {
      v20 = v15 - v14;
      if ( v13 <= v20 )
        v13 = v20;
      *a2 = v13;
      v17 = v13;
    }
    else
    {
      v16 = v14 - v15;
      v17 = *a2;
      *v7 = v16;
    }
    ++v6;
    ++v7;
    v18 = v13;
    v13 = v17;
  }
  while ( v6 < 2 );
  if ( !v18 )
  {
    v19 = *((_QWORD *)v23 + 2);
    if ( v19 > v22 + v21 )
      *a2 = v19 - (v22 + v21);
  }
}
