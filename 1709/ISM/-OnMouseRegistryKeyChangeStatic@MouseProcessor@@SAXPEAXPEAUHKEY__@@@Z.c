/*
 * XREFs of ?OnMouseRegistryKeyChangeStatic@MouseProcessor@@SAXPEAXPEAUHKEY__@@@Z @ 0x18006C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnMouseRegistryKeyChange@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x18006C9F4 (-OnMouseRegistryKeyChange@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall MouseProcessor::OnMouseRegistryKeyChangeStatic(MouseProcessor *a1, HKEY a2)
{
  if ( a1 )
    MouseProcessor::OnMouseRegistryKeyChange(a1, a2);
}
