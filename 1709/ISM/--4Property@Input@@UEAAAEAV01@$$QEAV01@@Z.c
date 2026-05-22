/*
 * XREFs of ??4Property@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x180031420
 * Callers:
 *     ??4?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAAEAV?$ModifiedNotifier@VProperty@Input@@@1@$$QEAV21@@Z @ 0x180023C60 (--4-$PropertyModifiedAdapter@V-$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAAEAV-$Modi.c)
 * Callees:
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 */

__int64 __fastcall Input::Property::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  int v5; // edx
  int v6; // ecx

  if ( a2 != a1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)a1);
    v4 = (_QWORD *)(a2 + 32);
    if ( a2 + 32 != a1 + 32 )
    {
      v5 = *(_DWORD *)(a2 + 44);
      v6 = *(_DWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 32) = *v4;
      *(_DWORD *)(a1 + 40) = v6;
      *(_DWORD *)(a1 + 44) = v5;
      *v4 = 0LL;
      *(_QWORD *)(a2 + 40) = 0LL;
    }
  }
  return a1;
}
