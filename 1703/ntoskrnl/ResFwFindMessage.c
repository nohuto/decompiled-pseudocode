/*
 * XREFs of ResFwFindMessage @ 0x1407586E4
 * Callers:
 *     BcpFindMessage @ 0x140837DA8 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140429F70 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+48h] [rbp+10h] BYREF

  if ( qword_140341AD8
    && *(_QWORD *)qword_140341AD8
    && RtlFindMessage(*(PVOID *)qword_140341AD8, 0xBu, 0, MessageId, &MessageResourceEntry) >= 0
    && (MessageResourceEntry->Flags & 1) != 0 )
  {
    return MessageResourceEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
