/*
 * XREFs of ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C003A2E4
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C003A340 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C003A258 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ApiSetEditionHandleMitSignal @ 0x1C003A91C (ApiSetEditionHandleMitSignal.c)
 */

void __fastcall IOCPDispatcher::HandleThreadDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax

  if ( a2 < *((_DWORD *)this + 684) )
  {
    v2 = (__int64 *)((char *)this + 16 * a2 + 2576);
    v3 = v2[1];
    if ( v3 )
    {
      IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, v3, *v2, 2, a2);
      ApiSetEditionHandleMitSignal(*v2);
    }
  }
}
