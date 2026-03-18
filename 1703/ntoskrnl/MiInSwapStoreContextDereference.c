/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1404C9E98
 * Callers:
 *     MiInSwapStoreWorker @ 0x1404C9E00 (MiInSwapStoreWorker.c)
 *     MiInSwapStore @ 0x1404C9F3C (MiInSwapStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
