/*
 * XREFs of PopAvlFindOrMakeStatsForAudio @ 0x140451A8C
 * Callers:
 *     PopStatsNotifyAudioState @ 0x140451A2C (PopStatsNotifyAudioState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400DF250 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400DFCC0 (RtlInsertElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopUnicodeStringDeepCopy @ 0x1404E6130 (PopUnicodeStringDeepCopy.c)
 *     PopFreeUnicodeString @ 0x14058D284 (PopFreeUnicodeString.c)
 */

char *PopAvlFindOrMakeStatsForAudio()
{
  char *v0; // rbx
  char *inserted; // rax
  BOOLEAN NewElement[8]; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  int Buffer; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString[13]; // [rsp+48h] [rbp-B8h] BYREF

  Buffer = 0;
  memset(SourceString, 0, sizeof(SourceString));
  RtlInitUnicodeString(&DestinationString, AUDIO_STATS_ID);
  PopUnicodeStringDeepCopy(SourceString, &DestinationString);
  v0 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, &Buffer);
  if ( !v0 )
  {
    inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, &Buffer, 0xD8u, NewElement);
    v0 = inserted;
    if ( inserted )
    {
      if ( NewElement[0] )
      {
        memset(inserted, 0, 0xD8uLL);
        if ( (int)PopUnicodeStringDeepCopy((PUNICODE_STRING)(v0 + 8), SourceString) < 0 )
          RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, &Buffer);
      }
    }
  }
  PopFreeUnicodeString(SourceString);
  return v0;
}
