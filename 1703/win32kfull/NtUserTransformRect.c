/*
 * XREFs of NtUserTransformRect @ 0x1C00E0260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  BOOL v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // r8
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v18[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF

  v6 = 1;
  EnterCrit(0LL, 1LL);
  v18[0] = 0LL;
  v7 = (a2 & 0x7FFFFFFF) == 0x10 || (a2 & 0x7FFFFFFF) == 0x11 || (a2 & 0x7FFFFFFF) == 0x12 || (a2 & 0x7FFFFFFF) == 0x22;
  if ( v7
    && ((a3 & 0x7FFFFFFF) != 0x10 && (a3 & 0x7FFFFFFF) != 0x11 && (a3 & 0x7FFFFFFF) != 0x12 && (a3 & 0x7FFFFFFF) != 0x22
      ? (v8 = 0)
      : (v8 = 1),
        v8
     && (v9 = MonitorFlagsFromDpiAwarenessContext(a2), v10 = MonitorFlagsFromDpiAwarenessContext(a3), v11 = v10, v9)
     && v10) )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v12 = (_OWORD *)W32UserProbeAddress;
    *v12 = *v12;
    v19 = *a1;
    LODWORD(v11) = v11 | 0x100;
    LogicalToPhysicalDPIRect(&v19, &v19, v11, v18);
    PhysicalToLogicalDPIRect(&v19, &v19, v9, v18);
    *a1 = v19;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v6;
}
