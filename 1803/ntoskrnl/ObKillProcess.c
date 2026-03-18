/*
 * XREFs of ObKillProcess @ 0x1404F8400
 * Callers:
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14006CE40 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x140547650 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1405477A8 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x1405541A0 (ExSweepHandleTable.c)
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
