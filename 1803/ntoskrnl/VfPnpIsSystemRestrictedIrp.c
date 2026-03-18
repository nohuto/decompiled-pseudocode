/*
 * XREFs of VfPnpIsSystemRestrictedIrp @ 0x14082D4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfPnpIsSystemRestrictedIrp(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  int v3; // eax
  int v5; // eax

  v1 = *(unsigned __int8 *)(a1 + 1);
  if ( v1 <= 0x12 )
  {
    if ( v1 >= 0x11 )
      return 1LL;
    if ( v1 > 0xB )
    {
      if ( v1 <= 0xD )
        return 1LL;
      v2 = v1 - 15;
    }
    else
    {
      if ( v1 >= 0xA || v1 <= 6 )
        return 1LL;
      if ( v1 == 7 )
      {
        v3 = *(_DWORD *)(a1 + 8);
        return !v3 || v3 != 1 && (v3 <= 2 || v3 > 4);
      }
      v2 = v1 - 8;
    }
    return v2 > 1;
  }
  if ( v1 == 19 )
  {
    v5 = *(_DWORD *)(a1 + 8);
    return v5 && v5 != 3;
  }
  return v1 != 22;
}
