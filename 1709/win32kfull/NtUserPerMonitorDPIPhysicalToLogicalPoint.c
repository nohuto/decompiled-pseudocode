/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01EA150
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C0101130 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v19 = *a2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, (__int64)v8, v4, v5);
    v13 = CurrentThreadDpiAwarenessContext;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 456) + 224LL) & 1) == 0 )
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
      v20 = GuessMonitorOverrideForCoordinateConversions(v19, *(unsigned int *)(a1 + 368), 1LL);
      PhysicalToLogicalDPIPoint(&v19, &v19, *(unsigned int *)(a1 + 368), &v20);
      LODWORD(a1) = DCEPtInRect((_DWORD *)(a1 + 128), v19);
    }
    else
    {
      v21 = GuessMonitorOverrideForCoordinateConversions(v19, CurrentThreadDpiAwarenessContext, 1LL);
      PhysicalToLogicalDPIPoint(&v19, &v19, v13, &v21);
      LODWORD(a1) = 1;
      v17 = v19;
    }
    if ( (_DWORD)a1 )
    {
      *a2 = v17;
      LODWORD(a1) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return (int)a1;
}
