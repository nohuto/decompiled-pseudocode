/*
 * XREFs of IsForegroundShellFrameQueueAccessible @ 0x1C0051374
 * Callers:
 *     IsGpqForegroundAccessibleForPti @ 0x1C0050680 (IsGpqForegroundAccessibleForPti.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 400)) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 408);
  if ( gpqForeground != v3 || (*(_DWORD *)(v3 + 380) & 0x2000000) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 112LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 16);
  return v4 && *(_QWORD *)(v4 + 400) == *(_QWORD *)(a1 + 400);
}
