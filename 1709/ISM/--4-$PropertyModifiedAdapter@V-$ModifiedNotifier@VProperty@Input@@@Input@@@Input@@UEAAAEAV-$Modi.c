/*
 * XREFs of ??4?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAAEAV?$ModifiedNotifier@VProperty@Input@@@1@$$QEAV21@@Z @ 0x180023C60
 * Callers:
 *     <none>
 * Callees:
 *     ??4Property@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x180031420 (--4Property@Input@@UEAAAEAV01@$$QEAV01@@Z.c)
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
