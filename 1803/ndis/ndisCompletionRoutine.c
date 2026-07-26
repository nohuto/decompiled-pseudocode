/*
 * XREFs of ndisCompletionRoutine @ 0x1C0025070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompletionRoutine(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  a3[1].Header.LockNV = *(_DWORD *)(a2 + 48);
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
