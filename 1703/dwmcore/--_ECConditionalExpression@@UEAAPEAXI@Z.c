/*
 * XREFs of ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x18016AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18002F508 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z @ 0x18016B7FC (-RemoveAt@-$DynArray@UConditionExpressionListEntry@CConditionalExpression@@$00@@QEAAJI@Z.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::`vector deleting destructor'(
        CConditionalExpression *this,
        char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 64);
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  while ( (--v2 & 0x80000000) == 0 )
    DynArray<CConditionalExpression::ConditionExpressionListEntry,1>::RemoveAt((char *)this + 232, v2);
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 29);
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
