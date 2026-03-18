/*
 * XREFs of ?AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C016FC6C
 * Callers:
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01748A4 (DxgkAcquireAdapterOpmI2CSync.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::AcquireOpmI2CSync(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( this[26] == KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 3055LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 25));
}
