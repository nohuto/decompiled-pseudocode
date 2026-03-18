/*
 * XREFs of ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0007AAC
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007878 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     EditionFindThreadPointerData @ 0x1C0007AA0 (EditionFindThreadPointerData.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01C51E0 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01C5440 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01C6A38 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C6E90 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C77F8 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall FindThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v5; // rdx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  do
  {
    v5 = Flink;
    if ( LOWORD(Flink[1].Flink) == a2 )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  if ( Flink == a1 )
    return 0LL;
  return v5;
}
