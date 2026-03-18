/*
 * XREFs of GreCreateFastMutex @ 0x1C00762E4
 * Callers:
 *     HmgCreate @ 0x1C0075A30 (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C00FB6B0 (EngCreateFastMutex.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 */

struct _FAST_MUTEX *GreCreateFastMutex()
{
  struct _FAST_MUTEX *v0; // rax
  struct _FAST_MUTEX *v1; // rbx

  v0 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged(56LL, 0x6D736647u);
  v1 = v0;
  if ( v0 )
    KeInitializeGuardedMutex(v0);
  return v1;
}
