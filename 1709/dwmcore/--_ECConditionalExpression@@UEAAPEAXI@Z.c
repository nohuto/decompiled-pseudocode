/*
 * XREFs of ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x18015E290
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A32DC (--1CBaseExpression@@UEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z @ 0x18015EFF0 (-RemoveAt@-$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::`vector deleting destructor'(
        CConditionalExpression *this,
        char a2)
{
  unsigned int v2; // edi

  v2 = *((_DWORD *)this + 76);
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  while ( (--v2 & 0x80000000) == 0 )
    DynArray<CConditionalExpression::ConditionExpressionListEntry,1>::RemoveAt((char *)this + 280, v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 39);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 35);
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
