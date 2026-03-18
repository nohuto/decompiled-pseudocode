/*
 * XREFs of PopAvlFindOrMakeStatsForAudio @ 0x1405E90A0
 * Callers:
 *     PopStatsNotifyAudioState @ 0x1405E9034 (PopStatsNotifyAudioState.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006D500 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x14006DE30 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopUnicodeStringDeepCopy @ 0x1405252C0 (PopUnicodeStringDeepCopy.c)
 *     PopFreeUnicodeString @ 0x140525474 (PopFreeUnicodeString.c)
 */

char *PopAvlFindOrMakeStatsForAudio()
{
  char *v0; // rbx
  char *inserted; // rax
  BOOLEAN NewElement[8]; // [rsp+20h] [rbp-118h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-110h] BYREF
  _QWORD Buffer[28]; // [rsp+40h] [rbp-F8h] BYREF

  memset(Buffer, 0, 0xD8uLL);
  RtlInitUnicodeString(&DestinationString, AUDIO_STATS_ID);
  PopUnicodeStringDeepCopy((PUNICODE_STRING)&Buffer[1], &DestinationString);
  v0 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
  if ( !v0 )
  {
    inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer, 0xD8u, NewElement);
    v0 = inserted;
    if ( inserted )
    {
      if ( NewElement[0] )
      {
        memset(inserted, 0, 0xD8uLL);
        if ( PopUnicodeStringDeepCopy((PUNICODE_STRING)(v0 + 8), (PCUNICODE_STRING)&Buffer[1]) < 0 )
          RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
      }
    }
  }
  PopFreeUnicodeString((__int64)&Buffer[1]);
  return v0;
}
