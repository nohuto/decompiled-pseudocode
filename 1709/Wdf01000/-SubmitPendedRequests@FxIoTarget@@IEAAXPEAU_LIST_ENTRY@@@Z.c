/*
 * XREFs of ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0064E58
 * Callers:
 *     ?Start@FxIoTarget@@UEAAJXZ @ 0x1C0088700 (-Start@FxIoTarget@@UEAAJXZ.c)
 * Callees:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088870 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::SubmitPendedRequests(FxIoTarget *this, _LIST_ENTRY *RequestListHead)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v5; // rax

  while ( 1 )
  {
    Flink = RequestListHead->Flink;
    if ( RequestListHead->Flink == RequestListHead )
      break;
    if ( Flink->Blink != RequestListHead || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    RequestListHead->Flink = v5;
    v5->Blink = RequestListHead;
    FxIoTarget::SubmitPendedRequest(this, (FxRequestBase *)&Flink[-8].Blink);
  }
}
