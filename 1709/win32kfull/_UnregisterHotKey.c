/*
 * XREFs of _UnregisterHotKey @ 0x1C00C34CC
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1C00C3450 (NtUserUnregisterHotKey.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D6230 (_RegisterWindowArrangementCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00C3550 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

__int64 __fastcall UnregisterHotKey(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx

  if ( (unsigned __int8)HKRemoveMatchingHotkeys(gptiCurrent, a1, a2, 3LL) )
  {
    qword_1C0327628 = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419LL, v2);
    return 0LL;
  }
}
