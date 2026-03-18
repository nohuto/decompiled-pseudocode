/*
 * XREFs of ResFwFindMessage @ 0x14083D940
 * Callers:
 *     BcpFindMessage @ 0x1408E4944 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1405BB760 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+48h] [rbp+10h] BYREF

  if ( qword_14039D8A8
    && *(_QWORD *)qword_14039D8A8
    && RtlFindMessage(*(PVOID *)qword_14039D8A8, 0xBu, 0, MessageId, &MessageResourceEntry) >= 0
    && (MessageResourceEntry->Flags & 1) != 0 )
  {
    return MessageResourceEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
