/*
 * XREFs of NtUserTransformPoint @ 0x1C01037C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C01038C0 (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = 1;
  EnterCrit(0LL, 1LL);
  v15[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2, v7, v8)
    && (unsigned int)IsValidKernelDpiAwarenessContext(a3, v9, v10) )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v16 = *a1;
    v15[0] = GuessMonitorOverrideForCoordinateConversions(v16, a3, 0LL);
    LogicalToPhysicalDPIPoint(&v16, &v16, a3, v15);
    PhysicalToLogicalDPIPoint(&v16, &v16, a2, v15);
    *a1 = v16;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL, v9);
  }
  UserSessionSwitchLeaveCrit(v13, v12);
  return v6;
}
