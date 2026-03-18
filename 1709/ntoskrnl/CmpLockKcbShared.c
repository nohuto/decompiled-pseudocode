/*
 * XREFs of CmpLockKcbShared @ 0x1404E33F0
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400AF1C0 (CmpDoQueryKeyName.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 result; // rax

  result = ExAcquirePushLockSharedEx(a1 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  return result;
}
