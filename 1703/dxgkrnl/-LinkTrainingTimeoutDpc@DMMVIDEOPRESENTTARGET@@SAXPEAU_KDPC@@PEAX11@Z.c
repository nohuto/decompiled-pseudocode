/*
 * XREFs of ?LinkTrainingTimeoutDpc@DMMVIDEOPRESENTTARGET@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C00452F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ecx

  do
  {
    v4 = *((_DWORD *)DeferredContext + 42);
    if ( v4 == 1 )
    {
      v5 = 2;
    }
    else
    {
      if ( v4 != 3 )
        return;
      v5 = 4;
    }
  }
  while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 42, v5, v4) );
  IoQueueWorkItemEx(
    *((PIO_WORKITEM *)DeferredContext + 20),
    DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem,
    DelayedWorkQueue,
    DeferredContext);
}
