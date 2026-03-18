/*
 * XREFs of VidSchiSetNextRunPacket @ 0x1C000DEEC
 * Callers:
 *     VidSchiCompleteRewindPacket @ 0x1C000DCA4 (VidSchiCompleteRewindPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C0026C00 (VidSchiReadCommandFromContextQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSetNextRunPacket(__int64 a1, __int64 a2)
{
  int v2; // r10d
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // eax

  v2 = 0;
  *(_QWORD *)(a1 + 656) = a2;
  if ( a2 )
  {
    v4 = ((unsigned int)(*(_DWORD *)(a2 + 48) - 4) <= 1) | *(_DWORD *)(a1 + 652) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 652) = v4;
    v5 = 0;
    if ( *(_DWORD *)(a2 + 48) == 3 )
      v5 = 2;
    v6 = v4 & 0xFFFFFFFD | v5;
    v7 = 0;
    *(_DWORD *)(a1 + 652) = v6;
    if ( *(_DWORD *)(a2 + 48) == 7 )
      v7 = 4;
    v8 = v6 & 0xFFFFFFFB | v7;
    *(_DWORD *)(a1 + 652) = v8;
    if ( *(_DWORD *)(a2 + 48) == 6 )
      v2 = 8;
    *(_DWORD *)(a1 + 652) = v8 & 0xFFFFFFF7 | v2;
  }
  else
  {
    *(_DWORD *)(a1 + 652) &= 0xFFFFFFF0;
  }
}
