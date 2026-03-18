/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0082520
 * Callers:
 *     ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0001380 (-ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRAC.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  char v4; // bp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 1008, 0LL);
  *((_QWORD *)this + 127) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 1056) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)this + 134) )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v7);
      v8[3] = 275LL;
      v8[4] = 31LL;
      v8[5] = this;
      v8[6] = 0LL;
      v8[7] = 0LL;
      WdLogEvent5_WdCriticalError(v8);
    }
  }
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 125);
  *((_QWORD *)this + 125) = (char *)a2 + 56;
  *((_BYTE *)this + 1056) = 1;
  *((_QWORD *)this + 127) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1008, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 24LL));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)this + 32, DelayedWorkQueue);
  }
}
