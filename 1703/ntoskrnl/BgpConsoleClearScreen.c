/*
 * XREFs of BgpConsoleClearScreen @ 0x140759D90
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140759DC8 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( qword_14036F150 )
    v3 = BgpConsoleClearScreenEx(v1, v0, v2);
  else
    v3 = -1073741823;
  BgpFwReleaseLock();
  return v3;
}
