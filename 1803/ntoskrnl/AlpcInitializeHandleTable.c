/*
 * XREFs of AlpcInitializeHandleTable @ 0x1404DD2E0
 * Callers:
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1404E0524 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = ExAllocateFromNPagedLookasideList(&stru_1403E2500);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_DWORD *)(a1 + 8) = 16;
  memset(v2, 0, 0x80uLL);
  return 0LL;
}
