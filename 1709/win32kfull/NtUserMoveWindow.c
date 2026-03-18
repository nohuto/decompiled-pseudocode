/*
 * XREFs of NtUserMoveWindow @ 0x1C0101A90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMoveWindow @ 0x1C0101C1C (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD v28[3]; // [rsp+30h] [rbp-38h] BYREF
  int v29; // [rsp+48h] [rbp-20h] BYREF
  int v30; // [rsp+4Ch] [rbp-1Ch]
  int v31; // [rsp+50h] [rbp-18h]
  int v32; // [rsp+54h] [rbp-14h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v15 = 0;
  v16 = v10;
  if ( v10 )
  {
    v12 = (*(_WORD *)(v10 + 82) & 0x3FFFu) - 669;
    if ( (v12 & 0xFFFFFFFD) != 0 )
    {
      v28[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v28;
      v28[1] = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
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
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gptiCurrent, v13, v14) + 456)
                     + 224LL) & 1) == 0 )
      {
        v22 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 456);
        if ( (*(_BYTE *)(v22 + 224) & 0x20) == 0
          && ((*(_DWORD *)(v16 + 368) >> 8) & 0x1FF) != (((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                          v22,
                                                                          v21,
                                                                          v23,
                                                                          v24) >> 8) & 0x1FF) )
        {
          v29 = a2;
          v31 = a4 + a2;
          v30 = a3;
          v32 = a3 + v15;
          TransformRectBetweenCoordinateSpaces(&v29, &v29, v16, 0LL);
          v15 = v32 - v30;
        }
      }
      v15 = xxxMoveWindow((struct tagWND *)v16, v15, a6);
      ThreadUnlock1(v26, v25);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v15;
}
