/*
 * XREFs of IsPointerPrimary @ 0x1C01CA140
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 * Callees:
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

int __fastcall IsPointerPrimary(__int64 a1, __int16 a2)
{
  struct _LIST_ENTRY *ThreadPointerData; // rax

  ThreadPointerData = GetThreadPointerData((struct _LIST_ENTRY *)(a1 + 968), a2, 0LL, 0LL, 0LL);
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
