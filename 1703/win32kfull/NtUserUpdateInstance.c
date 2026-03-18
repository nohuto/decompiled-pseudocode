/*
 * XREFs of NtUserUpdateInstance @ 0x1C01E1050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C010FD54 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall NtUserUpdateInstance(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v6; // ebx
  unsigned int *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax

  v6 = 0;
  EnterCrit(0LL, 1LL);
  v7 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v7 = (unsigned int *)W32UserProbeAddress;
  *v7 = *v7;
  v8 = HMValidateHandleNoRip(a1, 9);
  if ( v8 )
  {
    xxxChangeMonitorFlags(v8, a3);
    v13 = MonitorFlags;
  }
  else
  {
    v6 = 16390;
    v13 = 0;
  }
  *a2 = v13;
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v6;
}
