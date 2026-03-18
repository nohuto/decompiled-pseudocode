/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C006815C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C009CCD0 (NtUserEndDeferWindowPosEx.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00CC280 (xxxProcessSetWindowPosEvent.c)
 *     xxxSetWindowRgn @ 0x1C0107570 (xxxSetWindowRgn.c)
 *     NtUserSetWindowBand @ 0x1C010F1D0 (NtUserSetWindowBand.c)
 *     xxxArrangeIconicWindows @ 0x1C013DA60 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B9428 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C00537F8 (xxxSetTrayWindow.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     SetWindowGroupBand @ 0x1C0056C00 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0056D64 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     DestroySMWP @ 0x1C00687B0 (DestroySMWP.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C00688B0 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0068964 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C0071E94 (GreClientRgnUpdatedStable.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00C9224 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     HMUnlockObject @ 0x1C00CF2F0 (HMUnlockObject.c)
 *     xxxDoSyncPaint @ 0x1C00E3344 (xxxDoSyncPaint.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C01046C8 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v3; // rbx
  _QWORD *v4; // r9
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  struct tagCVR *v20; // rsi
  int v21; // r14d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v23; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v29; // rsi
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // r14
  int v33; // esi
  char valid; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r14d
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // eax
  __int64 v47; // rdx
  int v48; // esi
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  struct _KTHREAD *v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  HWND v61; // [rsp+20h] [rbp-49h] BYREF
  __int64 v62; // [rsp+28h] [rbp-41h]
  _QWORD v63[3]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v64[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v65[3]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v66[9]; // [rsp+78h] [rbp+Fh] BYREF
  int v67; // [rsp+D0h] [rbp+67h] BYREF
  int v68; // [rsp+E0h] [rbp+77h]
  int v69; // [rsp+E8h] [rbp+7Fh]

  v3 = a1;
  v68 = 0;
  if ( !*((_DWORD *)a1 + 7) || !(unsigned int)ValidateSmwp(a1, &v67) )
    goto LABEL_104;
  v5 = *((int *)v3 + 7);
  v6 = 0;
  if ( (int)v5 <= 0 )
  {
LABEL_7:
    v9 = 0LL;
  }
  else
  {
    v4 = (_QWORD *)*((_QWORD *)v3 + 5);
    v7 = 0LL;
    v8 = v4;
    while ( !*v8 )
    {
      ++v6;
      ++v7;
      v8 += 21;
      if ( v7 >= v5 )
        goto LABEL_7;
    }
    v9 = &v4[21 * v6];
  }
  if ( !v9 )
    goto LABEL_104;
  v10 = 3LL * (unsigned __int16)*v9;
  v11 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*v9) + 104LL);
  if ( !v11 || !*(_QWORD *)(v11 + 24) )
    goto LABEL_104;
  v12 = 0;
  if ( (int)v5 > 0 )
  {
    v13 = 0LL;
    do
    {
      v14 = *((_QWORD *)v3 + 5);
      if ( *(_QWORD *)(v13 + v14) )
      {
        v10 = *(unsigned int *)(v13 + v14 + 152);
        if ( (_DWORD)v10 )
        {
          v15 = (unsigned __int16)*(_DWORD *)(v13 + v14);
          v5 = 3 * v15;
          v16 = *(_QWORD *)(gpKernelHandleTable + 24 * v15);
          if ( *(_DWORD *)(v16 + 320) != (_DWORD)v10 )
            SetWindowGroupBand((struct tagWND *)v16, v10, 0);
          *(_DWORD *)(v13 + *((_QWORD *)v3 + 5) + 152) = 0;
        }
      }
      ++v12;
      v13 += 168LL;
    }
    while ( v12 < *((_DWORD *)v3 + 7) );
  }
  if ( a2 )
    AsyncWindowPos(v3);
  v17 = *(_QWORD *)(v11 + 24);
  v18 = 0LL;
  if ( v17 )
  {
    v17 = *(_QWORD *)(v17 + 8);
    if ( v17 )
      v18 = *(_QWORD *)(v17 + 16);
  }
  if ( v11 != v18 )
  {
LABEL_36:
    v64[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v64;
    v64[1] = v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
      PushW32ThreadLock(v3, v63, UnrefAndDestroySMWP);
      v68 = 1;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v23 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v10, v5, v4) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v23 = *ThreadWin32Thread;
      }
      v63[0] = *(_QWORD *)(v23 + 16);
      *(_QWORD *)(v23 + 16) = v63;
      v63[2] = DestroySMWP;
      v63[1] = v3;
    }
    ++*(_DWORD *)(gptiCurrent + 1160LL);
    *((_DWORD *)v3 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v3, &v61) )
    {
      v29 = KeGetCurrentThread();
      v30 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27, v28) )
        PsGetThreadWin32Thread(v29);
      if ( (unsigned __int64)(unsigned __int16)v61 < *(_QWORD *)(gpsi + 8LL) )
      {
        v31 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v61 * LODWORD(gSharedInfo[2]);
        v32 = 3 * ((__int64)((unsigned int)(unsigned __int16)v61 * LODWORD(gSharedInfo[2])) >> 5);
        if ( (WORD1(v61) == *(_WORD *)(v31 + 26)
           || WORD1(v61) == 0xFFFF
           || !WORD1(v61) && PsGetCurrentProcessWow64Process(gpsi))
          && (*(_BYTE *)(v31 + 25) & 1) == 0
          && *(_BYTE *)(v31 + 24) == 1 )
        {
          v30 = *(_QWORD *)(gpKernelHandleTable + 8 * v32);
        }
      }
      v65[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v65;
      v65[1] = v30;
      if ( v30 )
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
      v33 = *(_DWORD *)(gptiCurrent + 872LL);
      v69 = v33;
      v62 = gptiForeground;
      valid = zzzBltValidBits((__int64)v3);
      LOBYTE(v36) = -(valid & 1);
      v37 = (valid & 1) != 0 ? v67 : 0;
      v67 = v37;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
      {
        v38 = *((int *)v3 + 7);
        if ( *((_DWORD *)v3 + 7) )
        {
          v39 = 168 * v38;
          do
          {
            v40 = *((_QWORD *)v3 + 5);
            v39 -= 168LL;
            --v38;
            v36 = *(_QWORD *)(v39 + v40);
            if ( v36 )
            {
              if ( (*(_DWORD *)(v39 + v40 + 32) & 0xF0000000) != 0 )
              {
                LOBYTE(v35) = 1;
                v41 = HMValidateHandleNoSecure(v36, v35);
                if ( v41 )
                {
                  v42 = *(_QWORD *)(gptiCurrent + 392LL);
                  v66[0] = v42;
                  *(_QWORD *)(gptiCurrent + 392LL) = v66;
                  v66[1] = v41;
                  _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
                  v43 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v39 + v43 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v39 + v43 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 21LL, *(_QWORD *)(v39 + v43));
                    }
                    else
                    {
                      PostShellHookMessagesEx(1u, *(_QWORD *)(v39 + v43), 0LL);
                      xxxCallHook(1LL, *(_QWORD *)(v39 + *((_QWORD *)v3 + 5)), 0LL, 10LL);
                    }
                  }
                  v44 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v39 + v44 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessagesEx(2u, *(_QWORD *)(v39 + v44), 0LL);
                    xxxCallHook(2LL, *(_QWORD *)(v39 + *((_QWORD *)v3 + 5)), 0LL, 10LL);
                  }
                  v45 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v39 + v45 + 32) & 0x40000000) != 0 )
                  {
                    v46 = *(_DWORD *)(v39 + v45 + 156);
                    if ( (v46 & 8) != 0 )
                    {
                      v47 = 23LL;
                    }
                    else
                    {
                      if ( (v46 & 0x10) == 0 )
                        xxxSetTrayWindow(*(_QWORD *)(v41 + 24), (__int64 *)v41);
                      v45 = *((_QWORD *)v3 + 5);
                      v47 = 19LL;
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), v47, *(_QWORD *)(v39 + v45));
                  }
                  if ( *(int *)(v39 + *((_QWORD *)v3 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 432LL), (__int64 *)1);
                  ThreadUnlock1(v42, v44);
                }
              }
            }
          }
          while ( v38 );
          v37 = v67;
          v33 = v69;
        }
      }
      if ( gptiCurrent == v62
        && v33
        && !*(_DWORD *)(gptiCurrent + 872LL)
        && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 400LL)) )
      {
        *(_DWORD *)(gptiCurrent + 464LL) |= 0x20u;
      }
      v48 = 0;
      if ( v30 )
        v48 = xxxSwpActivate((struct tagWND *)v30);
      if ( v37 )
        xxxDoSyncPaint(v11, 4LL);
      ThreadUnlock1(v36, v35);
      if ( v48 )
      {
        v52 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
        if ( v52 )
          SetOrClrWF(0LL, v52, 257LL, 1LL);
        v49 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 128LL);
        if ( v49 )
          SetOrClrWF(0LL, v49, 257LL, 1LL);
      }
      xxxSendChangedMsgs(v3, v49, v50, v51);
    }
    if ( (*(_DWORD *)(gptiCurrent + 1160LL))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    }
    v54 = KeGetCurrentThread();
    v55 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27, v28) )
    {
      v58 = (__int64 *)PsGetThreadWin32Thread(v54);
      if ( v58 )
        v55 = *v58;
    }
    *(_QWORD *)(v55 + 16) = v63[0];
    ThreadUnlock1(v57, v56);
    if ( v68 )
    {
      v59 = HMUnlockObject(v3);
      if ( !v59 )
        return 1LL;
      v60 = v59;
LABEL_105:
      DestroySMWP(v60);
      return 1LL;
    }
LABEL_104:
    v60 = (__int64)v3;
    goto LABEL_105;
  }
  result = (__int64)ZOrderByOwner(v3);
  v3 = (struct tagSMWP *)result;
  if ( result )
  {
    if ( a2 )
    {
      v20 = *(struct tagCVR **)(result + 40);
      v21 = *(_DWORD *)(result + 28);
      while ( --v21 >= 0 )
      {
        if ( *(_QWORD *)v20 && !(unsigned int)ValidateWindowPos(v20, 0LL) )
          *(_QWORD *)v20 = 0LL;
        v20 = (struct tagCVR *)((char *)v20 + 168);
      }
      AsyncWindowPos(v3);
    }
    goto LABEL_36;
  }
  return result;
}
