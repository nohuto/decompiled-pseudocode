/*
 * XREFs of ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C001AC80
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C015BE80 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECTLOCK::AcquireExclusive(DXGSYNCOBJECTLOCK *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx

  if ( *((_BYTE *)this + 8) )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v2[3] = 275LL;
    v2[4] = 4LL;
    v2[5] = this;
    v2[6] = 0LL;
    v2[7] = 0LL;
    WdLogEvent5_WdCriticalError(v2);
  }
  v3 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 344), 1u);
  *((_BYTE *)this + 8) = 1;
}
