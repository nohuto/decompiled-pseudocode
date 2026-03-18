/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x140477DB8
 * Callers:
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14047AD50 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpTryConvertKcbLockSharedToExclusive(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), 1LL, 17LL) != 17 )
    return 0;
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return v1;
}
