/*
 * XREFs of SepDetermineGlobalTableCheckNeededForQuery @ 0x1400600B0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140060010 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x1400A0A98 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1402C3964 (AuthzBasepSecurityAttributePresent.c)
 */

char __fastcall SepDetermineGlobalTableCheckNeededForQuery(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  unsigned int v8; // edi

  v3 = 1;
  if ( (SepSingletonGlobal[4] & 1) == 0 || !a2 )
    return 0;
  v8 = 0;
  if ( a3 )
  {
    while ( (unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a2 + 16LL * v8))
         && !(unsigned __int8)AuthzBasepSecurityAttributePresent(*(_QWORD *)(a1 + 776), a2 + 16LL * v8) )
    {
      if ( ++v8 >= a3 )
        return v3;
    }
    return 0;
  }
  return v3;
}
