/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C004EFEC
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C004EF70 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  __int64 v2; // rax
  void **v3; // r8
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // r14
  struct _KEVENT *v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbp
  int v16; // ecx
  LARGE_INTEGER v17; // rbx
  int v18; // r8d
  __int64 (__fastcall *v19)(CBaseInput *); // rax
  unsigned int v20; // eax

  v2 = 0LL;
  v3 = (void **)((char *)this + 176);
  while ( *v3 != a2 )
  {
    v2 = (unsigned int)(v2 + 1);
    v3 += 5;
    if ( (unsigned int)v2 >= 0xB )
    {
      v20 = 11;
      goto LABEL_6;
    }
  }
  v20 = *((_DWORD *)this + 10 * v2 + 38);
LABEL_6:
  if ( v20 == 11 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v6 = v20;
    v7 = 3LL * v20;
    if ( *((_BYTE *)&unk_1C015EF90 + 24 * v20 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(3221225473LL, a2, v3);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v15 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
      if ( v15 )
      {
        v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          Template_xqx(
            v16,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v18,
            v17.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
        if ( v17.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            1000 * v17.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v18,
            0,
            1000 * v17.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      v19 = (__int64 (__fastcall *)(CBaseInput *))*((_QWORD *)&unk_1C015EF90 + v7 + 1);
      gptiCurrent = v11;
      gbValidateHandleForIL = 1;
      v5 = v19(this);
      UserSessionSwitchLeaveCrit();
    }
    else
    {
      v5 = (*((__int64 (__fastcall **)(CBaseInput *, void *, void **, __int64))&unk_1C015EF90 + 3 * v20 + 1))(
             this,
             a2,
             v3,
             11LL);
    }
    v8 = (struct _KEVENT *)*((_QWORD *)this + 5 * v6 + 23);
    if ( v8 )
      KeSetEvent(v8, 1, 0);
  }
  return v5;
}
