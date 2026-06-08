/*
 * XREFs of CpcSetTimeWindow @ 0x1C0007420
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0008E5C (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00090C8 (WriteGenAddrHidden.c)
 */

__int64 __fastcall CpcSetTimeWindow(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1[14] + 116LL;
  if ( *(_BYTE *)(*a1 + 78LL) )
    return WriteGenAddrHidden(*(unsigned int *)(*a1 + 80LL), result, a2);
  if ( a1[14] != -116LL )
    return WriteGenAddr(a1[14] + 116LL, a2);
  return result;
}
