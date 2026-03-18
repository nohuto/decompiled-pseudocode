/*
 * XREFs of NtUserMoveWindow @ 0x1C00F3ED0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMoveWindow @ 0x1C00F4050 (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-20h] BYREF
  int v23; // [rsp+4Ch] [rbp-1Ch]
  int v24; // [rsp+50h] [rbp-18h]
  int v25; // [rsp+54h] [rbp-14h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v15 = 0;
  v16 = v10;
  if ( v10 )
  {
    v12 = (*(_WORD *)(v10 + 82) & 0x3FFFu) - 669;
    if ( (v12 & 0xFFFFFFFD) != 0 )
    {
      v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v21;
      v21[1] = v10;
      ++*(_DWORD *)(v10 + 8);
      if ( a2 > 0x7FFF )
      {
        a2 = 0x7FFF;
      }
      else if ( a2 < -32768 )
      {
        a2 = -32768;
      }
      if ( a3 > 0x7FFF )
      {
        a3 = 0x7FFF;
      }
      else if ( a3 < -32768 )
      {
        a3 = -32768;
      }
      if ( a4 < 0 )
      {
        a4 = 0;
      }
      else if ( a4 > 0x7FFF )
      {
        a4 = 0x7FFF;
      }
      v17 = a5;
      if ( a5 >= 0 )
      {
        if ( a5 > 0x7FFF )
          v17 = 0x7FFF;
        v15 = v17;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0
        && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) == 0
        && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != (*(_DWORD *)(v16 + 368) & 0xF) )
      {
        v22 = a2;
        v24 = a4 + a2;
        v23 = a3;
        v25 = a3 + v15;
        TransformRectBetweenCoordinateSpaces(&v22, &v22, v16, 0LL);
        v15 = v25 - v23;
      }
      v15 = xxxMoveWindow((struct tagWND *)v16, v15, a6);
      ThreadUnlock1(v19, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
