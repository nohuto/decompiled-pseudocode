/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x14017C354
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14017C400 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char result; // al
  unsigned __int8 v5; // dl

  v2 = *(_QWORD *)(a1 + 240);
  if ( !v2 || v2 == *(_QWORD *)(a2 + 2072) )
    *(_BYTE *)(a1 + 248) &= ~4u;
  else
    *(_BYTE *)(a1 + 248) |= 4u;
  result = BYTE2(KiSpeculationFeatures);
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    v5 = *(_BYTE *)(a1 + 250);
    *(_BYTE *)(a1 + 251) = 1;
    *(_BYTE *)(a1 + 253) = 1;
    if ( *(_QWORD *)(a2 + 2072) )
    {
      *(_BYTE *)(a1 + 251) = 5;
      v5 |= 4u;
    }
    result = *(_BYTE *)(a1 + 253);
    if ( (*(_BYTE *)(a2 + 2064) & 0x10) != 0 )
      result = 5;
    *(_BYTE *)(a1 + 253) = result;
    if ( v5 != *(_BYTE *)(a1 + 250) )
    {
      *(_BYTE *)(a1 + 250) = v5;
      result = v5;
      __writemsr(0x48u, v5);
    }
  }
  return result;
}
