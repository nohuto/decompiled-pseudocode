/*
 * XREFs of CmpGetVolumeClusterSizeCompletion @ 0x140581A40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

__int64 __fastcall CmpGetVolumeClusterSizeCompletion(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
