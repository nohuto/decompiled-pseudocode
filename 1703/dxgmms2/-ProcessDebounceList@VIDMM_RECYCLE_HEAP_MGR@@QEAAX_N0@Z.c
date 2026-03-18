/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00645F0
 * Callers:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0064738 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C0064C30 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C0065060 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006F4EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C001166C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064A6C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064AF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C00676D0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0068D24 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0068E20 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
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
  char *v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  VIDMM_RECYCLE_MULTIRANGE *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rcx
  _QWORD *v28; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v29; // [rsp+28h] [rbp-8h]
  int v30; // [rsp+60h] [rbp+30h] BYREF

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1392);
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 174);
  v29 = &v28;
  v6 = &v28;
  v28 = &v28;
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
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17);
        v21[3] = v11;
        v21[4] = v19;
        v21[5] = **((_QWORD **)this + 1);
        WdLogEvent5_WdWarning(v21);
        v22 = v29;
        v23 = v11 + 13;
        if ( *v29 != &v28 )
          __fastfail(3u);
        v11[14] = v29;
        *v23 = &v28;
        *v22 = v23;
        v29 = (_QWORD **)(v11 + 13);
      }
      v20 = (VIDMM_RECYCLE_MULTIRANGE *)v11[17];
      if ( v20 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v20, 0);
    }
    while ( v5 != v3 );
    v6 = v28;
  }
  while ( v6 != &v28 )
  {
    v24 = v6 - 13;
    v6 = (_QWORD *)*v6;
    v25 = v24 + 13;
    v26 = v24[13];
    v27 = (_QWORD *)v24[14];
    if ( *(_QWORD **)(v26 + 8) != v24 + 13 || (_QWORD *)*v27 != v25 )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    v24[14] = 0LL;
    *v25 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, (struct VIDMM_RECYCLE_RANGE *)v24);
  }
  v12 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 176);
  while ( v12 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1408) )
  {
    v13 = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v15 = (char *)v12 - 104;
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
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v14, (struct VIDMM_RECYCLE_RANGE *)v15);
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v15, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v30);
    if ( !v30 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(*((VIDMM_RECYCLE_MULTIRANGE **)v15 + 17), 0);
  }
}
