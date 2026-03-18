/*
 * XREFs of MiInSwapStoreContextDereference @ 0x14052D088
 * Callers:
 *     MiInSwapStore @ 0x14052C4A8 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x14052CFF0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
