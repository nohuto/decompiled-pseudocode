/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C0058528
 * Callers:
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0054AA0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxClientCallWinEventProc @ 0x1C005C214 (xxxClientCallWinEventProc.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C005C32C (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     DestroyNotify @ 0x1C00D8D34 (DestroyNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // r14d
  int v4; // ecx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rbp
  int v15; // ebx
  __int64 v16; // rdi
  struct tagNOTIFY **v17; // rax
  struct tagNOTIFY ****v18; // rdx
  struct tagNOTIFY ***v19; // rbx
  struct tagNOTIFY **v20; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r15
  unsigned int v25; // ecx
  int v26; // r14d
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // ecx
  struct tagNOTIFY **v31; // rax
  struct tagNOTIFY ****v32; // rdx
  struct tagNOTIFY ***v33; // rbx
  struct tagNOTIFY **v34; // rax
  __int64 v35; // rcx
  __int16 ProcessMachine; // bx
  __int64 v37; // rcx
  __int16 v38; // bx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rbx
  _QWORD v42[4]; // [rsp+40h] [rbp-48h] BYREF
  int ProcessInformation; // [rsp+90h] [rbp+8h] BYREF
  int v44; // [rsp+94h] [rbp+Ch]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 0xC) == 4 )
    goto LABEL_31;
  v4 = *(_DWORD *)(gptiCurrent + 440LL);
  if ( (v4 & 0xD) != 0 )
    goto LABEL_31;
  if ( !gbEnforceUIPI )
  {
    v39 = *(_QWORD *)(gptiCurrent + 376LL);
    v40 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 376LL);
    if ( (*(_DWORD *)(v40 + 732) != *(_DWORD *)(v39 + 732) || *(_DWORD *)(v40 + 736) != *(_DWORD *)(v39 + 736))
      && (v4 & 0x400000) == 0 )
    {
      goto LABEL_31;
    }
  }
  v5 = *(_QWORD **)(v1 + 16);
  if ( v5[47] != *(_QWORD *)(gptiCurrent + 376LL) )
  {
    if ( (unsigned __int8)IsRestricted(*v5) )
      goto LABEL_31;
  }
  v6 = *(_QWORD *)(v1 + 16);
  v7 = *(_DWORD *)(gptiCurrent + 440LL) & 0x100;
  if ( (*(_DWORD *)(v6 + 440) & 0x100) != v7 )
    goto LABEL_31;
  if ( v7 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v6 + 376));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 376LL)) != ProcessMachine )
      goto LABEL_31;
  }
  v8 = gbEnforceUIPI;
  v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 376LL) + 824LL);
  if ( !gbEnforceUIPI
    || (unsigned int)v10 > (unsigned int)v9
    || (_DWORD)v10 == (_DWORD)v9
    && ((v11 = HIDWORD(v10), v12 = HIDWORD(v9), (_DWORD)v11 == (_DWORD)v12) || (_DWORD)v11 == -1 || (_DWORD)v12 == -1) )
  {
    v3 = 1;
  }
  v3 ^= 1u;
  if ( !v3
    && ((v3 = 0, *(_DWORD *)(v1 + 56)) && *(_QWORD *)(v1 + 48)
     || (unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 376LL))
     || (v8 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 376LL), *(int *)(v8 + 12) < 0)
     || (v37 = *(_QWORD *)(gptiCurrent + 376LL), v8 == v37)
     || (*(_DWORD *)(v8 + 768) & 0x100) != 0
     || !(unsigned int)IsImmersiveAppRestricted(v37)
     && (ProcessInformation = 6,
         ZwQueryInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessCookie|ProcessUserModeIOPL,
           &ProcessInformation,
           8u,
           0LL) >= 0)
     && (v44 & 1) == 0) )
  {
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v41 = *(_QWORD *)(v1 + 24);
      DestroyNotify(a1);
      return v41;
    }
    else
    {
      v13 = gptiCurrent;
      v42[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v42;
      v42[1] = v1;
      ++*(_DWORD *)(v1 + 8);
      *(_QWORD *)(a1 + 56) = gptiCurrent;
      if ( (*(_DWORD *)(v1 + 40) & 8) != 0 )
        EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v1);
      else
        EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v1 + 64);
      if ( EventProc )
      {
        v15 = W32SetCurrentThreadDpiAwarenessContext(*(_DWORD *)(v1 + 88));
        xxxClientCallWinEventProc(EventProc, v1, a1);
        W32SetCurrentThreadDpiAwarenessContext(v15);
      }
      *(_QWORD *)(a1 + 56) = 0LL;
      v16 = *(_QWORD *)(v1 + 24);
      ThreadUnlock1(v13, v8);
      v17 = gpPendingNotifies;
      v18 = (struct tagNOTIFY ****)&gpPendingNotifies;
      while ( v17 )
      {
        if ( v17 == (struct tagNOTIFY **)a1 )
        {
          v19 = *v18;
          v20 = **v18;
          *v18 = (struct tagNOTIFY ***)v20;
          if ( !v20 )
            gpLastPendingNotify = (unsigned __int64)v18 & -(__int64)(gpPendingNotifies != 0LL);
          HMAssignmentUnlock(v19 + 1);
          if ( v19 == (struct tagNOTIFY ***)&unk_1C0330310 )
            dword_1C032C3A0 = 0;
          else
            Win32FreePool(v19);
          return v16;
        }
        v18 = (struct tagNOTIFY ****)v17;
        v17 = (struct tagNOTIFY **)*v17;
      }
      return v16;
    }
  }
  else
  {
LABEL_31:
    v22 = *(_QWORD *)(v1 + 16);
    v23 = *(_QWORD *)(v1 + 24);
    v24 = *(_QWORD *)(v22 + 384);
    if ( v3 )
      EtwTraceUIPIEventHookError(a1, v22, gptiCurrent);
    ++gdwInAtomicOperation;
    if ( gpAtomickCheckStacks )
    {
      v25 = 0;
      v26 = ++gdwAtomicCheckSerial;
      if ( gdwAtomicCheckLogSize )
      {
        while ( *(_DWORD *)(((unsigned __int64)v25 << 6) + gpAtomickCheckStacks) )
        {
          if ( ++v25 >= gdwAtomicCheckLogSize )
            goto LABEL_37;
        }
        v27 = (unsigned __int64)v25 << 6;
        *(_DWORD *)(v27 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
        *(_DWORD *)(v27 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
        *(_DWORD *)(v27 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        RtlWalkFrameChain((PVOID *)(v27 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
      }
    }
    else
    {
      v26 = v44;
    }
LABEL_37:
    *(_DWORD *)(a1 + 48) |= 0xCu;
    if ( !v24
      || (v28 = *(_QWORD *)(v1 + 16), v28 == gptiRit)
      || (v29 = *(_DWORD *)(v1 + 40), (v29 & 1) != 0)
      || (v29 & 0x10) != 0
      && ((v30 = *(_DWORD *)(gptiCurrent + 440LL) & 0x100, (*(_DWORD *)(v28 + 440) & 0x100) != v30)
       || v30
       && (v38 = PsWow64GetProcessMachine(**(_QWORD **)(v28 + 376)),
           (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 376LL)) != v38))
      || !(unsigned int)PostEventMessageEx(*(_QWORD *)(v1 + 16), v24, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
    {
      v31 = gpPendingNotifies;
      v32 = (struct tagNOTIFY ****)&gpPendingNotifies;
      while ( v31 )
      {
        if ( v31 == (struct tagNOTIFY **)a1 )
        {
          v33 = *v32;
          v34 = **v32;
          *v32 = (struct tagNOTIFY ***)v34;
          if ( !v34 )
            gpLastPendingNotify = (unsigned __int64)v32 & -(__int64)(gpPendingNotifies != 0LL);
          HMAssignmentUnlock(v33 + 1);
          if ( v33 == (struct tagNOTIFY ***)&unk_1C0330310 )
            dword_1C032C3A0 = 0;
          else
            Win32FreePool(v33);
          break;
        }
        v32 = (struct tagNOTIFY ****)v31;
        v31 = (struct tagNOTIFY **)*v31;
      }
    }
    --gdwInAtomicOperation;
    if ( gpAtomickCheckStacks )
    {
      v35 = 0LL;
      if ( gdwAtomicCheckLogSize )
      {
        while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v35 << 6) + gpAtomickCheckStacks) != v26 )
        {
          v35 = (unsigned int)(v35 + 1);
          if ( (unsigned int)v35 >= gdwAtomicCheckLogSize )
            return v23;
        }
        *(_DWORD *)((v35 << 6) + gpAtomickCheckStacks) = 0;
      }
    }
    return v23;
  }
}
