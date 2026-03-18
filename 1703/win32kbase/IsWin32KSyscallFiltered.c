/*
 * XREFs of IsWin32KSyscallFiltered @ 0x1C0076F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsWin32KSyscallFiltered(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  int v2; // eax
  _BYTE *v3; // r9
  int v5; // eax

  v1 = a1;
  v2 = PsGetWin32KFilterSet() - 1;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 0;
      v3 = gWin32KFilterBitArraySet3;
    }
    else
    {
      v3 = gWin32KFilterBitArraySet2;
    }
  }
  else
  {
    v3 = gWin32KFilterBitArraySet1;
  }
  if ( v3 )
    return ((unsigned __int8)(1 << (v1 & 7)) & v3[v1 >> 3]) != 0;
  return 0;
}
