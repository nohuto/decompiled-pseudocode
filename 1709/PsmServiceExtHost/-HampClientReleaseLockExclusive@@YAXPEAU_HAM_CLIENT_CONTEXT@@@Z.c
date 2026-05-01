/*
 * XREFs of ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F698
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800477F8 (-HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActRemoveFromClient@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180047CF0 (-HampActRemoveFromClient@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180017F3C (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampClientReleaseLockExclusive(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 5u);
  *((_DWORD *)a1 + 8) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 24);
}
