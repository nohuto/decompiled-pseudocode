/*
 * XREFs of PsCallEnclave @ 0x14071B2E0
 * Callers:
 *     NtCallEnclave @ 0x140189960 (NtCallEnclave.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ZwTerminateProcess @ 0x14017DE40 (ZwTerminateProcess.c)
 *     PsGetBaseTrapFrame @ 0x14024DE88 (PsGetBaseTrapFrame.c)
 *     RtlCreateEnclaveReturnFrame @ 0x14025B0A8 (RtlCreateEnclaveReturnFrame.c)
 *     RtlPrepareEnclaveCall @ 0x14025B198 (RtlPrepareEnclaveCall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VslCallEnclave @ 0x1406B3378 (VslCallEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1406E93C8 (MmSelectVsmEnclaveByAddress.c)
 *     PsDereferenceVsmEnclave @ 0x14071BE9C (PsDereferenceVsmEnclave.c)
 *     PspFindVsmEnclaveThread @ 0x14071C334 (PspFindVsmEnclaveThread.c)
 *     PspPrepareEnclaveThreadWait @ 0x14071C350 (PspPrepareEnclaveThreadWait.c)
 *     PspReleaseEnclaveThread @ 0x14071C3E4 (PspReleaseEnclaveThread.c)
 *     PspRemoveEnclaveThreadWait @ 0x14071C440 (PspRemoveEnclaveThreadWait.c)
 *     PspSelectVsmEnclaveByNumber @ 0x14071C4F0 (PspSelectVsmEnclaveByNumber.c)
 */

