/*
 * XREFs of ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0019D58
 * Callers:
 *     ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1C010AEF0 (-DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D05C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PushWorkerThreadOfExclusiveOwner(PERESOURCE *this, struct _ERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 2700LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( this[21] )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
    v6[3] = 275LL;
    v6[4] = 17LL;
    v6[5] = this;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  this[21] = this[20];
  this[20] = a2;
}
