/*
 * XREFs of _EnableShellWindowManagementBehavior @ 0x1C0125200
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 EnableShellWindowManagementBehavior()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  int v2; // r9d
  int v3; // r10d
  int v4; // r11d
  int v5; // ecx
  __int64 v7; // rcx

  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( (v3 & 0xFFFFFF80) != 0 )
    {
      v7 = 87LL;
    }
    else
    {
      v5 = v4 & ~v2 | v3 & v2 & gdwShellWindowManagementBehavior;
      if ( !v5 || *(_QWORD *)(v1 + 328) )
      {
        *(_DWORD *)(v1 + 336) = v5;
        return 1LL;
      }
      *(_DWORD *)(v1 + 336) = 0;
      v7 = 5023LL;
    }
  }
  else
  {
    v7 = 5LL;
  }
  UserSetLastError(v7, v0);
  return 0LL;
}
