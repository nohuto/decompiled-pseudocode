/*
 * XREFs of ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801873B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18003AEC4 (--1CBaseExpression@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ?RemoveAt@?$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z @ 0x180188180 (-RemoveAt@-$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::`vector deleting destructor'(
        CConditionalExpression *this,
        char a2)
{
  unsigned int v2; // edi
  void **i; // rbp

  v2 = *((_DWORD *)this + 80);
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  for ( i = (void **)((char *)this + 296);
        (--v2 & 0x80000000) == 0;
        DynArray<CConditionalExpression::ConditionExpressionListEntry,1>::RemoveAt(i, v2) )
  {
    ;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 41);
  DynArrayImpl<1>::~DynArrayImpl<1>(i);
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
