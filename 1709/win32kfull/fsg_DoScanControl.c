/*
 * XREFs of fsg_DoScanControl @ 0x1C02C0CB0
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C105C (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall fsg_DoScanControl(__int16 a1, __int16 a2)
{
  return (a1 & 0x100) != 0 && (unsigned __int8)a2 <= (unsigned __int8)a1
      || (_BYTE)a1 == 0xFF && (a1 & 0x100) != 0
      || (a1 & 0x200) != 0 && (a2 & 0x400) != 0
      || (a1 & 0x400) != 0 && (a2 & 0x1000) != 0;
}
