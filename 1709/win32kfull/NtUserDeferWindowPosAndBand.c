/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C009AA00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0066818 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1C00687B0 (DestroySMWP.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C009AB94 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     _DeferWindowPosAndBand @ 0x1C009ABD8 (_DeferWindowPosAndBand.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01E2EAC (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        struct tagWND *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  _DWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagWND *v32; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v33; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v34[16]; // [rsp+60h] [rbp-10h] BYREF
  int v35; // [rsp+A8h] [rbp+38h] BYREF

  v35 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v34);
  v16 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004LL, v13);
    v20 = 0LL;
  }
  else
  {
    LOBYTE(v13) = 4;
    v17 = (_DWORD *)HMValidateHandle(a1, v13, v14, v15);
    v20 = 0LL;
    v21 = v17;
    if ( v17 )
    {
      if ( (v17[6] & 4) != 0 )
      {
        if ( a10 )
          DestroySMWP(v17, v18, v19);
        UserSetLastError(1405LL, v18);
      }
      else if ( (unsigned int)ValidateHWNDND(a2, &v32) && (unsigned int)ValidateHWNDIA(a3, &v33) )
      {
        v24 = (int)v32;
        if ( v32 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 224LL) & 1) != 0
            || (v26 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456),
                (*(_BYTE *)(v26 + 224) & 0x20) != 0) )
          {
            v24 = (int)v32;
          }
          else
          {
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v26, v25);
            v24 = (int)v32;
            if ( ((*((_DWORD *)v32 + 92) >> 8) & 0x1FF) != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) )
              TransformSWPCoords(v32, &v35, &a5, &a6, &a7, v16);
          }
        }
        v28 = (__int64 *)DeferWindowPosAndBand((_DWORD)v21, v24, (_DWORD)v33, v35, a5, a6, a7, v16, a9, a10);
        if ( v28 )
          v20 = *v28;
      }
      else if ( a10 )
      {
        DestroySMWP(v21, v22, v23);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v34);
  UserSessionSwitchLeaveCrit(v30, v29);
  return v20;
}
