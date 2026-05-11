/*
 * XREFs of USBParseGetChannelConfigForUnit @ 0x1C002237C
 * Callers:
 *     USBParseGetChannelConfigForUnit @ 0x1C002237C (USBParseGetChannelConfigForUnit.c)
 *     USBParseTerminalUnit @ 0x1C00225D0 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C0022720 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C00229A0 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C0022AD0 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C0022D10 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C0022F30 (USBParseExtensionUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x1C002219C (USBParseGetUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002237C (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseGetChannelConfigForUnit(unsigned __int16 *a1, char *a2, int a3)
{
  unsigned int v5; // ebx
  unsigned __int8 *Unit; // rax
  unsigned __int8 v7; // r8
  __int64 v8; // r8

  v5 = 0;
  Unit = USBParseGetUnit(a1, a2, a3);
  if ( !Unit )
    return v5;
  v7 = Unit[2];
  switch ( v7 )
  {
    case 2u:
      return *((unsigned __int16 *)Unit + 4);
    case 3u:
      v8 = Unit[7];
      return (unsigned int)USBParseGetChannelConfigForUnit(a1, a2, v8);
    case 4u:
      return *(unsigned __int16 *)&Unit[Unit[4] + 6];
    case 5u:
      v8 = Unit[5];
      return (unsigned int)USBParseGetChannelConfigForUnit(a1, a2, v8);
    case 6u:
      v8 = Unit[4];
      return (unsigned int)USBParseGetChannelConfigForUnit(a1, a2, v8);
  }
  if ( (unsigned __int8)(v7 - 7) <= 1u )
    return *(unsigned __int16 *)&Unit[Unit[6] + 8];
  return v5;
}
