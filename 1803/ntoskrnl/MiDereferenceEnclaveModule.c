/*
 * XREFs of MiDereferenceEnclaveModule @ 0x1407522F0
 * Callers:
 *     MiFreeEnclaveModules @ 0x140752314 (MiFreeEnclaveModules.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
