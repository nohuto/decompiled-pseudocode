/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x1406FA74C
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x14054E498 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntryByIndex(volatile signed __int32 *P, unsigned int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rcx

  v5 = *((_QWORD *)P + 205) + 24LL * a2;
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockEx(v5, 0LL, a3, a4);
  if ( _InterlockedExchangeAdd(P + 1072, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
