/*
 * XREFs of RaUnitSwallowStopUnitCommand @ 0x1C003D820
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaUnitSwallowStopUnitCommand(__int64 a1)
{
  __int64 v1; // r8
  char v2; // dl
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 524) & 2) == 0 )
    return *(_DWORD *)(a1 + 192) >= 5;
  if ( (*(_BYTE *)(a1 + 153) & 4) == 0 && (*(_BYTE *)(v1 + 108) & 8) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 192);
    if ( v3 == 5 )
    {
      return *(_DWORD *)(a1 + 692) != 0;
    }
    else if ( v3 == 6 )
    {
      return *(_DWORD *)(a1 + 200) == 5;
    }
  }
  return v2;
}
