/*
 * XREFs of CmpGetVolumeClusterSizeCompletion @ 0x14059B4D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

__int64 __fastcall CmpGetVolumeClusterSizeCompletion(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
