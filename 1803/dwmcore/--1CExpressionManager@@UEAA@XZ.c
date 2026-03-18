/*
 * XREFs of ??1CExpressionManager@@UEAA@XZ @ 0x18017ED68
 * Callers:
 *     ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x18017EEB0 (--_ECExpressionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180023F08 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTargetMapEntry@@@Z @ 0x18013FB88 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTarget.c)
 *     ?clear@?$list@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@QEAAXXZ @ 0x18017F3CC (-clear@-$list@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-$pair@QEAVCChannelContext@@M@st.c)
 */

void __fastcall CExpressionManager::~CExpressionManager(CExpressionManager *this)
{
  char *v2; // rcx
  CTargetMapEntry *v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CExpressionManager::`vftable';
  v2 = (char *)*((_QWORD *)this + 58);
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*((_QWORD *)this + 60) - (_QWORD)v2) >> 3, 8uLL);
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
  }
  std::list<std::pair<CChannelContext * const,float>>::clear((char *)this + 448);
  std::_Deallocate(*((char **)this + 56), 1uLL, 0x20uLL);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    (_QWORD *)this + 51,
    &RestartKey,
    **((_QWORD ***)this + 51),
    *((_QWORD **)this + 51));
  std::_Deallocate(*((char **)this + 51), 1uLL, 0x20uLL);
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = (CTargetMapEntry *)RtlEnumerateGenericTableWithoutSplaying(
                              (PRTL_GENERIC_TABLE)((char *)this + 336),
                              &RestartKey);
    if ( !v3 )
      break;
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 336),
      v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 38);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 34);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 30);
  `vector destructor iterator'(
    (char *)this + 176,
    32LL,
    2LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))DynArray<CBaseExpression *,1>::~DynArray<CBaseExpression *,1>);
  *((_QWORD *)this + 5) = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 8);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
