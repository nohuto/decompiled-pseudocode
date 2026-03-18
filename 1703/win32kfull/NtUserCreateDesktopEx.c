/*
 * XREFs of NtUserCreateDesktopEx @ 0x1C0010310
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCreateDesktopEx(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // rbx
  int v11; // eax
  NTSTATUS Desktop; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rcx
  _QWORD v19[3]; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  v19[0] = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL) + 24LL) & 0x40;
  else
    v11 = 0;
  if ( v11 )
  {
    v18 = 5LL;
LABEL_15:
    UserSetLastError(v18);
    goto LABEL_11;
  }
  if ( a4 >= 2 || a2 || a3 )
  {
    v18 = 87LL;
    goto LABEL_15;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v19, 0);
  if ( Desktop < 0 )
  {
    v18 = RtlNtStatusToDosError(Desktop);
    goto LABEL_15;
  }
  v10 = v19[0];
LABEL_11:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v10;
}
