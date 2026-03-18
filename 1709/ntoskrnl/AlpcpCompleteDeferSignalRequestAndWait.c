/*
 * XREFs of AlpcpCompleteDeferSignalRequestAndWait @ 0x1405728B8
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     AlpcpSignalAndWait @ 0x14006B0B0 (AlpcpSignalAndWait.c)
 *     AlpcpWaitForSingleObject @ 0x14011BDFC (AlpcpWaitForSingleObject.c)
 */

__int64 __fastcall AlpcpCompleteDeferSignalRequestAndWait(
        __int64 a1,
        void *a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *a5)
{
  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
    return AlpcpSignalAndWait(a1, a2, WrLpcReceive, a4, a5);
  else
    return AlpcpWaitForSingleObject(a2, WrLpcReceive, a4, (*(_DWORD *)(a1 + 48) & 0x200000) != 0, a5);
}
