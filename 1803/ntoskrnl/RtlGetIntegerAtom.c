/*
 * XREFs of RtlGetIntegerAtom @ 0x1404B61A0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14003F560 (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x1404B6050 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x140552E50 (RtlUnicodeStringToInteger.c)
 */

char __fastcall RtlGetIntegerAtom(unsigned __int64 a1, _WORD *a2)
{
  wchar_t *v4; // rdx
  wchar_t *v5; // rax
  wchar_t v6; // cx
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)a1 < 0xC000u )
    {
      if ( !(_WORD)a1 )
        LOWORD(a1) = -16384;
      if ( a2 )
        *a2 = a1;
      return 1;
    }
    return 0;
  }
  if ( *(_WORD *)a1 != 35 )
    return 0;
  v4 = (wchar_t *)(a1 + 2);
  LOWORD(v5) = a1 + 2;
  if ( *(_WORD *)(a1 + 2) )
  {
    v6 = *v4;
    v5 = v4;
    while ( (unsigned __int16)(v6 - 48) <= 9u )
    {
      v6 = *++v5;
      if ( !*v5 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  String.Buffer = v4;
  String.Length = (_WORD)v5 - (_WORD)v4;
  String.MaximumLength = (_WORD)v5 - (_WORD)v4;
  Value = 0;
  if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) < 0 )
    return 0;
  if ( a2 )
  {
    if ( Value - 1 > 0xBFFF )
      *a2 = -16384;
    else
      *a2 = Value;
  }
  return 1;
}
