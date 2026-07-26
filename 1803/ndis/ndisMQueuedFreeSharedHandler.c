/*
 * XREFs of ndisMQueuedFreeSharedHandler @ 0x1C00ECAF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisFreeSharedMemory @ 0x1C00B327C (ndisFreeSharedMemory_ea_1C00B327C.c)
 */

void __fastcall ndisMQueuedFreeSharedHandler(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r9

  v1 = *(_QWORD *)(a1 + 32);
  ndisFreeSharedMemory(v1, *(_DWORD *)(a1 + 40), *(_BYTE *)(a1 + 44), *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 64));
  ndisDereferenceMiniport(v1, 0x42u, v2, v3);
}
