/*
 * XREFs of USBParseConvertUnitsToFunctionUnits @ 0x1C0023730
 * Callers:
 *     <none>
 * Callees:
 *     USBParseConvertControlUnits @ 0x1C0023540 (USBParseConvertControlUnits.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C0023618 (USBParseConvertMIDIJacksAndElements.c)
 */

__int64 __fastcall USBParseConvertUnitsToFunctionUnits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( *(_BYTE *)(v4 + 5) )
    return USBParseConvertMIDIJacksAndElements(a1);
  result = USBParseConvertControlUnits(a1, v4, a3);
  if ( (int)result >= 0 )
    return USBParseConvertMIDIJacksAndElements(a1);
  return result;
}
