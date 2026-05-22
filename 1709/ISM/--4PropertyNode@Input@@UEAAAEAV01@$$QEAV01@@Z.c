/*
 * XREFs of ??4PropertyNode@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x180030EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 */

__int64 __fastcall Input::PropertyNode::operator=(__int64 a1, __int64 a2)
{
  if ( a2 != a1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)a1);
  }
  return a1;
}
