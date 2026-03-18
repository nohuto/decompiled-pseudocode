/*
 * XREFs of IsPointerPrimary @ 0x1C01CE580
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 * Callees:
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01CB58C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

int __fastcall IsPointerPrimary(struct _LIST_ENTRY *a1, __int16 a2)
{
  struct _LIST_ENTRY *ThreadPointerData; // rax

  ThreadPointerData = GetThreadPointerData(a1 + 66, a2, 0LL, 0LL);
  if ( ThreadPointerData )
  {
    if ( (gdwMitConfig & 4) != 0 )
      LODWORD(ThreadPointerData) = CTouchProcessor::IsPointerPrimary(
                                     gpTouchProcessor,
                                     (unsigned __int64)ThreadPointerData);
    else
      LODWORD(ThreadPointerData) = -__CFSHR__(HIDWORD(ThreadPointerData[2].Flink), 4);
  }
  return (int)ThreadPointerData;
}
