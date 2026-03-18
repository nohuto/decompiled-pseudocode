/*
 * XREFs of NtUserTransformPoint @ 0x1C00F4600
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00F4718 (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r14d
  unsigned int v12; // eax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v20[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v6 = 1;
  EnterCrit(0LL, 1LL);
  v20[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2, v7, v8)
    && (unsigned int)IsValidKernelDpiAwarenessContext(a3, v9, v10)
    && (v11 = MonitorFlagsFromDpiAwarenessContext(a2), v12 = MonitorFlagsFromDpiAwarenessContext(a3), v13 = v12, v11)
    && v12 )
  {
    v14 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v14 = (_QWORD *)W32UserProbeAddress;
    *v14 = *v14;
    v21 = *a1;
    LODWORD(v13) = v12 | 0x100;
    LogicalToPhysicalDPIPoint(&v21, &v21, v13, v20);
    PhysicalToLogicalDPIPoint(&v21, &v21, v11, v20);
    *a1 = v21;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v6;
}
