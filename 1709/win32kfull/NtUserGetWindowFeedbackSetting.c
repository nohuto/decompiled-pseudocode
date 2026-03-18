/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1C01E7440
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FeedbackGetWindowSetting @ 0x1C01BC5F4 (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(__int64 a1, signed int a2, int a3, _DWORD *a4, unsigned int *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  int WindowSetting; // ebx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+24h] [rbp-54h]
  unsigned int v18; // [rsp+38h] [rbp-40h]

  EnterSharedCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  if ( v11 )
  {
    if ( a2 && a2 <= 13 && a4 && (a3 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(a4, 4uLL, 4u);
      v14 = *a4;
      v18 = v14;
      if ( v14 != 4 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
        *a4 = 4;
      }
      if ( Address && v14 < 4 )
      {
        WindowSetting = 0;
        v17 = 0;
        UserSetLastError(122LL, v13);
      }
      else
      {
        v16 = 0;
        WindowSetting = FeedbackGetWindowSetting(v11, a2, a3, &v16);
        v17 = WindowSetting;
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v10 = v16;
          *Address = v16;
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87LL, v9);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return WindowSetting;
}
