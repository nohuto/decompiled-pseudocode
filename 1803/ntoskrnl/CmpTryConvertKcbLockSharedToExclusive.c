/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x1404A3370
 * Callers:
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1404A3C14 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
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
