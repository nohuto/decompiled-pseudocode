/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C006DA90
 * Callers:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     DestroyNotify @ 0x1C0058630 (DestroyNotify.c)
 *     xxxClientCallWinEventProc @ 0x1C006E0F4 (xxxClientCallWinEventProc.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C006E334 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00AA540 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     PostEventMessage @ 0x1C01C0B9C (PostEventMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  __int64 *ThreadWin32Thread; // rax
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int16 ProcessMachine; // bx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  struct _KTHREAD *v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rax
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // r14
  unsigned int v29; // edi
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rbx
  __int64 v32; // rdi
  struct tagNOTIFY **v33; // rax
  struct tagNOTIFY ***v34; // rcx
  struct tagNOTIFY **v35; // rbx
  struct tagNOTIFY **v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // r15
  unsigned int v42; // ecx
  int v43; // r14d
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  int v46; // eax
  int v47; // ecx
  __int16 v48; // bx
  struct tagNOTIFY ***v49; // rcx
  struct tagNOTIFY **v50; // rax
  struct tagNOTIFY **v51; // rbx
  struct tagNOTIFY **v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned int v55; // ecx
  _QWORD v56[9]; // [rsp+40h] [rbp-48h] BYREF
  int ProcessInformation; // [rsp+90h] [rbp+8h] BYREF
  char v58; // [rsp+94h] [rbp+Ch]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 48) & 0xC) == 4 )
    goto LABEL_54;
  v7 = *(unsigned int *)(v5 + 464);
  if ( (v7 & 0xD) != 0 )
    goto LABEL_54;
  if ( !gbEnforceUIPI )
  {
    v12 = *(_QWORD *)(v5 + 400);
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 400LL);
    if ( (*(_DWORD *)(v13 + 740) != *(_DWORD *)(v12 + 740) || *(_DWORD *)(v13 + 744) != *(_DWORD *)(v12 + 744))
      && (v7 & 0x400000) == 0 )
    {
      goto LABEL_54;
    }
  }
  v14 = *(_QWORD **)(v11 + 16);
  if ( v14[50] != *(_QWORD *)(v5 + 400) )
  {
    if ( (unsigned __int8)IsRestricted(*v14) )
      goto LABEL_54;
  }
  v15 = *(_QWORD *)(v11 + 16);
  v7 = *(_DWORD *)(v5 + 464) & 0x100;
  if ( (*(_DWORD *)(v15 + 464) & 0x100) != (_DWORD)v7 )
    goto LABEL_54;
  if ( (_DWORD)v7 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v15 + 400));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v5 + 400)) != ProcessMachine )
      goto LABEL_54;
  }
  v17 = gbEnforceUIPI;
  v18 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 400LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 400) + 832LL);
  v19 = *(_QWORD *)(v18 + 832);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v19 <= (unsigned int)v7 )
    {
      if ( (_DWORD)v19 != (_DWORD)v7
        || (v20 = HIDWORD(v19), v7 >>= 32, (_DWORD)v20 != (_DWORD)v7) && (_DWORD)v20 != -1 && (_DWORD)v7 != -1 )
      {
        v10 = 1;
      }
    }
  }
  if ( !v10
    && ((v10 = 0, *(_DWORD *)(v11 + 56)) && *(_QWORD *)(v11 + 48)
     || (unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 400LL))
     || (v17 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 400LL), *(int *)(v17 + 12) < 0)
     || (v7 = *(_QWORD *)(v5 + 400), v17 == v7)
     || (*(_DWORD *)(v17 + 776) & 0x100) != 0
     || !(unsigned int)IsImmersiveAppRestricted(v7)
     && (ProcessInformation = 6,
         ZwQueryInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessCookie|ProcessUserModeIOPL,
           &ProcessInformation,
           8u,
           0LL) >= 0)
     && (v58 & 1) == 0) )
  {
    if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
    {
      v21 = *(_QWORD *)(v11 + 24);
      DestroyNotify((struct tagNOTIFY **)a1);
      return v21;
    }
    v23 = KeGetCurrentThread();
    v24 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v17, v18, v8) )
    {
      v27 = (__int64 *)PsGetThreadWin32Thread(v23);
      if ( v27 )
        v24 = *v27;
    }
    v56[0] = *(_QWORD *)(v24 + 392);
    *(_QWORD *)(v24 + 392) = v56;
    v56[1] = v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    *(_QWORD *)(a1 + 56) = v5;
    if ( (*(_DWORD *)(v11 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v11);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v11 + 64);
    if ( EventProc )
    {
      v29 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v11 + 88));
      DLT = DLT_WINEVENT::getDLT();
      DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
      tagObjLock::UnLock(DomainLockRef);
      xxxClientCallWinEventProc(EventProc, v11, a1);
      tagObjLock::LockExclusive(DomainLockRef);
      W32SetCurrentThreadDpiAwarenessContext(v29);
    }
    *(_QWORD *)(a1 + 56) = 0LL;
    v32 = *(_QWORD *)(v11 + 24);
    ThreadUnlock1(v26, v25);
    v33 = gpPendingNotifies;
    v34 = &gpPendingNotifies;
    if ( gpPendingNotifies )
    {
      while ( v33 != (struct tagNOTIFY **)a1 )
      {
        v34 = (struct tagNOTIFY ***)v33;
        v33 = (struct tagNOTIFY **)*v33;
        if ( !v33 )
          return v32;
      }
      v35 = *v34;
      v36 = (struct tagNOTIFY **)**v34;
      *v34 = v36;
      if ( !v36 )
      {
        if ( !gpPendingNotifies )
          v34 = 0LL;
        gpLastPendingNotify = (__int64)v34;
      }
      HMAssignmentUnlock(v35 + 1);
      if ( v35 == (struct tagNOTIFY **)&unk_1C032B7D0 )
      {
        dword_1C0327620 = 0;
        return v32;
      }
      Win32FreePool(v35, v37, v38);
    }
    return v32;
  }
  else
  {
LABEL_54:
    v39 = *(_QWORD *)(v11 + 16);
    v40 = *(_QWORD *)(v11 + 24);
    v41 = *(_QWORD *)(v39 + 408);
    if ( v10 )
      EtwTraceUIPIEventHookError(a1, v39, v5);
    if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive(v7) && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
    {
      v42 = 0;
      v43 = ++gdwAtomicCheckSerial;
      if ( gdwAtomicCheckLogSize )
      {
        while ( *(_DWORD *)(((unsigned __int64)v42 << 6) + gpAtomickCheckStacks) )
        {
          if ( ++v42 >= gdwAtomicCheckLogSize )
            goto LABEL_65;
        }
        v44 = (unsigned __int64)v42 << 6;
        *(_DWORD *)(gpAtomickCheckStacks + v44) = gdwAtomicCheckSerial;
        *(_DWORD *)(v44 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
        *(_DWORD *)(v44 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        RtlWalkFrameChain((PVOID *)(v44 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
      }
    }
    else
    {
      v43 = ProcessInformation;
    }
LABEL_65:
    *(_DWORD *)(a1 + 48) |= 0xCu;
    if ( !v41
      || (v45 = *(_QWORD *)(v11 + 16), v45 == gptiRit)
      || (v46 = *(_DWORD *)(v11 + 40), (v46 & 1) != 0)
      || (v46 & 0x10) != 0
      && ((v47 = *(_DWORD *)(v5 + 464) & 0x100, (*(_DWORD *)(v45 + 464) & 0x100) != v47)
       || v47
       && (v48 = PsWow64GetProcessMachine(**(_QWORD **)(v45 + 400)),
           (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v5 + 400)) != v48))
      || !(unsigned int)PostEventMessage(*(_QWORD *)(v11 + 16), v41, 12, 0, 0, 0LL, a1) )
    {
      v50 = gpPendingNotifies;
      v49 = &gpPendingNotifies;
      if ( gpPendingNotifies )
      {
        while ( v50 != (struct tagNOTIFY **)a1 )
        {
          v49 = (struct tagNOTIFY ***)v50;
          v50 = (struct tagNOTIFY **)*v50;
          if ( !v50 )
            goto LABEL_84;
        }
        v51 = *v49;
        v52 = (struct tagNOTIFY **)**v49;
        *v49 = v52;
        if ( !v52 )
        {
          if ( !gpPendingNotifies )
            v49 = 0LL;
          gpLastPendingNotify = (__int64)v49;
        }
        HMAssignmentUnlock(v51 + 1);
        if ( v51 == (struct tagNOTIFY **)&unk_1C032B7D0 )
          dword_1C0327620 = 0;
        else
          Win32FreePool(v51, v53, v54);
      }
    }
LABEL_84:
    if ( gpresUser )
    {
      if ( (unsigned int)UserIsUserCritSecInExclusive(v49) )
      {
        --gdwInAtomicOperation;
        if ( gpAtomickCheckStacks )
        {
          v55 = 0;
          if ( gdwAtomicCheckLogSize )
          {
            while ( *(_DWORD *)(((unsigned __int64)v55 << 6) + gpAtomickCheckStacks) != v43 )
            {
              if ( ++v55 >= gdwAtomicCheckLogSize )
                return v40;
            }
            *(_DWORD *)(((unsigned __int64)v55 << 6) + gpAtomickCheckStacks) = 0;
          }
        }
      }
    }
    return v40;
  }
}
