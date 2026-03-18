/*
 * XREFs of NtUserTransformRect @ 0x1C00F0AC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  __int128 v15; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0;
  v13 = 0LL;
  v7 = a2 & 0x7FFFFFFF;
  if ( ((a2 & 0x7FFFFFFF) == 0x6010 || v7 == 34 || v7 == 18 || (a2 & 0x7FFE00FF) == 0x11)
    && ((v8 = a3 & 0x7FFFFFFF, (a3 & 0x7FFFFFFF) == 0x22) || v8 == 24592 || v8 == 18 || (a3 & 0x7FFE00FF) == 0x11) )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v15 = *a1;
    v6 = 1;
    LODWORD(v14) = (DWORD2(v15) + (int)v15) / 2;
    HIDWORD(v14) = (HIDWORD(v15) + DWORD1(v15)) / 2;
    v13 = GuessMonitorOverrideForCoordinateConversions(v14, a3, 0LL);
    LogicalToPhysicalDPIRect(&v15, &v15, a3, &v13);
    PhysicalToLogicalDPIRect(&v15, &v15, a2, &v13);
    *a1 = v15;
  }
  else
  {
    UserSetLastError(87LL, 24592LL);
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v6;
}
