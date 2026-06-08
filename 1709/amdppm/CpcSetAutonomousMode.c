/*
 * XREFs of CpcSetAutonomousMode @ 0x1C00073D0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0008E5C (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00090C8 (WriteGenAddrHidden.c)
 */

__int64 __fastcall CpcSetAutonomousMode(_QWORD *a1, int a2)
{
  __int64 result; // rax

  result = a1[14] + 188LL;
  if ( *(_BYTE *)(*a1 + 78LL) )
    return WriteGenAddrHidden(*(unsigned int *)(*a1 + 80LL), result, a2 != 0);
  if ( a1[14] != -188LL )
    return WriteGenAddr(a1[14] + 188LL, a2 != 0);
  return result;
}
