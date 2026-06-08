/*
 * XREFs of CpcSetAutonomousMode @ 0x1C00070A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetAutonomousMode(_QWORD *a1, int a2)
{
  __int64 v2; // rax

  v2 = a1[14];
  if ( *(_BYTE *)(*a1 + 78LL) )
    return WriteGenAddrHidden(*(unsigned int *)(*a1 + 80LL), v2 + 188, a2 != 0);
  else
    return WriteGenAddr(v2 + 188, a2 != 0);
}
