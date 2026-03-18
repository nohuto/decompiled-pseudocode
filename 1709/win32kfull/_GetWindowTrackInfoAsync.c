/*
 * XREFs of _GetWindowTrackInfoAsync @ 0x1C0084EB0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadHung @ 0x1C0085124 (IsThreadHung.c)
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 __fastcall GetWindowTrackInfoAsync(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v4 + 400))
    && v5 != v2
    && (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 127LL)
    && (*(_DWORD *)(v2 + 1184) & 0x20) == 0
    && !(unsigned int)IsThreadHung(v2, 0LL) )
  {
    return (int)PostEventMessageEx(*(struct tagTHREADINFO **)(a1 + 16), 834, 1LL, 0LL, 0LL);
  }
  UserSetLastError(5LL, v3);
  return 0LL;
}
