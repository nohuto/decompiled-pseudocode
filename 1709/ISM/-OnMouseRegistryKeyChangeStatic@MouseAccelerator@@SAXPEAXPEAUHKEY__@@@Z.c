/*
 * XREFs of ?OnMouseRegistryKeyChangeStatic@MouseAccelerator@@SAXPEAXPEAUHKEY__@@@Z @ 0x18006CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z @ 0x18006CFC4 (-OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall MouseAccelerator::OnMouseRegistryKeyChangeStatic(MouseAccelerator *a1, HKEY a2)
{
  if ( a1 )
    MouseAccelerator::OnMouseRegistryKeyChange(a1, a2);
}
