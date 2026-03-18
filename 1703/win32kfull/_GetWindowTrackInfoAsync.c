/*
 * XREFs of _GetWindowTrackInfoAsync @ 0x1C00B2F90
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C001BECC (IsShellProcess.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     IsThreadHung @ 0x1C00B6074 (IsThreadHung.c)
 */

__int64 __fastcall GetWindowTrackInfoAsync(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v3 + 376))
    && v4 != v2
    && (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 127LL, v4)
    && (*(_DWORD *)(v2 + 1096) & 0x20) == 0
    && !(unsigned int)IsThreadHung(v2, 0LL) )
  {
    return (int)PostEventMessageEx(
                  *(_QWORD *)(a1 + 16),
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL),
                  9u,
                  a1,
                  0x342u,
                  1LL,
                  0LL,
                  0LL);
  }
  UserSetLastError(5LL);
  return 0LL;
}
