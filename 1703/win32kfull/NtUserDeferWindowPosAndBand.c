/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C00457B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _DeferWindowPosAndBand @ 0x1C00455E4 (_DeferWindowPosAndBand.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0045944 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0062F94 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1C0064650 (DestroySMWP.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01D6618 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  struct tagWND *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  char CurrentThreadDpiAwarenessContext; // al
  __int64 *v27; // rax
  __int64 v28; // rbx
  struct tagWND *v30; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v31[8]; // [rsp+58h] [rbp-18h] BYREF
  struct tagWND *v32; // [rsp+60h] [rbp-10h] BYREF
  int v33; // [rsp+A8h] [rbp+38h] BYREF

  v33 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v31);
  v14 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004LL);
    goto LABEL_18;
  }
  LOBYTE(v13) = 4;
  v15 = HMValidateHandle(a1, v13);
  v20 = v15;
  if ( !v15 )
  {
LABEL_18:
    v28 = 0LL;
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v15 + 24) & 4) == 0 )
  {
    if ( (unsigned int)ValidateHWNDND(a2, &v30) && (unsigned int)ValidateHWNDIA(a3, &v32) )
    {
      v21 = v30;
      if ( v30 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v16, v18, v19) + 432) + 224LL) & 1) != 0
          || (v25 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v22, v23, v24) + 432),
              (*(_BYTE *)(v25 + 224) & 0x20) != 0) )
        {
          v21 = v30;
        }
        else
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v25);
          v21 = v30;
          if ( (CurrentThreadDpiAwarenessContext & 0xF) != (*((_DWORD *)v30 + 92) & 0xF) )
            TransformSWPCoords(v30, &v33, &a5, &a6, &a7, v14);
        }
      }
      v27 = (__int64 *)DeferWindowPosAndBand(v20, (__int64)v21, (unsigned __int64)v32, v33, a5, a6, a7, v14, a9, a10);
      if ( v27 )
      {
        v28 = *v27;
        goto LABEL_13;
      }
    }
    else if ( a10 )
    {
      DestroySMWP(v20);
    }
    goto LABEL_18;
  }
  if ( a10 )
    DestroySMWP(v15);
  v28 = 0LL;
  UserSetLastError(1405LL);
LABEL_13:
  if ( !v31[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v31);
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v28;
}
