/*
 * XREFs of ??0CExpressionManager@@AEAA@XZ @ 0x180155CBC
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180155E60 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18007E6CC (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1801835E8 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 */

CExpressionManager *__fastcall CExpressionManager::CExpressionManager(CExpressionManager *this)
{
  __int64 v2; // r9
  __int64 v3; // r9

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
    32LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>);
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 240, 0LL, 0, v2, 16);
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 272, 0LL, 0, v3, 8);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 304),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  return this;
}
