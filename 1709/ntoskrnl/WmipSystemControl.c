/*
 * XREFs of WmipSystemControl @ 0x1405706F0
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x14057070C (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(a1, a1, a2);
}
