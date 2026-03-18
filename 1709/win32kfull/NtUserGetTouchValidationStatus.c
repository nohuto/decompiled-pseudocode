/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C01E6E80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     _GetTouchValidationStatus @ 0x1C01BEAAC (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (LOBYTE(v4) = 19, (v3 = HMValidateHandle(a1, v4, v5, v6)) != 0) )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6LL, v7);
    UserSetLastError(0LL, v8);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return TouchValidationStatus;
}
