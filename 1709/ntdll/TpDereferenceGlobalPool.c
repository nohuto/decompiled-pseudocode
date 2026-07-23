/*
 * XREFs of TpDereferenceGlobalPool @ 0x18001359C
 * Callers:
 *     RtlpTpWorkCallback @ 0x180010840 (RtlpTpWorkCallback.c)
 *     RtlpTpIoDllLoaded @ 0x18008FDD4 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x1800901F4 (RtlpTpIoAlloc.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x1800110F8 (TppPoolpDereferenceGlobalPool.c)
 */

void __fastcall TpDereferenceGlobalPool(PVOID a1, __int64 a2)
{
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, a2);
  }
  else
  {
    TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
  }
}
