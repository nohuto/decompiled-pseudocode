/*
 * XREFs of NtUserSetWindowPos @ 0x1C00665E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0066818 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     ConstrainWindowSize @ 0x1C0072B20 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C0072DC8 (ConstrainWindowPos.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01E2EAC (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdi
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagWND *v19; // rsi
  __int64 v20; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v27; // r12
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagWND *v35; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v36[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v37[4]; // [rsp+60h] [rbp-20h] BYREF
  int v38; // [rsp+D0h] [rbp+50h] BYREF
  int v39; // [rsp+D8h] [rbp+58h] BYREF

  v39 = a4;
  v38 = a3;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v9;
  if ( v9 )
  {
    v11 = (*(_WORD *)(v9 + 82) & 0x3FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      v36[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v36;
      v36[1] = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v14 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v15 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v35) )
          goto LABEL_28;
        if ( *(char *)(v13 + 60) >= 0 )
        {
          if ( (v14 & 2) == 0 )
            ConstrainWindowPos(&v38, &v39);
          if ( (v14 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v19 = v35;
          v20 = 0LL;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned __int64)v35 - 2 > 0xFFFFFFFFFFFFFFFBuLL )
            v19 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v10, v17, v18) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v20 = *ThreadWin32Thread;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v20 + 456) + 224LL) & 1) == 0 )
          {
            v27 = KeGetCurrentThread();
            v28 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22, v24, v25) )
            {
              v31 = (__int64 *)PsGetThreadWin32Thread(v27);
              if ( v31 )
                v28 = *v31;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v28 + 456) + 224LL) & 0x20) == 0
              && ((*(_DWORD *)(v13 + 368) >> 8) & 0x1FF) != (((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                              v30,
                                                                              v29) >> 8) & 0x1FF) )
            {
              TransformSWPCoords((struct tagWND *)v13, &v38, &v39, &a5, &a6, v14);
            }
          }
          v37[0] = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = v37;
          v37[1] = v19;
          if ( v19 )
            _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
          v12 = xxxSetWindowPos((struct tagWND *)v13, a5, a6, v14);
          ThreadUnlock1(v33, v32);
          goto LABEL_28;
        }
        v15 = 87LL;
      }
      UserSetLastError(v15, v10);
LABEL_28:
      ThreadUnlock1(v16, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
