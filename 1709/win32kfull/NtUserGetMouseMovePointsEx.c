/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x1C01E65F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetMouseMovePointsEx @ 0x1C01BB284 (_GetMouseMovePointsEx.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(int a1, ULONG64 a2, volatile void *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v9; // rcx
  ULONG64 v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int MouseMovePoints; // ebx
  __int128 v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int128 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-18h]

  v5 = a4;
  EnterCrit(0LL, 1LL);
  if ( a1 != 24 || (unsigned int)v5 > 0x40 )
  {
    v9 = 87LL;
    goto LABEL_10;
  }
  if ( *(_QWORD *)(gptiCurrent + 432LL) != grpdeskRitInput )
  {
    v9 = 5LL;
LABEL_10:
    UserSetLastError(v9, gptiCurrent);
    MouseMovePoints = -1;
    goto LABEL_11;
  }
  v10 = a2 + 24;
  if ( a2 + 24 < a2 || v10 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v18 = *(_OWORD *)a2;
  v19 = *(_QWORD *)(a2 + 16);
  v16 = v18;
  v17 = v19;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx((__int16 *)&v16, (__int64)a3, (unsigned int)v5, a5);
LABEL_11:
  UserSessionSwitchLeaveCrit(v13, v12);
  return MouseMovePoints;
}
