/*
 * XREFs of RFONTOBJ_vConstructPRFONTWrap @ 0x1C00F0A90
 * Callers:
 *     <none>
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0033AB0 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ_vConstructPRFONTWrap(RFONTOBJ *a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  if ( a2 )
  {
    RFONTOBJ::vMakeInactive(a1);
    *(_QWORD *)a1 = 0LL;
  }
}
