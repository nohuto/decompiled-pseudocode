/*
 * XREFs of ??4?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAAEAV?$ModifiedNotifier@VProperty@Input@@@1@AEBV21@@Z @ 0x180023C90
 * Callers:
 *     <none>
 * Callees:
 *     ??4Property@Input@@UEAAAEAV01@AEBV01@@Z @ 0x1800313B0 (--4Property@Input@@UEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall Input::PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>::operator=(
        __int64 a1,
        __int64 a2)
{
  if ( a2 != a1 )
  {
    Input::Property::operator=();
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  }
  return a1;
}
