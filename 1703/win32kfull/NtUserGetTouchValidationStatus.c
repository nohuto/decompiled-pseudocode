/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C01DAC30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     _GetTouchValidationStatus @ 0x1C01BA7D4 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (v3 = HMValidateHandle(a1, 19)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6LL);
    UserSetLastError(0LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return TouchValidationStatus;
}
