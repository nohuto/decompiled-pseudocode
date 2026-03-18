/*
 * XREFs of _DoUninitMessagePumpHook @ 0x1C0123980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DoUninitMessagePumpHook()
{
  __int64 v0; // rdx
  int v1; // eax

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_DWORD *)(v0 + 16);
  if ( v1 <= 0 )
    return 0LL;
  *(_DWORD *)(v0 + 16) = v1 - 1;
  return 1LL;
}
