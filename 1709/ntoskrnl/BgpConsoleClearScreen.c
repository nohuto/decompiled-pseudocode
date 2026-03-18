/*
 * XREFs of BgpConsoleClearScreen @ 0x1407D2F80
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x1407D2FB8 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( qword_14038D868 )
    v3 = BgpConsoleClearScreenEx(v1, v0, v2);
  else
    v3 = -1073741823;
  BgpFwReleaseLock();
  return v3;
}
