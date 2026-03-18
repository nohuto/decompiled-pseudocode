/*
 * XREFs of GetContextHelpId @ 0x1C023C05C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall GetContextHelpId(__int64 a1)
{
  __int16 v2; // r11
  unsigned int Prop; // edx
  __int64 v4; // r10

  v2 = *(_WORD *)(gpsi + 1360LL);
  do
  {
    Prop = GetProp(a1, v2, 1);
    if ( Prop )
      break;
    a1 = (*(_BYTE *)(v4 + 71) & 0xC0) == 0x40 ? *(_QWORD *)(v4 + 104) : *(_QWORD *)(v4 + 120);
  }
  while ( a1 && (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x29D );
  return Prop;
}
