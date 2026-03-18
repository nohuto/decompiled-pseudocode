/*
 * XREFs of PopAvlFindOrMakeStatsForPowerRequest @ 0x1404E7B74
 * Callers:
 *     PopStatsCreatePowerRequest @ 0x1404E7DD4 (PopStatsCreatePowerRequest.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400DF250 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400DFCC0 (RtlInsertElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopUnicodeStringDeepCopy @ 0x1404E6130 (PopUnicodeStringDeepCopy.c)
 *     PopAvlGetPowerRequestKey @ 0x1404E7C68 (PopAvlGetPowerRequestKey.c)
 *     PopFreeUnicodeString @ 0x14058D284 (PopFreeUnicodeString.c)
 */

char *__fastcall PopAvlFindOrMakeStatsForPowerRequest(__int64 a1)
{
  char *v2; // rbx
  char *inserted; // rax
  BOOLEAN NewElement[16]; // [rsp+20h] [rbp-108h] BYREF
  int Buffer; // [rsp+30h] [rbp-F8h] BYREF
  UNICODE_STRING SourceString[13]; // [rsp+38h] [rbp-F0h] BYREF

  Buffer = 0;
  memset(SourceString, 0, sizeof(SourceString));
  v2 = *(char **)(a1 + 112);
  if ( !v2 && (int)PopAvlGetPowerRequestKey(a1, SourceString) >= 0 )
  {
    v2 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, &Buffer);
    if ( !v2 )
    {
      inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, &Buffer, 0xD8u, NewElement);
      v2 = inserted;
      if ( inserted )
      {
        if ( NewElement[0] )
        {
          memset(inserted, 0, 0xD8uLL);
          if ( PopUnicodeStringDeepCopy((PUNICODE_STRING)(v2 + 8), SourceString) < 0 )
            RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, &Buffer);
        }
      }
    }
  }
  PopFreeUnicodeString(SourceString);
  return v2;
}
