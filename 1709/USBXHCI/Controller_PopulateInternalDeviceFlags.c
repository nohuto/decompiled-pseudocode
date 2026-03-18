/*
 * XREFs of Controller_PopulateInternalDeviceFlags @ 0x1C0057F70
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C0057684 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall Controller_PopulateInternalDeviceFlags(__int64 a1)
{
  unsigned __int16 result; // ax
  __int16 v2; // dx

  *(_QWORD *)(a1 + 288) = 0LL;
  result = *(_WORD *)(a1 + 184);
  if ( result == 7027 )
  {
    v2 = *(_WORD *)(a1 + 188);
    if ( v2 == 4105 )
    {
      *(_QWORD *)(a1 + 288) = 2LL;
      return result;
    }
    if ( v2 != 4352 || *(_BYTE *)(a1 + 192) != 16 )
      return result;
    *(_QWORD *)(a1 + 288) = 1LL;
  }
  if ( result == 7023 )
  {
    if ( *(_WORD *)(a1 + 188) != 28707 )
      return result;
    *(_QWORD *)(a1 + 288) |= 0xCuLL;
  }
  if ( result == 6945 )
  {
    result = *(_WORD *)(a1 + 188) - 4160;
    if ( result <= 2u )
      *(_QWORD *)(a1 + 288) |= 0x10uLL;
  }
  return result;
}
