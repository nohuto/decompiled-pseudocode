/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C0050D6C
 * Callers:
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0050CDC (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0051EA0 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        VIDMM_PROCESS_BUDGET_STATE *this,
        unsigned __int64 *a2,
        char a3,
        unsigned __int8 a4,
        struct VIDMM_GLOBAL *a5,
        unsigned int a6)
{
  unsigned __int64 *v6; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v7; // esi
  char *v8; // rbp
  __int64 v10; // r15
  __int64 v12; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]

  *a2 = 0LL;
  v6 = (unsigned __int64 *)&v18;
  v7 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
  v8 = (char *)this + 32 * (a4 ^ 1LL) + 72;
  v10 = -(32 * (a4 ^ 1LL) + 72);
  v12 = v8 - (char *)&v18;
  do
  {
    if ( a3 )
      v14 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                          a5,
                          a6,
                          v7,
                          *(struct VIDMM_PARTITION **)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 168LL))
            + 2);
    else
      v14 = *(unsigned __int64 *)((char *)v6 + v10 + v12 + 24);
    v15 = *(unsigned __int64 *)((char *)v6 + v12);
    *v6 = v14;
    if ( v15 > v14 )
    {
      v17 = v15 - *v6;
      if ( *a2 > v17 )
        v17 = *a2;
      *a2 = v17;
    }
    else
    {
      *v6 = v14 - v15;
    }
    ++v7;
    ++v6;
  }
  while ( v7 < 2 );
  if ( !*a2 )
  {
    v16 = *((_QWORD *)v8 + 2);
    if ( v16 > v19 + v18 )
      *a2 = v16 - (v19 + v18);
  }
}
