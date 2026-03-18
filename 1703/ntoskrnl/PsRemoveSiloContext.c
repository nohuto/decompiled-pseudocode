/*
 * XREFs of PsRemoveSiloContext @ 0x1406DE390
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1406DF4CC (PspSiloInitializeSystemRootBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_1403FA958;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
