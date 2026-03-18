/*
 * XREFs of MiPageRead @ 0x1400485DC
 * Callers:
 *     MiPfExecuteReadList @ 0x1404BC628 (MiPfExecuteReadList.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 */

__int64 __fastcall MiPageRead(int a1, int a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  return IoPageReadEx(a1, a2, a3, a4, a5, a6, a7);
}
