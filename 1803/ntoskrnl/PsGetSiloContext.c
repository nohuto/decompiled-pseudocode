/*
 * XREFs of PsGetSiloContext @ 0x140283DE0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageGetObject @ 0x140285C2C (PspStorageGetObject.c)
 */

__int64 __fastcall PsGetSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_140466978;
  *a3 = 0LL;
  return PspStorageGetObject(v3);
}
