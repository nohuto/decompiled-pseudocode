/*
 * XREFs of DpiSetSchedulerCallbackState @ 0x1C003A230
 * Callers:
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01528D0 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetSchedulerCallbackState(__int64 a1, __int32 a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 3748LL), a2);
}
