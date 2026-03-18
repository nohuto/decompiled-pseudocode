/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1C01DB1F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     FeedbackGetWindowSetting @ 0x1C01B727C (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(__int64 a1, signed int a2, int a3, _DWORD *a4, unsigned int *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  int WindowSetting; // ebx
  unsigned int v15; // ebx
  unsigned int v17; // [rsp+24h] [rbp-54h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-50h]

  v18 = 0;
  EnterSharedCrit(0LL, 1LL);
  v13 = ValidateHwnd(a1);
  if ( v13 )
  {
    if ( a2 && a2 <= 13 && a4 && (a3 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(a4, 4uLL, 4u);
      v15 = *a4;
      v18 = v15;
      if ( v15 != 4 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
        *a4 = 4;
      }
      if ( Address && v15 < 4 )
      {
        WindowSetting = 0;
        UserSetLastError(122LL);
      }
      else
      {
        v17 = 0;
        WindowSetting = FeedbackGetWindowSetting(v13, a2, a3, &v17);
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v10 = v17;
          *Address = v17;
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87LL);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return WindowSetting;
}
