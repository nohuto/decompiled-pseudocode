/*
 * XREFs of ?OnCursorOrientationChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorOrientationData@@@Z @ 0x180030200
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall MobileCursorBroker::OnCursorOrientationChanged(__int64 a1)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 484, 255);
  return 2147549183LL;
}
