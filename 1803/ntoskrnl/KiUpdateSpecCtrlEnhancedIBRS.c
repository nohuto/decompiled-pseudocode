/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x1401A5FCC
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1401A6070 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char result; // al
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // dl

  v2 = *(_QWORD *)(a1 + 240);
  if ( !v2 || v2 == *(_QWORD *)(a2 + 2104) )
    *(_BYTE *)(a1 + 248) &= ~4u;
  else
    *(_BYTE *)(a1 + 248) |= 4u;
  result = BYTE2(KiSpeculationFeatures);
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    v5 = *(_BYTE *)(a1 + 250);
    *(_BYTE *)(a1 + 251) = 1;
    v6 = v5;
    *(_BYTE *)(a1 + 253) = 1;
    if ( *(_QWORD *)(a2 + 2104) )
    {
      *(_BYTE *)(a1 + 251) = 5;
      v6 = v5 | 4;
    }
    result = *(_BYTE *)(a1 + 253);
    if ( (*(_DWORD *)(a2 + 2092) & 0x2000) != 0 )
      result = 5;
    *(_BYTE *)(a1 + 253) = result;
    if ( v6 != v5 )
    {
      *(_BYTE *)(a1 + 250) = v6;
      result = v6;
      __writemsr(0x48u, v6);
    }
  }
  return result;
}
