/*
 * XREFs of MiDereferenceEnclaveModule @ 0x1406E8874
 * Callers:
 *     MiFreeEnclaveModules @ 0x1406E8898 (MiFreeEnclaveModules.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
