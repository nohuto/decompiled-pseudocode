/*
 * XREFs of PopAvlFindOrMakeStatsForPowerRequest @ 0x140524BE4
 * Callers:
 *     PopStatsCreatePowerRequest @ 0x14052439C (PopStatsCreatePowerRequest.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006D500 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x14006DE30 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopAvlGetPowerRequestKey @ 0x140524CD0 (PopAvlGetPowerRequestKey.c)
 *     PopUnicodeStringDeepCopy @ 0x1405252C0 (PopUnicodeStringDeepCopy.c)
 *     PopFreeUnicodeString @ 0x140525474 (PopFreeUnicodeString.c)
 */

char *__fastcall PopAvlFindOrMakeStatsForPowerRequest(__int64 a1)
{
  char *v2; // rbx
  char *inserted; // rax
  BOOLEAN NewElement[16]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD Buffer[28]; // [rsp+30h] [rbp-F8h] BYREF

  memset(Buffer, 0, 0xD8uLL);
  v2 = *(char **)(a1 + 112);
  if ( !v2 && (int)PopAvlGetPowerRequestKey(a1, &Buffer[1]) >= 0 )
  {
    v2 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
    if ( !v2 )
    {
      inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer, 0xD8u, NewElement);
      v2 = inserted;
      if ( inserted )
      {
        if ( NewElement[0] )
        {
          memset(inserted, 0, 0xD8uLL);
          if ( (int)PopUnicodeStringDeepCopy((PUNICODE_STRING)(v2 + 8), (PCUNICODE_STRING)&Buffer[1]) < 0 )
            RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
        }
      }
    }
  }
  PopFreeUnicodeString(&Buffer[1]);
  return v2;
}
