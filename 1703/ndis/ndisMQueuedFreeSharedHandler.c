/*
 * XREFs of ndisMQueuedFreeSharedHandler @ 0x1C00E02E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreeSharedMemory @ 0x1C00BFA7C (ndisFreeSharedMemory_ea_1C00BFA7C.c)
 */

void __fastcall ndisMQueuedFreeSharedHandler(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  ndisFreeSharedMemory(v1, *(_DWORD *)(a1 + 40), *(_BYTE *)(a1 + 44), *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 64));
  ndisDereferenceMiniport(v1, 0x42u);
}
