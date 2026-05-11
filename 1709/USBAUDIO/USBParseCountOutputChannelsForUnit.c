/*
 * XREFs of USBParseCountOutputChannelsForUnit @ 0x1C001D7B4
 * Callers:
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D7B4 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseTerminalUnit @ 0x1C001DAB0 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C001DC00 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C001DE90 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C001DFC0 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C001E200 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C001E420 (USBParseExtensionUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x1C001D678 (USBParseGetUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D7B4 (USBParseCountOutputChannelsForUnit.c)
 */

__int64 __fastcall USBParseCountOutputChannelsForUnit(unsigned __int16 *a1, char *a2, int a3)
{
  unsigned int v5; // ebx
  unsigned __int8 *Unit; // rax
  __int64 v7; // r8

  v5 = 0;
  Unit = USBParseGetUnit(a1, a2, a3);
  if ( !Unit )
    return v5;
  switch ( Unit[2] )
  {
    case 2u:
      return Unit[7];
    case 3u:
      v7 = Unit[7];
      return (unsigned int)USBParseCountOutputChannelsForUnit(a1, a2, v7);
    case 4u:
      return Unit[Unit[4] + 5];
    case 5u:
      v7 = Unit[5];
      return (unsigned int)USBParseCountOutputChannelsForUnit(a1, a2, v7);
    case 6u:
      v7 = Unit[4];
      return (unsigned int)USBParseCountOutputChannelsForUnit(a1, a2, v7);
  }
  if ( (unsigned int)Unit[2] - 7 <= 1 )
    return Unit[Unit[6] + 7];
  return v5;
}
