/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C006407C
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0063590 (xxxSetWindowPosAndBand.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     NtUserSetWindowBand @ 0x1C00F1550 (NtUserSetWindowBand.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00FA060 (NtUserEndDeferWindowPosEx.c)
 *     xxxSetWindowRgn @ 0x1C00FC5F0 (xxxSetWindowRgn.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0108150 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C0137030 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B6194 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C0018E48 (xxxSetTrayWindow.c)
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     SetWindowGroupBand @ 0x1C001ED20 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C001EE80 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     DestroySMWP @ 0x1C0064650 (DestroySMWP.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006474C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0064790 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0064844 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C006CBE4 (GreClientRgnUpdatedStable.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00B3344 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     xxxDoSyncPaint @ 0x1C00C648C (xxxDoSyncPaint.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F4BFC (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v3; // rbx
  struct tagWINDOWPOS *ValidWindowPos; // rax
  _QWORD *v5; // r8
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // r14
  int v17; // esi
  bool v18; // cf
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // eax
  int v22; // r12d
  int v23; // esi
  bool v24; // zf
  __int64 v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 result; // rax
  struct tagCVR *v30; // rsi
  int v31; // r14d
  __int64 v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  _DWORD *v40; // rdx
  _DWORD *v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  _QWORD v45[3]; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v46[3]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v47[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v48[10]; // [rsp+70h] [rbp+7h] BYREF
  int v49; // [rsp+D0h] [rbp+67h] BYREF
  int v50; // [rsp+E0h] [rbp+77h]
  HWND v51; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a1;
  v50 = 0;
  if ( !*((_DWORD *)a1 + 7)
    || !(unsigned int)ValidateSmwp(a1, &v49)
    || (ValidWindowPos = FindValidWindowPos(v3)) == 0LL
    || (v5 = (_QWORD *)gpKernelHandleTable,
        (v6 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)ValidWindowPos) + 104LL)) == 0)
    || !*(_QWORD *)(v6 + 24) )
  {
LABEL_39:
    DestroySMWP(v3);
    return 1LL;
  }
  v7 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *((_QWORD *)v3 + 5);
      if ( *(_QWORD *)(v8 + v9) )
      {
        v10 = *(_DWORD *)(v8 + v9 + 152);
        if ( v10 )
        {
          v42 = *(_QWORD *)(*v5 + 16LL * (unsigned __int16)*(_DWORD *)(v8 + v9));
          if ( *(_DWORD *)(v42 + 320) != v10 )
          {
            SetWindowGroupBand((struct tagWND *)v42, v10, 0);
            v5 = (_QWORD *)gpKernelHandleTable;
          }
          *(_DWORD *)(v8 + *((_QWORD *)v3 + 5) + 152) = 0;
        }
      }
      ++v7;
      v8 += 168LL;
    }
    while ( v7 < *((_DWORD *)v3 + 7) );
  }
  if ( a2 )
    AsyncWindowPos(v3);
  v11 = *(_QWORD *)(v6 + 24);
  v12 = 0LL;
  if ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
      v12 = *(_QWORD *)(v13 + 16);
  }
  if ( v6 != v12 )
  {
LABEL_17:
    v46[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v46;
    v46[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      ++*((_DWORD *)v3 + 2);
      PushW32ThreadLock((__int64)v3, v45, (__int64)UnrefAndDestroySMWP);
      v50 = 1;
    }
    else
    {
      v14 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
      v45[0] = *(_QWORD *)(v14 + 16);
      *(_QWORD *)(v14 + 16) = v45;
      v45[2] = DestroySMWP;
      v45[1] = v3;
    }
    ++*(_DWORD *)(gptiCurrent + 1072LL);
    *((_DWORD *)v3 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v3, &v51) )
    {
      v16 = HMValidateHandleNoSecure((unsigned __int64)v51, 1);
      v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v47;
      v47[1] = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v17 = *(_DWORD *)(gptiCurrent + 784LL);
      LODWORD(v51) = v17;
      v18 = (unsigned int)zzzBltValidBits(v3) != 0;
      v21 = *((_DWORD *)v3 + 6);
      v22 = v18 ? v49 : 0;
      v49 = v22;
      if ( (v21 & 1) != 0 )
      {
        v32 = *((int *)v3 + 7);
        if ( *((_DWORD *)v3 + 7) )
        {
          v33 = 168 * v32;
          do
          {
            v34 = *((_QWORD *)v3 + 5);
            v33 -= 168LL;
            --v32;
            v20 = *(_QWORD *)(v33 + v34);
            if ( v20 )
            {
              if ( (*(_DWORD *)(v33 + v34 + 32) & 0xF0000000) != 0 )
              {
                v35 = HMValidateHandleNoSecure(v20, 1);
                if ( v35 )
                {
                  v36 = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v48;
                  v48[0] = v36;
                  v48[1] = v35;
                  ++*(_DWORD *)(v35 + 8);
                  v37 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v33 + v37 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v33 + v37 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 21LL, *(_QWORD *)(v33 + v37));
                    }
                    else
                    {
                      PostShellHookMessagesEx(1u, *(_QWORD *)(v33 + v37), 0LL);
                      xxxCallHook(1, *(_QWORD *)(v33 + *((_QWORD *)v3 + 5)), 0LL, 0xAu);
                    }
                  }
                  v38 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v33 + v38 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessagesEx(2u, *(_QWORD *)(v33 + v38), 0LL);
                    xxxCallHook(2, *(_QWORD *)(v33 + *((_QWORD *)v3 + 5)), 0LL, 0xAu);
                  }
                  v39 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v33 + v39 + 32) & 0x40000000) != 0 )
                  {
                    v43 = *(_DWORD *)(v33 + v39 + 156);
                    if ( (v43 & 8) != 0 )
                    {
                      v44 = 23LL;
                    }
                    else
                    {
                      if ( (v43 & 0x10) == 0 )
                        xxxSetTrayWindow(*(_QWORD *)(v35 + 24), (__int64 *)v35);
                      v39 = *((_QWORD *)v3 + 5);
                      v44 = 19LL;
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v44, *(_QWORD *)(v33 + v39));
                  }
                  if ( *(int *)(v33 + *((_QWORD *)v3 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 408LL), (__int64 *)1);
                  ThreadUnlock1(v36, v38);
                }
              }
            }
          }
          while ( v32 );
          v17 = (int)v51;
        }
        v22 = v49;
      }
      if ( gptiCurrent == gptiForeground
        && v17
        && !*(_DWORD *)(gptiCurrent + 784LL)
        && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
      {
        *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
      }
      v23 = 0;
      if ( v16 )
        v23 = xxxSwpActivate((struct tagWND *)v16);
      if ( v22 )
        xxxDoSyncPaint(v6, 4LL);
      ThreadUnlock1(v20, v19);
      if ( v23 )
      {
        v40 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        if ( v40 )
          SetOrClrWF(0, v40, 0x101u, 1);
        v41 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL);
        if ( v41 )
          SetOrClrWF(0, v41, 0x101u, 1);
      }
      xxxSendChangedMsgs(v3);
    }
    v24 = (*(_DWORD *)(gptiCurrent + 1072LL))-- == 1;
    if ( v24 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    }
    v25 = 0LL;
    v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v26 )
      v25 = *v26;
    *(_QWORD *)(v25 + 16) = v45[0];
    ThreadUnlock1(v28, v27);
    if ( v50 )
    {
      v24 = (*((_DWORD *)v3 + 2))-- == 1;
      if ( v24 )
        v3 = (struct tagSMWP *)HMUnlockObjectInternal(v3);
      if ( !v3 )
        return 1LL;
    }
    goto LABEL_39;
  }
  result = (__int64)ZOrderByOwner(v3);
  v3 = (struct tagSMWP *)result;
  if ( result )
  {
    if ( a2 )
    {
      v30 = *(struct tagCVR **)(result + 40);
      v31 = *(_DWORD *)(result + 28);
      while ( --v31 >= 0 )
      {
        if ( *(_QWORD *)v30 && !(unsigned int)ValidateWindowPos(v30, 0LL) )
          *(_QWORD *)v30 = 0LL;
        v30 = (struct tagCVR *)((char *)v30 + 168);
      }
      AsyncWindowPos(v3);
    }
    goto LABEL_17;
  }
  return result;
}
