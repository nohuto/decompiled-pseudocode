/*
 * XREFs of NtUserCreateDesktopEx @ 0x1C00D8640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall NtUserCreateDesktopEx(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  NTSTATUS Desktop; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  _QWORD v18[3]; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  v18[0] = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x20000000) != 0 )
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 728LL) + 24LL) & 0x40;
  else
    v12 = 0;
  if ( v12 )
  {
    v17 = 5LL;
LABEL_15:
    UserSetLastError(v17, v11);
    goto LABEL_11;
  }
  if ( a4 >= 2 || a2 || a3 )
  {
    v17 = 87LL;
    goto LABEL_15;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v18, 0);
  if ( Desktop < 0 )
  {
    v17 = RtlNtStatusToDosError(Desktop);
    goto LABEL_15;
  }
  v10 = v18[0];
LABEL_11:
  UserSessionSwitchLeaveCrit(v15, v14);
  return v10;
}
