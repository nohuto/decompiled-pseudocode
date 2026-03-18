/*
 * XREFs of PopDispatchShutdownEvent @ 0x140706C30
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14015D3BC (PopEventCalloutDispatch.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

struct _KTHREAD *PopDispatchShutdownEvent()
{
  unsigned __int32 v0; // eax
  struct _KTHREAD *result; // rax

  v0 = _InterlockedExchange(&PopShutdownEventCode, 0);
  if ( v0 )
    PopEventCalloutDispatch(1, v0);
  if ( PoPdcCallbacks )
    PoPdcCallbacks();
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
