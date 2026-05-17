/*
 * XREFs of RtlTestProtectedAccess @ 0x18008F340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v2 = dword_1801237C0[3 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v2, a2 >> 4) )
      return 0;
  }
  return result;
}