__int64 __fastcall PsCallEnclave(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 Process; // rcx
  char *v9; // r15
  int EnclaveReturnFrame; // r13d
  __int64 BaseTrapFrame; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  volatile signed __int64 *v14; // r12
  unsigned __int64 v15; // rsi
  int VsmEnclaveThread; // eax
  PVOID v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // r15
  bool v26; // r8
  _QWORD *v27; // rax
  _BYTE v29[7]; // [rsp+51h] [rbp-97h] BYREF
  PVOID v30; // [rsp+58h] [rbp-90h] BYREF
  int v31; // [rsp+60h] [rbp-88h]
  PVOID P; // [rsp+68h] [rbp-80h] BYREF
  __int64 v33; // [rsp+70h] [rbp-78h] BYREF
  __int64 v34; // [rsp+78h] [rbp-70h] BYREF
  __int64 v35; // [rsp+80h] [rbp-68h] BYREF
  __int64 v36; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 *v37; // [rsp+90h] [rbp-58h]
  unsigned __int64 v38; // [rsp+98h] [rbp-50h]
  __int64 v39; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v40; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v41; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v42; // [rsp+F8h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+100h] [rbp+18h] BYREF
  __int64 *v44; // [rsp+108h] [rbp+20h]

  v44 = a4;
  ExitStatus = a3;
  v42 = a2;
  v41 = a1;
  CurrentThread = KeGetCurrentThread();
  v40 = CurrentThread;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v41 )
  {
    if ( a2 )
      return 3221225712LL;
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  if ( (ExitStatus & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
LABEL_9:
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v7 = (__int64)a4;
  *(_QWORD *)v7 = *(_QWORD *)v7;
  v33 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
    result = PspSelectVsmEnclaveByNumber(Process, a2, &v30);
  else
    result = MmSelectVsmEnclaveByAddress(Process, v41, &v30);
  if ( (int)result >= 0 )
  {
    v9 = (char *)v30;
    if ( !*((_DWORD *)v30 + 10) )
    {
      EnclaveReturnFrame = -1073741816;
      goto LABEL_81;
    }
    BaseTrapFrame = PsGetBaseTrapFrame((__int64)CurrentThread);
    v39 = BaseTrapFrame;
    --CurrentThread->SpecialApcDisable;
    EnclaveReturnFrame = RtlPrepareEnclaveCall(BaseTrapFrame, (__int64)a4, v12, v13, &v36, &v35);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( EnclaveReturnFrame >= 0 )
    {
      --CurrentThread->KernelApcDisable;
      v14 = (volatile signed __int64 *)(v9 + 112);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
      v37 = (unsigned __int64 *)(v9 + 104);
      v15 = *((_QWORD *)v9 + 13);
      while ( v15 )
      {
        VsmEnclaveThread = PspFindVsmEnclaveThread(CurrentThread, v15);
        if ( VsmEnclaveThread >= 0 )
        {
          if ( VsmEnclaveThread <= 0 )
            break;
          v15 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v15 = *(_QWORD *)v15;
        }
      }
      if ( v15 )
      {
LABEL_47:
        v38 = v15;
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v14);
        KeAbPostRelease((ULONG_PTR)v14);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v9 = (char *)v30;
        if ( *(_DWORD *)(v15 + 36) == -1 )
        {
          EnclaveReturnFrame = -1073741670;
          goto LABEL_81;
        }
        --CurrentThread->SpecialApcDisable;
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
        EnclaveReturnFrame = VslCallEnclave(
                               (__int64)v9,
                               (unsigned int *)(v15 + 32),
                               (__int64 *)&v41,
                               ExitStatus,
                               &v33,
                               &v36,
                               &v35,
                               &ExitStatus,
                               v29);
        v31 = EnclaveReturnFrame;
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( v29[0] )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
        if ( EnclaveReturnFrame < 0 )
        {
          if ( !v42 )
            goto LABEL_76;
          v41 = 0LL;
        }
        v24 = v41;
        if ( !v41 )
        {
          *v44 = v33;
          if ( v42 )
          {
            if ( (*(_DWORD *)(v15 + 36))-- == 1 )
            {
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
              RtlAvlRemoveNode((unsigned __int64 *)v9 + 13, v15);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14);
              KeAbPostRelease((ULONG_PTR)(v9 + 112));
              KeLeaveCriticalRegionThread((__int64)CurrentThread);
              v9 = (char *)v30;
            }
          }
          goto LABEL_76;
        }
        --CurrentThread->SpecialApcDisable;
        EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                               v39,
                               v22,
                               v23,
                               *((_QWORD *)v9 + 1),
                               v24,
                               ExitStatus,
                               v36,
                               v35,
                               v33);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( v42 )
          goto LABEL_76;
        if ( *(_DWORD *)(v15 + 36) )
          goto LABEL_70;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
        v25 = (_QWORD *)*v37;
        v26 = 0;
        if ( !*v37 )
          goto LABEL_67;
        while ( 1 )
        {
          if ( (int)PspFindVsmEnclaveThread(CurrentThread, v25) < 0 )
          {
            v27 = (_QWORD *)*v25;
            if ( !*v25 )
            {
              v26 = 0;
LABEL_67:
              RtlAvlInsertNodeEx(v37, (unsigned __int64)v25, v26, v15);
              if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v14);
              KeAbPostRelease((ULONG_PTR)v14);
              KeLeaveCriticalRegionThread((__int64)CurrentThread);
              v9 = (char *)v30;
LABEL_70:
              ++*(_DWORD *)(v15 + 36);
LABEL_76:
              if ( !*(_DWORD *)(v15 + 36) )
              {
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
                *(_QWORD *)v15 = *((_QWORD *)v9 + 16);
                *((_QWORD *)v9 + 16) = v15;
                PspReleaseEnclaveThread(v9);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14);
                KeAbPostRelease((ULONG_PTR)(v9 + 112));
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
                goto LABEL_80;
              }
              goto LABEL_81;
            }
          }
          else
          {
            v27 = (_QWORD *)v25[1];
            if ( !v27 )
            {
              v26 = 1;
              goto LABEL_67;
            }
          }
          v25 = v27;
        }
      }
      v17 = 0LL;
      P = 0LL;
      if ( v42 )
      {
        EnclaveReturnFrame = -1073741584;
      }
      else
      {
        v18 = *((_DWORD *)v9 + 18);
        if ( v18 )
        {
          *((_DWORD *)v9 + 18) = v18 - 1;
          EnclaveReturnFrame = 0;
        }
        else
        {
          EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v9, &P);
          v17 = P;
        }
        if ( EnclaveReturnFrame >= 0 && !v17 )
        {
LABEL_46:
          v15 = *((_QWORD *)v9 + 16);
          *((_QWORD *)v9 + 16) = *(_QWORD *)v15;
          *(_QWORD *)(v15 + 24) = CurrentThread;
          *(_QWORD *)(v15 + 32) = 0LL;
          goto LABEL_47;
        }
      }
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14);
      KeAbPostRelease((ULONG_PTR)(v9 + 112));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( EnclaveReturnFrame < 0 )
      {
LABEL_80:
        v9 = (char *)v30;
        goto LABEL_81;
      }
      v19 = v34;
      if ( (ExitStatus & 1) != 0 )
        v19 = 0LL;
      v34 = v19;
      v20 = P;
      v21 = KeWaitForSingleObject(
              (char *)P + 16,
              Executive,
              1,
              0,
              (PLARGE_INTEGER)((unsigned __int64)&v34 & -(__int64)((ExitStatus & 1) != 0)));
      v9 = (char *)v30;
      if ( v21 )
        EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v30, v20, v21);
      else
        EnclaveReturnFrame = v20[10];
      ExFreePoolWithTag(v20, 0);
      if ( EnclaveReturnFrame )
      {
        if ( EnclaveReturnFrame != 192
          && EnclaveReturnFrame != -1073740526
          && (unsigned int)(EnclaveReturnFrame - 257) > 1 )
        {
          EnclaveReturnFrame = -1073741749;
        }
        goto LABEL_81;
      }
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
      goto LABEL_46;
    }
LABEL_81:
    PsDereferenceVsmEnclave(v9);
    return (unsigned int)EnclaveReturnFrame;
  }
  return result;
}
