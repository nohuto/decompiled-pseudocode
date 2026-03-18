/*
 * XREFs of ?SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A5250
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::SetProperty(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD, _QWORD, __int64); // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 160LL);
  if ( v4 == CPropertyBag::UpdatePropertyValue )
    return CPropertyBag::UpdatePropertyValue(a1, 1LL, a2, a3, a4);
  else
    return v4(a1, 1LL, a2, a3, a4);
}
