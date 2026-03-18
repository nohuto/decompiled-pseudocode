/*
 * XREFs of _EnableShellWindowManagementBehavior @ 0x1C011B330
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 */

__int64 EnableShellWindowManagementBehavior()
{
  __int64 v0; // r8
  int v1; // r9d
  int v2; // r10d
  int v3; // r11d
  int v4; // ecx
  __int64 v6; // rcx

  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( (v2 & 0xFFFFFF80) != 0 )
    {
      v6 = 87LL;
    }
    else
    {
      v4 = v3 & ~v1 | v1 & v2 & gdwShellWindowManagementBehavior;
      if ( !v4 || *(_QWORD *)(v0 + 328) )
      {
        *(_DWORD *)(v0 + 336) = v4;
        return 1LL;
      }
      *(_DWORD *)(v0 + 336) = 0;
      v6 = 5023LL;
    }
  }
  else
  {
    v6 = 5LL;
  }
  UserSetLastError(v6);
  return 0LL;
}
