/*
 * XREFs of ??4?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAAEAV01@AEBV01@@Z @ 0x180023EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z @ 0x180032050 (--4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall Input::ModifiedNotifier<Input::PropertyVector>::operator=(__int64 a1, __int64 a2)
{
  if ( a2 != a1 )
  {
    Input::PropertyVector::operator=();
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  }
  return a1;
}
