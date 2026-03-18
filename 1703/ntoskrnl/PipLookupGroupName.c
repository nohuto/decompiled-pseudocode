/*
 * XREFs of PipLookupGroupName @ 0x1407FA1E8
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     PipCheckDependencies @ 0x1407FA19C (PipCheckDependencies.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     PipCreateEntry @ 0x1407FA2E0 (PipCreateEntry.c)
 */

__int64 __fastcall PipLookupGroupName(PCUNICODE_STRING String1, int a2)
{
  __int64 v2; // rbx
  unsigned __int16 Length; // cx
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 i; // rsi

  v2 = IopGroupListHead;
  if ( IopGroupListHead )
  {
    Length = String1->Length;
    while ( 1 )
    {
      v6 = *(_WORD *)(v2 + 32);
      if ( Length < v6 )
      {
        v7 = *(_QWORD *)v2;
        if ( !*(_QWORD *)v2 )
        {
          if ( !a2 )
            return 0LL;
          result = PipCreateEntry(String1);
          *(_QWORD *)v2 = result;
          return result;
        }
      }
      else
      {
        if ( Length <= v6 )
        {
          if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v2 + 32), 1u) )
            return v2;
          for ( i = *(_QWORD *)(v2 + 16); i; i = *(_QWORD *)(i + 16) )
          {
            if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 32), 1u) )
              return i;
            v2 = *(_QWORD *)(v2 + 16);
          }
          if ( !a2 )
            return 0LL;
          result = PipCreateEntry(String1);
          *(_QWORD *)(v2 + 16) = result;
          return result;
        }
        v7 = *(_QWORD *)(v2 + 8);
        if ( !v7 )
        {
          if ( !a2 )
            return 0LL;
          result = PipCreateEntry(String1);
          *(_QWORD *)(v2 + 8) = result;
          return result;
        }
      }
      v2 = v7;
    }
  }
  if ( !a2 )
    return 0LL;
  result = ((__int64 (*)(void))PipCreateEntry)();
  IopGroupListHead = result;
  return result;
}
