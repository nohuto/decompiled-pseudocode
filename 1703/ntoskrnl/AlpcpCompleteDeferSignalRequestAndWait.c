/*
 * XREFs of AlpcpCompleteDeferSignalRequestAndWait @ 0x14043FB60
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     AlpcpSignalAndWait @ 0x1400E7A20 (AlpcpSignalAndWait.c)
 */

__int64 __fastcall AlpcpCompleteDeferSignalRequestAndWait(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        LARGE_INTEGER *a5)
{
  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
    return AlpcpSignalAndWait(a1, a2, WrLpcReceive, a4, a5, 0);
  else
    return AlpcpWaitForSingleObject(a2, WrLpcReceive, a4, (*(_DWORD *)(a1 + 48) & 0x200000) != 0, a5);
}
