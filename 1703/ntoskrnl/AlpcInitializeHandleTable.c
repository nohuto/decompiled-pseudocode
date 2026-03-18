/*
 * XREFs of AlpcInitializeHandleTable @ 0x1404760E8
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x140445648 (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x14003F4BC (ExAllocateFromPagedLookasideList.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = ExAllocateFromPagedLookasideList(&stru_140380100);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_DWORD *)(a1 + 8) = 16;
  memset(v2, 0, 0x80uLL);
  return 0LL;
}
