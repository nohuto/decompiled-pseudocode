/*
 * XREFs of ResFwFindMessage @ 0x1407CF674
 * Callers:
 *     BcpFindMessage @ 0x14086F160 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140516150 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+48h] [rbp+10h] BYREF

  if ( qword_14035A258
    && *(_QWORD *)qword_14035A258
    && RtlFindMessage(*(PVOID *)qword_14035A258, 0xBu, 0, MessageId, &MessageResourceEntry) >= 0
    && (MessageResourceEntry->Flags & 1) != 0 )
  {
    return MessageResourceEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
