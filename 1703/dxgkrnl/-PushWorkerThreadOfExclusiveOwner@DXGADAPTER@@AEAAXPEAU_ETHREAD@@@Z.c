/*
 * XREFs of ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0006B78
 * Callers:
 *     ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1C00A5FF0 (-DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E7C6C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PushWorkerThreadOfExclusiveOwner(PERESOURCE *this, struct _ERESOURCE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD *v9; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 2374LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( this[21] )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v9[3] = 275LL;
    v9[4] = 17LL;
    v9[5] = this;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  this[21] = this[20];
  this[20] = a2;
}
