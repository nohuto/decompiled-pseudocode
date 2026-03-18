/*
 * XREFs of While @ 0x1C001BF50
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     PushScope @ 0x1C001BFE8 (PushScope.c)
 */

__int64 __fastcall While(__int64 *a1, _QWORD *a2)
{
  unsigned int v4; // edx

  v4 = ValidateArgTypes((__int64)a1, a2[10], 0, (__int64)"I");
  if ( !v4 )
  {
    if ( *(_QWORD *)(a2[10] + 16LL) )
    {
      v4 = PushScope((_DWORD)a1, a1[15], a2[5], a2[4], a1[10], a1[11], a1[40], a2[11]);
      if ( !v4 )
        *(_DWORD *)(a1[52] + 16) |= 0x20000u;
    }
    else
    {
      a1[15] = a2[5];
    }
  }
  return v4;
}
