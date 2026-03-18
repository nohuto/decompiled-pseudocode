/*
 * XREFs of ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C01970C0
 * Callers:
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117888 (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C01C2508 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitBatch(
        struct _LIST_ENTRY **this,
        struct _LIST_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY *v6; // rdx
  __int64 v7; // r9
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  Flink = a2->Flink;
  if ( a2->Flink != a2 )
  {
    Blink = a2->Blink;
    if ( Flink->Blink != a2 || Blink->Flink != a2 )
      __fastfail(3u);
    Blink->Flink = Flink;
    v10 = (struct _LIST_ENTRY *)(this + 5);
    Flink->Blink = Blink;
    a2->Blink = a2;
    a2->Flink = a2;
    v6 = this[6];
    if ( (struct _LIST_ENTRY **)this[5]->Blink != this + 5 || v6->Flink != v10 )
      __fastfail(3u);
    if ( Flink->Flink->Blink != Flink || Flink->Blink->Flink != Flink )
      __fastfail(3u);
    v6->Flink = Flink;
    this[6] = Flink->Blink;
    Flink->Blink->Flink = v10;
    Flink->Blink = v6;
  }
  if ( this[5] == (struct _LIST_ENTRY *)(this + 5)
    || this[7]
    || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, (__int64)v6, (__int64)Flink, v7),
        v11 = DpiGdiAsyncDisplayCallout(),
        v13 = v11,
        v11 >= 0) )
  {
    LODWORD(v13) = 0;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v12, v6);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, (__int64)v6, (__int64)Flink, v7);
  return (unsigned int)v13;
}
