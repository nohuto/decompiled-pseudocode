/*
 * XREFs of ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18000C090
 * Callers:
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000A838 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180079100 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::shared_buffer::reset(LPVOID *this)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax

  v2 = (volatile signed __int32 *)*this;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *this);
    }
    *this = 0LL;
    this[1] = 0LL;
  }
}
