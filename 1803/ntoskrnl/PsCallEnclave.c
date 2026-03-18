/*
 * XREFs of PsCallEnclave @ 0x14077EDB0
 * Callers:
 *     NtCallEnclave @ 0x1401B35C0 (NtCallEnclave.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ZwTerminateProcess @ 0x1401A7A40 (ZwTerminateProcess.c)
 *     PsGetBaseTrapFrame @ 0x140284230 (PsGetBaseTrapFrame.c)
 *     RtlCreateEnclaveReturnFrame @ 0x140292E64 (RtlCreateEnclaveReturnFrame.c)
 *     RtlPrepareEnclaveCall @ 0x140292F54 (RtlPrepareEnclaveCall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VslCallEnclave @ 0x140717FA8 (VslCallEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140752E40 (MmSelectVsmEnclaveByAddress.c)
 *     PsDereferenceVsmEnclave @ 0x14077F9C8 (PsDereferenceVsmEnclave.c)
 *     PspFindVsmEnclaveThread @ 0x14077FE50 (PspFindVsmEnclaveThread.c)
 *     PspPrepareEnclaveThreadWait @ 0x14077FE6C (PspPrepareEnclaveThreadWait.c)
 *     PspReleaseEnclaveThread @ 0x14077FF00 (PspReleaseEnclaveThread.c)
 *     PspRemoveEnclaveThreadWait @ 0x14077FF5C (PspRemoveEnclaveThreadWait.c)
 *     PspSelectVsmEnclaveByNumber @ 0x14078000C (PspSelectVsmEnclaveByNumber.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  int VsmEnclaveThread; // eax
  PVOID v20; // rcx
  int v21; // eax
  LARGE_INTEGER *Timeout; // rax
  _DWORD *v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // r15
  bool v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _BYTE v42[7]; // [rsp+51h] [rbp-97h] BYREF
  PVOID v43; // [rsp+58h] [rbp-90h] BYREF
  int v44; // [rsp+60h] [rbp-88h]
  PVOID P; // [rsp+68h] [rbp-80h] BYREF
  __int64 v46; // [rsp+70h] [rbp-78h] BYREF
  __int64 v47; // [rsp+78h] [rbp-70h] BYREF
  __int64 v48; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 *v49; // [rsp+88h] [rbp-60h]
  __int64 v50; // [rsp+90h] [rbp-58h]
  LARGE_INTEGER v51; // [rsp+98h] [rbp-50h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v53; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v54; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v55; // [rsp+F8h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+100h] [rbp+18h] BYREF
  __int64 *v57; // [rsp+108h] [rbp+20h]

  v57 = a4;
  ExitStatus = a3;
  v55 = a2;
  v54 = a1;
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v54 )
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
  v46 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
    result = PspSelectVsmEnclaveByNumber(Process, a2, &v43);
  else
    result = MmSelectVsmEnclaveByAddress(Process, v54, &v43);
  if ( (int)result >= 0 )
  {
    v9 = (char *)v43;
    if ( !*((_DWORD *)v43 + 10) )
    {
      EnclaveReturnFrame = -1073741816;
      goto LABEL_81;
    }
    BaseTrapFrame = PsGetBaseTrapFrame((__int64)CurrentThread);
    v52 = BaseTrapFrame;
    --CurrentThread->SpecialApcDisable;
    EnclaveReturnFrame = RtlPrepareEnclaveCall(BaseTrapFrame, (__int64)a4, v12, v13, &v48, &v47);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( EnclaveReturnFrame >= 0 )
    {
      --CurrentThread->KernelApcDisable;
      v14 = (volatile signed __int64 *)(v9 + 112);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
      v49 = (unsigned __int64 *)(v9 + 104);
      v18 = *((_QWORD *)v9 + 13);
      while ( v18 )
      {
        VsmEnclaveThread = PspFindVsmEnclaveThread(CurrentThread, v18);
        if ( VsmEnclaveThread >= 0 )
        {
          if ( VsmEnclaveThread <= 0 )
            break;
          v18 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v18 = *(_QWORD *)v18;
        }
      }
      if ( v18 )
      {
LABEL_48:
        v50 = v18;
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v14, v15, v16, v17);
        KeAbPostRelease((ULONG_PTR)v14);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v9 = (char *)v43;
        if ( *(_DWORD *)(v18 + 36) == -1 )
        {
          EnclaveReturnFrame = -1073741670;
          goto LABEL_81;
        }
        --CurrentThread->SpecialApcDisable;
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
        EnclaveReturnFrame = VslCallEnclave(
                               (__int64)v9,
                               (unsigned int *)(v18 + 32),
                               (__int64 *)&v54,
                               ExitStatus,
                               &v46,
                               &v48,
                               &v47,
                               &ExitStatus,
                               v42);
        v44 = EnclaveReturnFrame;
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( v42[0] )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
        if ( EnclaveReturnFrame < 0 )
        {
          if ( !v55 )
            goto LABEL_76;
          v54 = 0LL;
        }
        v27 = v54;
        if ( !v54 )
        {
          *v57 = v46;
          if ( v55 )
          {
            if ( (*(_DWORD *)(v18 + 36))-- == 1 )
            {
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
              RtlAvlRemoveNode((unsigned __int64 *)v9 + 13, v18);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14, v36, v37, v38);
              KeAbPostRelease((ULONG_PTR)(v9 + 112));
              KeLeaveCriticalRegionThread((__int64)CurrentThread);
              v9 = (char *)v43;
            }
          }
          goto LABEL_76;
        }
        --CurrentThread->SpecialApcDisable;
        EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                               v52,
                               v25,
                               v26,
                               *((_QWORD *)v9 + 1),
                               v27,
                               ExitStatus,
                               v48,
                               v47,
                               v46);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( v55 )
          goto LABEL_76;
        v28 = *(_DWORD *)(v18 + 36);
        if ( v28 )
          goto LABEL_70;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
        v29 = (_QWORD *)*v49;
        v30 = 0;
        if ( !*v49 )
          goto LABEL_67;
        while ( 1 )
        {
          if ( (int)PspFindVsmEnclaveThread(CurrentThread, v29) < 0 )
          {
            v31 = (_QWORD *)*v29;
            if ( !*v29 )
            {
              v30 = 0;
LABEL_67:
              RtlAvlInsertNodeEx(v49, (unsigned __int64)v29, v30, (_QWORD *)v18);
              if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v14, v32, v33, v34);
              KeAbPostRelease((ULONG_PTR)v14);
              KeLeaveCriticalRegionThread((__int64)CurrentThread);
              v28 = *(_DWORD *)(v18 + 36);
              v9 = (char *)v43;
LABEL_70:
              *(_DWORD *)(v18 + 36) = v28 + 1;
LABEL_76:
              if ( !*(_DWORD *)(v18 + 36) )
              {
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
                *(_QWORD *)v18 = *((_QWORD *)v9 + 16);
                *((_QWORD *)v9 + 16) = v18;
                PspReleaseEnclaveThread(v9);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14, v39, v40, v41);
                KeAbPostRelease((ULONG_PTR)(v9 + 112));
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
                goto LABEL_80;
              }
              goto LABEL_81;
            }
          }
          else
          {
            v31 = (_QWORD *)v29[1];
            if ( !v31 )
            {
              v30 = 1;
              goto LABEL_67;
            }
          }
          v29 = v31;
        }
      }
      v20 = 0LL;
      P = 0LL;
      if ( v55 )
      {
        EnclaveReturnFrame = -1073741584;
      }
      else
      {
        v21 = *((_DWORD *)v9 + 18);
        if ( v21 )
        {
          *((_DWORD *)v9 + 18) = v21 - 1;
          EnclaveReturnFrame = 0;
        }
        else
        {
          EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v9, &P);
          v20 = P;
        }
        if ( EnclaveReturnFrame >= 0 && !v20 )
        {
LABEL_47:
          v18 = *((_QWORD *)v9 + 16);
          *((_QWORD *)v9 + 16) = *(_QWORD *)v18;
          *(_QWORD *)(v18 + 24) = CurrentThread;
          *(_QWORD *)(v18 + 32) = 0LL;
          goto LABEL_48;
        }
      }
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14, v15, v16, v17);
      KeAbPostRelease((ULONG_PTR)(v9 + 112));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( EnclaveReturnFrame < 0 )
      {
LABEL_80:
        v9 = (char *)v43;
        goto LABEL_81;
      }
      if ( (ExitStatus & 1) != 0 )
      {
        v51.QuadPart = 0LL;
        Timeout = &v51;
      }
      else
      {
        Timeout = 0LL;
      }
      v23 = P;
      v24 = KeWaitForSingleObject((char *)P + 16, Executive, 1, 0, Timeout);
      v9 = (char *)v43;
      if ( v24 )
        EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v43, v23, v24);
      else
        EnclaveReturnFrame = v23[10];
      ExFreePoolWithTag(v23, 0);
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
      goto LABEL_47;
    }
LABEL_81:
    PsDereferenceVsmEnclave(v9);
    return (unsigned int)EnclaveReturnFrame;
  }
  return result;
}
