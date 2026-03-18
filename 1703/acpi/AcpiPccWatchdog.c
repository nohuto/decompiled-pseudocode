/*
 * XREFs of AcpiPccWatchdog @ 0x1C0052CF0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccCommandComplete @ 0x1C00525AC (AcpiPccCommandComplete.c)
 */

void __fastcall AcpiPccWatchdog(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( *(_DWORD *)(DeferredContext + 312) )
  {
    if ( (**(_WORD **)(DeferredContext + 48) & 1) == 0 )
    {
      if ( ++*(_DWORD *)(DeferredContext + 512) <= 0xAu )
      {
        KeSetTimer((PKTIMER)(DeferredContext + 320), (LARGE_INTEGER)-10000LL, (PKDPC)(DeferredContext + 384));
        return;
      }
      ++*(_DWORD *)(DeferredContext + 516);
    }
    AcpiPccCommandComplete(DeferredContext);
  }
}
