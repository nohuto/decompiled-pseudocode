/*
 * XREFs of PipCslUpdateState @ 0x1406D4554
 * Callers:
 *     PipCslPoCallback @ 0x1406D4470 (PipCslPoCallback.c)
 *     PipCslSessionCallback @ 0x1406D44C0 (PipCslSessionCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PipCslUpdateState(__int32 a1)
{
  __int64 result; // rax
  __int32 v2; // ecx

  result = (unsigned int)_InterlockedExchange(&PipCslConsoleLockState, a1);
  if ( (_DWORD)result != a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        __fastfail(5u);
    }
    else if ( !PipCslAlwaysLocked )
    {
      return ((__int64 (*)(void))PipCslUnlockCallback)();
    }
  }
  return result;
}
