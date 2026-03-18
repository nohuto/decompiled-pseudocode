/*
 * XREFs of PsRemoveSiloContext @ 0x140778A40
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140779ADC (PspSiloInitializeSystemRootBuffer.c)
 * Callees:
 *     PspStorageRemoveObject @ 0x14078098C (PspStorageRemoveObject.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_140466978;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
