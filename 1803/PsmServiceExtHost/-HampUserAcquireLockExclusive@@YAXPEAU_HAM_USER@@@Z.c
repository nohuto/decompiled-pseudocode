/*
 * XREFs of ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180068778
 * Callers:
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800687F8 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18001B190 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampUserAcquireLockExclusive(struct _HAM_USER *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired((__int64)a1, a2, 7u, 0);
  RtlAcquireSRWLockExclusive((char *)a1 + 168);
  *((_DWORD *)a1 + 44) = GetCurrentThreadId();
}
