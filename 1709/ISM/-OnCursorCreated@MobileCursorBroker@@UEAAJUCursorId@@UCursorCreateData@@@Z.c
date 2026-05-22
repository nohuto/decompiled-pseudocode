/*
 * XREFs of ?OnCursorCreated@MobileCursorBroker@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x180030180
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall MobileCursorBroker::OnCursorCreated(__int64 a1)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 445, 255);
  return 2147549183LL;
}
