/*
 * XREFs of NtUserSetWindowPos @ 0x1C0062D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0062F94 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     ConstrainWindowSize @ 0x1C006A144 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C00F9C70 (ConstrainWindowPos.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01D6618 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 v15; // rsi
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagWND *v19; // rdi
  __int64 v20; // r15
  __int64 *ThreadWin32Thread; // rax
  __int64 v22; // r15
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rcx
  struct tagWND *v28; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v29[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v30[4]; // [rsp+60h] [rbp-20h] BYREF
  int v31; // [rsp+C0h] [rbp+40h] BYREF
  int v32; // [rsp+C8h] [rbp+48h] BYREF

  v32 = a4;
  v31 = a3;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v14 = 0;
  v15 = v9;
  if ( v9 )
  {
    v11 = (*(_WORD *)(v9 + 82) & 0x3FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      v16 = a7;
      v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v29;
      v29[1] = v9;
      ++*(_DWORD *)(v9 + 8);
      if ( (v16 & 0xFFFC9800) != 0 )
      {
        v27 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v28) )
        {
LABEL_23:
          ThreadUnlock1(v18, v17);
          goto LABEL_24;
        }
        if ( *(char *)(v15 + 60) >= 0 )
        {
          if ( (v16 & 2) == 0 )
            ConstrainWindowPos(&v31, &v32);
          if ( (v16 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v19 = v28;
          if ( (unsigned __int64)v28 <= 1 || (unsigned __int64)v28 > 0xFFFFFFFFFFFFFFFDuLL )
            v19 = 0LL;
          v20 = 0LL;
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
            v20 = *ThreadWin32Thread;
          if ( (*(_BYTE *)(*(_QWORD *)(v20 + 432) + 224LL) & 1) == 0 )
          {
            v22 = 0LL;
            v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v23 )
              v22 = *v23;
            if ( (*(_BYTE *)(*(_QWORD *)(v22 + 432) + 224LL) & 0x20) == 0
              && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != (*(_DWORD *)(v15 + 368) & 0xF) )
            {
              TransformSWPCoords((struct tagWND *)v15, &v31, &v32, &a5, &a6, v16);
            }
          }
          v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v30;
          v30[1] = v19;
          if ( v19 )
            ++*((_DWORD *)v19 + 2);
          v14 = xxxSetWindowPos((struct tagWND *)v15, a5, a6, v16);
          ThreadUnlock1(v25, v24);
          goto LABEL_23;
        }
        v27 = 87LL;
      }
      UserSetLastError(v27);
      goto LABEL_23;
    }
  }
LABEL_24:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
