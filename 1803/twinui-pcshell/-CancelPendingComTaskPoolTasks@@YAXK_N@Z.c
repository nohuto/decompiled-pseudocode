/*
 * XREFs of ?CancelPendingComTaskPoolTasks@@YAXK_N@Z @ 0x180105954
 * Callers:
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1801115DC (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CancelPendingComTaskPoolTasks(__int64 a1)
{
  Windows::Internal::ComTaskPool::QueueTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___(a1, 0x102u, a1);
}
