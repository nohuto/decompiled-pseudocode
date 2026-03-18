/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x140464508
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140464104 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     AlpcpSignal @ 0x14006AE10 (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 */

void __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1)
{
  void *v2; // rcx

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    AlpcpSignal(a1, 0);
    v2 = *(void **)(a1 + 32);
    if ( v2 )
      ObfDereferenceObject(v2);
  }
}
