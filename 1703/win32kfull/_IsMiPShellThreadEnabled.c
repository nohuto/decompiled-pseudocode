/*
 * XREFs of _IsMiPShellThreadEnabled @ 0x1C01BD020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsShellThreadMiPEnabled @ 0x1C00CCD80 (IsShellThreadMiPEnabled.c)
 */

__int64 IsMiPShellThreadEnabled()
{
  __int64 v0; // r8
  int v2; // eax
  unsigned int v3; // ecx

  v0 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( v0 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 168LL) )
  {
    if ( (*(_DWORD *)(v0 + 768) & 4) != 0 )
      return 1;
    v2 = IsShellThreadMiPEnabled(gptiCurrent);
    v3 = 0;
    if ( v2 )
      return 1;
    return v3;
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
