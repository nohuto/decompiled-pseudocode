/*
 * XREFs of WmipSystemControl @ 0x140589AF0
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x140589B0C (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(a1, a1, a2);
}
