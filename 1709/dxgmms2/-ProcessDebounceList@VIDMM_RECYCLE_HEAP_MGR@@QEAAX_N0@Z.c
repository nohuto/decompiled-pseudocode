/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068030
 * Callers:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C006817C (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C0068680 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C0068AD0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C0075484 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C001284C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00684B0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068534 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006B290 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C006C9B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C006CAB0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v5; // rdi
  _QWORD *v6; // rbx
  bool IsOverLimits; // al
  VIDMM_RECYCLE_HEAP_MGR *v10; // rcx
  _QWORD *v11; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v12; // rbx
  bool v13; // al
  VIDMM_RECYCLE_HEAP_MGR *v14; // rcx
  struct VIDMM_RECYCLE_RANGE *v15; // rdi
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  VIDMM_RECYCLE_MULTIRANGE *v20; // rcx
  unsigned __int8 v21; // dl
  VIDMM_RECYCLE_MULTIRANGE *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // r8
  _QWORD *v30; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v31; // [rsp+28h] [rbp-8h]
  int v32; // [rsp+60h] [rbp+30h] BYREF

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1392);
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 174);
  v31 = &v30;
  v6 = &v30;
  v30 = &v30;
  if ( v5 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1392) )
  {
    do
    {
      IsOverLimits = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
      v11 = (_QWORD *)((char *)v5 - 104);
      if ( a3 )
      {
        if ( !IsOverLimits )
          break;
      }
      else if ( a2 && v11[12] > *((_QWORD *)this + 178) )
      {
        break;
      }
      v5 = *(VIDMM_RECYCLE_HEAP_MGR **)v5;
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v10, (struct VIDMM_RECYCLE_RANGE *)v11);
      v16 = VIDMM_RECYCLE_RANGE::DebouncedUnlock((VIDMM_RECYCLE_RANGE *)v11);
      v19 = v16;
      if ( v16 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v18);
        v23[3] = v11;
        v23[4] = v19;
        v23[5] = **((_QWORD **)this + 1);
        WdLogEvent5_WdWarning(v23);
        v24 = v31;
        v25 = v11 + 13;
        if ( *v31 != &v30 )
          __fastfail(3u);
        v11[14] = v31;
        v17 = &v30;
        *v25 = &v30;
        *v24 = v25;
        v31 = (_QWORD **)(v11 + 13);
      }
      v20 = (VIDMM_RECYCLE_MULTIRANGE *)v11[17];
      if ( v20 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v20, (unsigned __int8)v17);
    }
    while ( v5 != v3 );
    v6 = v30;
  }
  while ( v6 != &v30 )
  {
    v26 = v6 - 13;
    v6 = (_QWORD *)*v6;
    v27 = v26 + 13;
    v28 = v26[13];
    if ( *(_QWORD **)(v28 + 8) != v26 + 13 || (v29 = (_QWORD *)v26[14], (_QWORD *)*v29 != v27) )
      __fastfail(3u);
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    v26[14] = 0LL;
    *v27 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, (struct VIDMM_RECYCLE_RANGE *)v26);
  }
  v12 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 176);
  while ( v12 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1408) )
  {
    v13 = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v12 - 104);
    if ( a3 )
    {
      if ( !v13 )
        return;
    }
    else if ( a2 && *((_QWORD *)v15 + 12) > *((_QWORD *)this + 178) )
    {
      return;
    }
    v12 = *(VIDMM_RECYCLE_HEAP_MGR **)v12;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v14, v15);
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v15, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v32);
    if ( !v32 )
    {
      v22 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v15 + 17);
      if ( v22 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v22, v21);
    }
  }
}
