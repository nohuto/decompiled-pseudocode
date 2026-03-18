/*
 * XREFs of FreeProfileUserName @ 0x1C0099F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProfileUserName(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
    return PopAndFreeAlwaysW32ThreadLock(a2);
  return result;
}
