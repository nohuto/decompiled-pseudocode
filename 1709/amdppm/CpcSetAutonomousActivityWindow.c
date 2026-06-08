/*
 * XREFs of CpcSetAutonomousActivityWindow @ 0x1C0007360
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0008E5C (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00090C8 (WriteGenAddrHidden.c)
 */

__int64 __fastcall CpcSetAutonomousActivityWindow(__int64 *a1, unsigned int a2)
{
  char v2; // r8
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = 0;
  while ( a2 > 0x7F )
  {
    ++v2;
    a2 /= 0xAu;
  }
  v3 = a2 & 0x7F | (unsigned __int64)((unsigned __int8)(v2 & 7) << 7);
  v4 = a1[14];
  v5 = *a1;
  result = v4 + 200;
  if ( *(_BYTE *)(v5 + 78) )
    return WriteGenAddrHidden(*(unsigned int *)(v5 + 80), result, v3);
  if ( result )
    return WriteGenAddr(result, v3);
  return result;
}
