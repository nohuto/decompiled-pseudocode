/*
 * XREFs of ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180084C7C
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180084800 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D804 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNotificationResource::GetChannelCallbackId(CNotificationResource *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 6);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 68);
  return result;
}
