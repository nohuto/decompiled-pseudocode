/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800317A8
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800198A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x1800C1374 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1800C26CC (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C2700 (-TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005F240 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x86E, v2, v3);
    __debugbreak();
  }
}
