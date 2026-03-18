/*
 * XREFs of ObKillProcess @ 0x1404EDAA0
 * Callers:
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     ExSweepHandleTable @ 0x14042F3C0 (ExSweepHandleTable.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140432F5C (ExpRemoveHandleTable.c)
 */

void __fastcall ObKillProcess(_KPROCESS *a1)
{
  _QWORD *v1; // rdi
  BOOLEAN v3; // bl

  v1 = (_QWORD *)a1[1].ActiveProcessors.Bitmap[5];
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, (__int64)v1, 0);
    IoSetThreadHardErrorMode(v3);
    a1[1].ActiveProcessors.Bitmap[5] = 0LL;
    ExpRemoveHandleTable((__int64)v1);
    ExpFreeHandleTable(v1);
  }
}
