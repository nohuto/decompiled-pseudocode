/*
 * XREFs of RtlGetIntegerAtom @ 0x1404FA690
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14008B560 (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x1404FA540 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x140428AD0 (RtlUnicodeStringToInteger.c)
 */

BOOLEAN __cdecl RtlGetIntegerAtom(PWSTR AtomName, PUSHORT IntegerAtom)
{
  PWSTR v4; // rcx
  wchar_t *v5; // rdx
  wchar_t i; // ax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)AtomName < 0xC000u )
    {
      if ( !(_WORD)AtomName )
        LOWORD(AtomName) = -16384;
      if ( IntegerAtom )
        *IntegerAtom = (unsigned __int16)AtomName;
      return 1;
    }
    return 0;
  }
  if ( *AtomName != 35 )
    return 0;
  v4 = AtomName + 1;
  v5 = v4;
  for ( i = *v4; i; i = *v5 )
  {
    if ( (unsigned __int16)(i - 48) > 9u )
      return 0;
    ++v5;
  }
  String.Buffer = v4;
  String.Length = (_WORD)v5 - (_WORD)v4;
  String.MaximumLength = (_WORD)v5 - (_WORD)v4;
  Value = 0;
  if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) < 0 )
    return 0;
  if ( IntegerAtom )
  {
    if ( Value - 1 > 0xBFFF )
      *IntegerAtom = -16384;
    else
      *IntegerAtom = Value;
  }
  return 1;
}
