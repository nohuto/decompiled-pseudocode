/*
 * XREFs of DpiSetSchedulerCallbackState @ 0x1C0011A50
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0106688 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0173D5C (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetSchedulerCallbackState(__int64 a1, __int32 a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 3748LL), a2);
}
