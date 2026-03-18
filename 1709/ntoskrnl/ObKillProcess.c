/*
 * XREFs of ObKillProcess @ 0x1404DCFD4
 * Callers:
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x1404DD040 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1404DD198 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x1404DD240 (ExSweepHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  void *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(void **)(a1 + 1048);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1048) = 0LL;
    ExpRemoveHandleTable(v1);
    ExpFreeHandleTable(v1);
  }
}
