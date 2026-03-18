/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C00F3410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00F35E0 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v12; // rcx
  char v13; // al
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h]

  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v10 = (__int64 *)W32UserProbeAddress;
    v15 = *v10;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) == 0 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v12 = v16;
      if ( (CurrentThreadDpiAwarenessContext & 0xF) != (*(_DWORD *)(v7 + 368) & 0xF) )
        v12 = v15;
      v16 = v12;
    }
    TransformPointBetweenCoordinateSpaces(&v15, &v15, v7, 0LL);
    if ( (unsigned int)DCEPtInRect(v7 + 128, v15) )
    {
      v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
      if ( (*(_BYTE *)(v6 + 224) & 1) == 0 )
      {
        v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
        if ( (*(_BYTE *)(v6 + 224) & 0x20) == 0 )
        {
          v13 = W32GetCurrentThreadDpiAwarenessContext();
          v6 = v15;
          if ( (v13 & 0xF) != (*(_DWORD *)(v7 + 368) & 0xF) )
            v6 = v16;
          v15 = v6;
        }
      }
      v5 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v5 = (__int64 *)W32UserProbeAddress;
      *v5 = *v5;
      *a2 = v15;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v4;
}
