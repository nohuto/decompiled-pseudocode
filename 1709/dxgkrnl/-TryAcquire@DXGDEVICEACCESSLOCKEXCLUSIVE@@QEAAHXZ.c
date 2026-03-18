/*
 * XREFs of ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0003A10
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C0092E44 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0092F9C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  struct _KEVENT *v4; // rcx
  struct _KEVENT *v5; // rcx
  int v6; // edi
  __int64 v7; // rbx

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(v2 + 328) == 2;
  v4 = *(struct _KEVENT **)(v2 + 16);
  if ( v3 )
    v5 = v4 + 4;
  else
    v5 = v4 + 3;
  v6 = 0;
  if ( KeReadStateEvent(v5) )
  {
    v7 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 104), 0) )
      v6 = 1;
    else
      KeLeaveCriticalRegion();
    *((_DWORD *)this + 2) = v6;
  }
  return *((unsigned int *)this + 2);
}
