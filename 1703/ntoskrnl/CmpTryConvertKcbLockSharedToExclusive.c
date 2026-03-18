/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x140491788
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14048FD04 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 * Callees:
 *     CmpLockTableConvertSharedToExclusive @ 0x1401DFAF4 (CmpLockTableConvertSharedToExclusive.c)
 */

char __fastcall CmpTryConvertKcbLockSharedToExclusive(__int64 a1)
{
  char v1; // bl
  bool v2; // zf

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), 1LL, 17LL) != 17 )
    return 0;
  v2 = (*(_DWORD *)(a1 + 4) & 0x100000) == 0;
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  if ( !v2 )
    CmpLockTableConvertSharedToExclusive(a1, *(_DWORD *)(a1 + 60));
  return v1;
}
