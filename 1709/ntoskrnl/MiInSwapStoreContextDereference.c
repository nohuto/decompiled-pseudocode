/*
 * XREFs of MiInSwapStoreContextDereference @ 0x140444548
 * Callers:
 *     MiInSwapStore @ 0x1404443BC (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1404444B0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
