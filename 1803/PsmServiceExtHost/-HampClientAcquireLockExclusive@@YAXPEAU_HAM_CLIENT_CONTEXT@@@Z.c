/*
 * XREFs of ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003487C
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800347D0 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180040DAC (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18001B190 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampClientAcquireLockExclusive(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired((__int64)a1, a2, 9u, 0);
  RtlAcquireSRWLockExclusive((char *)a1 + 24);
  *((_DWORD *)a1 + 8) = GetCurrentThreadId();
}
