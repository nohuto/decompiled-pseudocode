/*
 * XREFs of KiSwapToUmsThread @ 0x140742F20
 * Callers:
 *     KiUmsTrapEntry @ 0x1401BC300 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x1401BC500 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x1401BC6C0 (KiUmsExceptionEntry.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     PsGetThreadId @ 0x1400BCBB0 (PsGetThreadId.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     RtlXSave @ 0x1400C59E4 (RtlXSave.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1401A7A40 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x1401A7F20 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x1401AB5C0 (KeResetLegacyFloatingPointState.c)
 *     KeSaveLegacyFloatingPointControlWord @ 0x1401AB5D0 (KeSaveLegacyFloatingPointControlWord.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiBlockAndActivateUmsThread @ 0x14024C4FC (KiBlockAndActivateUmsThread.c)
 *     KeSetCurrentUmsTeb @ 0x14024CEB0 (KeSetCurrentUmsTeb.c)
 *     KeBuildPrimaryThreadContext @ 0x140743490 (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x140744024 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x14077C918 (PspFindThreadForTeb.c)
 */

NTSTATUS __fastcall KiSwapToUmsThread(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v3; // rdi
  __int64 ThreadForTeb; // rax
  _LIST_ENTRY *v5; // r8
  struct _KTHREAD *v6; // rsi
  signed __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // r12d
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  void *v13; // rsp
  unsigned __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // r8
  unsigned __int64 NpxState; // r13
  char *Object; // r15
  struct _KEVENT *v19; // rdi
  __int64 v20; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  int CycleTime; // eax
  int v23; // eax
  char v24; // al
  unsigned int CurrentRunTime; // ecx
  HANDLE ThreadId; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+30h] [rbp+0h]
  EXCEPTION_RECORD ExitStatus; // [rsp+40h] [rbp+10h] BYREF
  _DWORD v32[4]; // [rsp+E0h] [rbp+B0h] BYREF
  _DWORD v33[4]; // [rsp+F0h] [rbp+C0h] BYREF
  _DWORD *v34; // [rsp+100h] [rbp+D0h] BYREF
  int v35; // [rsp+108h] [rbp+D8h]
  int v36; // [rsp+10Ch] [rbp+DCh]
  _DWORD *v37; // [rsp+110h] [rbp+E0h] BYREF
  int v38; // [rsp+118h] [rbp+E8h]
  int v39; // [rsp+11Ch] [rbp+ECh]

  CurrentThread = KeGetCurrentThread();
  a1[12] = CurrentThread;
  v30 = *((_QWORD *)CurrentThread->WaitBlock[3].Object + 16);
  v3 = v30;
  ThreadForTeb = PspFindThreadForTeb(v30);
  v6 = (struct _KTHREAD *)ThreadForTeb;
  if ( ThreadForTeb )
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(ThreadForTeb + 504), (signed __int64)a1, 0LL);
    if ( v7 == -1 )
    {
      v8 = a1[9];
      v9 = 1;
      v10 = 0LL;
      ObfDereferenceObject(v6);
      v11 = (v8 & 1) == 0;
    }
    else
    {
      if ( v7 )
      {
        ObfDereferenceObject(v6);
        goto LABEL_30;
      }
      v12 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
      if ( v12 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = ((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL;
      v15 = (a1[9] & 1) == 0;
      a1[8] = ((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v15 )
      {
        KeSaveLegacyFloatingPointControlWord();
      }
      else if ( MEMORY[0xFFFFF780000003D8] )
      {
        memset((void *)(v14 + 512), 0, 0x40uLL);
        RtlXSave(
          (_DWORD *)(((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL),
          MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFDuLL,
          v16);
      }
      else
      {
        _fxsave((void *)v14);
      }
      NpxState = CurrentThread->NpxState;
      CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (a1[9] & 1) != 0 )
        KeFixUserSwitchContext(v6, *(_QWORD *)v6->WaitBlock[3].Object, a1, 0LL);
      Object = (char *)CurrentThread->WaitBlock[3].Object;
      v19 = (struct _KEVENT *)v6->WaitBlock[3].Object;
      v20 = *((_QWORD *)Object + 2);
      if ( v19->Header.WaitListHead.Blink != (struct _LIST_ENTRY *)v20 )
      {
        ObReferenceObjectSafe(v20);
        Blink = v19->Header.WaitListHead.Blink;
        if ( Blink )
          ObfDereferenceObject(Blink);
        v19->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)*((_QWORD *)Object + 2);
        v19->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*((_QWORD *)Object + 1);
      }
      v19[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(Object + 32);
      v19[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(Object + 96);
      v19[1].Header.LockNV = *((_DWORD *)Object + 6);
      if ( SBYTE8(PerfGlobalGroupMask[0]) < 0 )
      {
        CycleTime = CurrentThread[1].CycleTime;
        v36 = 0;
        v32[0] = CycleTime;
        v32[2] = CurrentThread[1].CurrentRunTime;
        v32[1] = v6[1].CurrentRunTime;
        v23 = a1[9] & 1;
        v35 = 16;
        v32[3] = v23;
        v34 = v32;
        EtwTraceKernelEvent((int)&v34, 1, 0x40000080u, 6432, 4200450);
      }
      v24 = KiBlockAndActivateUmsThread((__int64)CurrentThread, (struct _KQUEUE *)(Object + 32), v5, v19);
      CurrentThread->MiscFlags &= ~0x100u;
      ++*((_DWORD *)Object + 6);
      if ( SBYTE8(PerfGlobalGroupMask[0]) < 0 )
      {
        v33[0] = CurrentThread[1].CycleTime;
        v33[2] = CurrentThread[1].CurrentRunTime;
        CurrentRunTime = v6[1].CurrentRunTime;
        v39 = 0;
        v33[3] = v24 != 0;
        v33[1] = CurrentRunTime;
        v37 = v33;
        v38 = 16;
        EtwTraceKernelEvent((int)&v37, 1, 0x40000080u, 6433, 4200450);
      }
      v11 = *((_QWORD *)Object + 14);
      if ( v11 )
      {
        *((_QWORD *)Object + 14) = 0LL;
        v9 = 2;
        v10 = *((_QWORD *)Object + 15);
      }
      else
      {
        v9 = 1;
        v10 = 0LL;
        v11 = HIWORD(v6->MiscFlags) & 1;
      }
      ObfDereferenceObject(v6);
      --CurrentThread->SpecialApcDisable;
      CurrentThread->NpxState = NpxState;
    }
    KeResetLegacyFloatingPointState();
    if ( (int)KeBuildPrimaryThreadContext((_DWORD)CurrentThread, (_DWORD)a1, 0, v9, v11, v10) >= 0 )
    {
      KeSetCurrentUmsTeb(CurrentThread, (unsigned __int64)CurrentThread->Teb);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    v3 = v30;
  }
LABEL_30:
  KeSetCurrentUmsTeb(CurrentThread, (unsigned __int64)CurrentThread->Teb);
  CurrentThread->MiscFlags &= ~0x100u;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v6 )
    ThreadId = PsGetThreadId(v6);
  else
    ThreadId = 0LL;
  v28 = a1[10];
  v29 = a1[11];
  ExitStatus.ExceptionRecord = 0LL;
  ExitStatus.ExceptionAddress = 0LL;
  ExitStatus.NumberParameters = 2;
  ExitStatus.ExceptionInformation[0] = (unsigned __int64)ThreadId;
  ExitStatus.ExceptionInformation[1] = v3;
  ExitStatus.ExceptionCode = -1073740004;
  ExitStatus.ExceptionFlags = 1;
  KiDispatchException(&ExitStatus, v29, v28, 1, 0);
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
  return ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
}
