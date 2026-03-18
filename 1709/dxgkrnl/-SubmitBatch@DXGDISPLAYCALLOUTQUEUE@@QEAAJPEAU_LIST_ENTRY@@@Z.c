/*
 * XREFs of ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0101E9C
 * Callers:
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C010657C (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C0102020 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitBatch(struct _LIST_ENTRY **this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  Flink = a2->Flink;
  if ( a2->Flink != a2 )
  {
    if ( Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
      __fastfail(3u);
    Blink->Flink = Flink;
    v6 = (struct _LIST_ENTRY *)(this + 5);
    Flink->Blink = Blink;
    a2->Blink = a2;
    a2->Flink = a2;
    v7 = this[6];
    if ( (struct _LIST_ENTRY **)this[5]->Blink != this + 5 || v7->Flink != v6 )
      __fastfail(3u);
    if ( Flink->Flink->Blink != Flink || Flink->Blink->Flink != Flink )
      __fastfail(3u);
    v7->Flink = Flink;
    this[6] = Flink->Blink;
    Flink->Blink->Flink = v6;
    Flink->Blink = v7;
  }
  if ( this[5] == (struct _LIST_ENTRY *)(this + 5)
    || this[7]
    || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13), v8 = DpiGdiAsyncDisplayCallout(), v10 = v8, v8 >= 0) )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = v10;
    WdLogEvent5_WdError(v12);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return (unsigned int)v10;
}
