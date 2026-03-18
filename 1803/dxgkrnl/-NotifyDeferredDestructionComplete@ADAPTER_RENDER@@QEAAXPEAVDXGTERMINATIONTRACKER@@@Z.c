/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00A56A0
 * Callers:
 *     ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0001D70 (-ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRAC.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  char v4; // bp
  __int64 v5; // rcx
  _QWORD *v6; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 1024, 0LL);
  *((_QWORD *)this + 129) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 1072) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)this + 136) )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5);
      v6[3] = 275LL;
      v6[4] = 31LL;
      v6[5] = this;
      v6[6] = 0LL;
      v6[7] = 0LL;
      WdLogEvent5_WdCriticalError(v6);
    }
  }
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 127);
  *((_QWORD *)this + 127) = (char *)a2 + 56;
  *((_BYTE *)this + 1072) = 1;
  *((_QWORD *)this + 129) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1024, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 24LL));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 1040), DelayedWorkQueue);
  }
}
