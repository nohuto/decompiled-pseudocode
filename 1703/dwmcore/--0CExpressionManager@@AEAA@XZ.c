/*
 * XREFs of ??0CExpressionManager@@AEAA@XZ @ 0x18002D7C0
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800CBEF0 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800338D0 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800B3368 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CExpressionManager *__fastcall CExpressionManager::CExpressionManager(CExpressionManager *this)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = -1LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CExpressionManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  CExpressionValueStack::CExpressionValueStack((CExpressionManager *)((char *)this + 40), this);
  *((_DWORD *)this + 43) = 0;
  `vector constructor iterator'(
    (CExpressionManager *)((char *)this + 176),
    0x20uLL,
    2uLL,
    DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>);
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 240, 0LL, 0LL);
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 272, 0LL, 0LL);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 304),
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  return this;
}
