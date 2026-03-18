/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C010CEDC
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0109EBC (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this)
{
  __int64 v2; // rax

  if ( this[26] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 3614LL;
    WdLogEvent5_WdAssertion(v2);
  }
  DXGFASTMUTEX::Release(this + 25);
}
