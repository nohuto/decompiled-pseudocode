/*
 * XREFs of NtUserGetPointerInfoList @ 0x1C0003F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01205C8 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0120A14 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0120AB0 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        ULONG64 a6,
        ULONG64 a7,
        _OWORD *Address)
{
  unsigned int v8; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // edi
  __int64 *v14; // rax
  PVOID CurrentProcess; // rax
  BOOL v16; // edx
  __int64 v17; // rdx
  int v18; // eax
  _DWORD *v19; // r12
  _DWORD *v20; // r13
  int v21; // r10d
  __int64 v22; // r9
  _OWORD *v23; // rdi
  unsigned int *v24; // rax
  __int64 v25; // r8
  unsigned int *v26; // rax
  CTouchProcessor *v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned int v30; // r14d
  __int64 CurrentProcessWow64Process; // rax
  __int64 v32; // rdx
  _DWORD *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  PVOID v38; // rcx
  __int64 v39; // rcx
  int PointerFrameInfoInternal; // eax
  unsigned int v41; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+54h] [rbp-94h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-58h]
  unsigned int v44; // [rsp+F0h] [rbp+8h] BYREF
  unsigned int v45; // [rsp+F8h] [rbp+10h]
  int v46; // [rsp+100h] [rbp+18h]
  unsigned int v47; // [rsp+108h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v8 = a2;
  v42 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = 0LL;
  v12 = 1;
  do
  {
    v13 = 0;
    v14 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v14 )
      v11 = *v14;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v16 = 0;
    if ( CurrentProcess )
      v16 = CurrentProcess == g_pepDwm;
    if ( v16 || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v11 != gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v11 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v38 = gpsemDITHitTestWaiters;
      goto LABEL_56;
    }
    if ( (struct tagTHREADINFO *)v11 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v38 = gpsemRITBlockedOnDITWaiters;
LABEL_56:
      KeWaitForSingleObject(v38, UserRequest, 0, 0, 0LL);
      v13 = 1;
    }
  }
  while ( v13 == 1 );
  EtwTraceAcquiredSharedUserCrit();
  if ( !a1 )
    goto LABEL_74;
  if ( HIWORD(a1) )
    goto LABEL_74;
  v17 = a5;
  if ( !a5 )
    goto LABEL_74;
  switch ( v8 )
  {
    case 1u:
      v18 = 96;
      break;
    case 2u:
      goto LABEL_62;
    case 3u:
      v18 = 120;
      break;
    case 5u:
LABEL_62:
      v18 = 144;
      break;
    default:
      v18 = 0;
      break;
  }
  if ( a5 != v18 )
    goto LABEL_74;
  v19 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_74;
  v20 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_74;
  v21 = v46;
  v22 = v47;
  if ( v46 || v47 )
  {
    v23 = Address;
    goto LABEL_24;
  }
  v23 = Address;
  if ( !Address )
    goto LABEL_74;
LABEL_24:
  if ( v47 && (*(_DWORD *)(v11 + 1184) & 0x100) != 0 )
  {
    v39 = 5LL;
    goto LABEL_75;
  }
  v24 = (unsigned int *)a6;
  if ( a6 >= MmUserProbeAddress )
    v24 = (unsigned int *)MmUserProbeAddress;
  v25 = *v24;
  v44 = *v24;
  v26 = (unsigned int *)a7;
  if ( a7 >= MmUserProbeAddress )
    v26 = (unsigned int *)MmUserProbeAddress;
  v27 = (CTouchProcessor *)*v26;
  v41 = *v26;
  if ( v23 )
  {
    if ( (_DWORD)v25 )
    {
      if ( (_DWORD)v27 )
      {
        v28 = v25 * (_QWORD)v27;
        if ( v28 <= 0xFFFFFFFF )
        {
          v29 = a5 * (unsigned __int64)(unsigned int)v28;
          v30 = -1;
          if ( v29 <= 0xFFFFFFFF )
            v30 = v29;
          v42 = v30;
          if ( v29 <= 0xFFFFFFFF )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
            ProbeForWrite(v23, v30, CurrentProcessWow64Process != 0 ? 1 : 4);
            v8 = v45;
            v22 = v47;
            v21 = v46;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_74:
    v39 = 87LL;
LABEL_75:
    v12 = 0;
LABEL_76:
    UserSetLastError(v39);
  }
  else
  {
LABEL_37:
    if ( a1 == 1 )
    {
      v33 = *(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread(), v17, v25, v22) + 1224);
      if ( !v33 || (*v33 & 1) == 0 )
      {
        v12 = 0;
        v39 = 87LL;
        goto LABEL_76;
      }
      v44 = 1;
      v41 = 1;
      if ( v23 )
      {
        CurrentThread = KeGetCurrentThread();
        v36 = *(_QWORD *)(W32GetThreadWin32Thread(CurrentThread, v32, v34, v35) + 1224);
        if ( (unsigned __int64)v23 >= MmUserProbeAddress )
          v23 = (_OWORD *)MmUserProbeAddress;
        *v23 = *(_OWORD *)(v36 + 24);
        v23[1] = *(_OWORD *)(v36 + 40);
        v23[2] = *(_OWORD *)(v36 + 56);
        v23[3] = *(_OWORD *)(v36 + 72);
        v23[4] = *(_OWORD *)(v36 + 88);
        v23[5] = *(_OWORD *)(v36 + 104);
      }
    }
    else
    {
      if ( (_DWORD)v22 )
      {
        PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                     v27,
                                     (struct tagTHREADINFO *)v11,
                                     a1,
                                     v8,
                                     v21,
                                     v42,
                                     &v44,
                                     &v41,
                                     (unsigned __int8 *)v23);
      }
      else
      {
        v41 = 1;
        if ( v21 )
        {
          PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                       v27,
                                       (struct tagTHREADINFO *)v11,
                                       a1,
                                       v8,
                                       v42,
                                       &v44,
                                       (unsigned __int8 *)v23);
        }
        else
        {
          v44 = 1;
          PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                       v27,
                                       (struct tagTHREADINFO *)v11,
                                       a1,
                                       v8,
                                       v42,
                                       (struct tagPOINTER_INFO *)v23);
        }
      }
      v12 = PointerFrameInfoInternal;
      if ( !PointerFrameInfoInternal )
        goto LABEL_49;
    }
    if ( (unsigned __int64)v19 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = v44;
    if ( (unsigned __int64)v20 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = v41;
  }
LABEL_49:
  UserSessionSwitchLeaveCrit();
  return v12;
}
