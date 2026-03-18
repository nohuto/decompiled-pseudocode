/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117888
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1C0118CCC (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C01970C0 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(DXGADAPTER **this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGGLOBAL *Global; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v13 + 24) = 7121LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(this + 42), v5, v6);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  if ( !*((_BYTE *)this + 376) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v14 + 24) = 7126LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *((_BYTE *)this + 376) = 0;
  v11 = (struct _LIST_ENTRY *)(this + 48);
  if ( v11->Flink != v11 )
  {
    Global = DXGGLOBAL::GetGlobal(v8, v7, v9, v10);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch((struct DXGGLOBAL *)((char *)Global + 1208), v11);
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v7, v9, v10);
  return v2;
}
