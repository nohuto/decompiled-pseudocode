/*
 * XREFs of ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F6C0
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800477F8 (-HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActRemoveFromClient@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180047CF0 (-HampActRemoveFromClient@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x180017F7C (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampClientAcquireLockExclusive(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired((__int64)a1, a2, 5u, 0);
  RtlAcquireSRWLockExclusive((char *)a1 + 24);
  *((_DWORD *)a1 + 8) = GetCurrentThreadId();
}
