/*
 * XREFs of ??4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z @ 0x180032050
 * Callers:
 *     ??4?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAAEAV01@AEBV01@@Z @ 0x180023EA0 (--4-$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ??$assign@PEAPEAVPropertyNode@Input@@X@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXPEAPEAVPropertyNode@Input@@0@Z @ 0x180032624 (--$assign@PEAPEAVPropertyNode@Input@@X@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPropert.c)
 */

__int64 __fastcall Input::PropertyVector::operator=(__int64 a1, __int64 a2)
{
  if ( a2 != a1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)a1);
    if ( a1 + 32 != a2 + 32 )
      std::vector<Input::PropertyNode *>::assign<Input::PropertyNode * *,void>(
        a1 + 32,
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40));
  }
  return a1;
}
