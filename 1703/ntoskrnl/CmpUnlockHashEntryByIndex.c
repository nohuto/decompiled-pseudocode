/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x14066A508
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpUnlockHashEntryByIndex(__int64 a1, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 2800) + 24LL * a2;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(a1);
  return result;
}
