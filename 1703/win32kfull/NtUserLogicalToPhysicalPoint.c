/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C00F3280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00F35E0 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  int v11; // esi
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v10 = (__int64 *)W32UserProbeAddress;
    v13 = *v10;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) != 0
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) != 0
      || (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == (*(_DWORD *)(v7 + 368) & 0xF) )
    {
      v11 = DCEPtInRect(v7 + 128, v13);
      TransformPointBetweenCoordinateSpaces(&v13, &v13, 0LL, v7);
    }
    else
    {
      TransformPointBetweenCoordinateSpaces(&v14, &v13, v7, 0LL);
      v11 = DCEPtInRect(v7 + 128, v14);
    }
    if ( v11 )
    {
      v5 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v5 = (__int64 *)W32UserProbeAddress;
      *v5 = *v5;
      *a2 = v13;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v4;
}
