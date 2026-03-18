/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C010657C
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1C0105F40 (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0101E9C (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(DXGADAPTER **this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _LIST_ENTRY *v5; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v8 + 24) = 7770LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)(this + 42));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( !*((_BYTE *)this + 376) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 7775LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_BYTE *)this + 376) = 0;
  v5 = (struct _LIST_ENTRY *)(this + 48);
  if ( v5->Flink != v5 )
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch((struct _LIST_ENTRY **)Global + 149, v5);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v2;
}
