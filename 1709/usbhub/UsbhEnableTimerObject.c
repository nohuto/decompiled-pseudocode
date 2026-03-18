/*
 * XREFs of UsbhEnableTimerObject @ 0x1C001CF30
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhSshExitSx @ 0x1C0003838 (UsbhSshExitSx.c)
 *     UsbhHubStart @ 0x1C00089E8 (UsbhHubStart.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0019684 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001E330 (UsbhHubSSH_PnpStart.c)
 *     UsbhSshEnabled @ 0x1C001E764 (UsbhSshEnabled.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001FBA0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00256A0 (UsbhQueueWorkItemWithRetry.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003DDF4 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003DEDC (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004BDE0 (UsbhDriverNotFoundWorker.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhReferenceListRemove @ 0x1C00262E4 (UsbhReferenceListRemove.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  __int64 v10; // rsi
  KIRQL v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  KIRQL v29; // r12
  __int64 v30; // r14
  char *PoolWithTag; // rax
  char *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD *v34; // rcx
  ULONG TimeIncrement; // eax
  KIRQL v36; // dl
  unsigned int *p_SortKey; // rcx
  int v38; // r11d
  KIRQL v39; // [rsp+6Ch] [rbp-4Dh]

  v6 = a4;
  v8 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 3728));
    v39 = v11;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 827616869;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v8;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 829451877;
          *(_QWORD *)(v15 + 24) = a5;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v6;
        }
      }
    }
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 846229093;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = a6;
        *(_QWORD *)(v17 + 24) = 0LL;
      }
    }
    if ( dword_1C006A650 )
    {
      v18 = *(_DWORD **)(a1 + 64);
      if ( !v18 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *v18 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENABLE_TIMER, 0LL);
      v11 = v39;
    }
    *(_QWORD *)(a2 + 40) = a5;
    v19 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 28) = a6;
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 24) = v6;
    *(_DWORD *)(a2 + 16) = v8;
    *(_DWORD *)(a2 + 12) = v8;
    if ( v19 )
    {
      if ( v19 == 2 )
      {
        Log(a1, 0x2000, 1701729331, a2, v10 + 3744);
        *(_DWORD *)(a2 + 4) = v38;
      }
    }
    else
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v21 = 844394085;
          *(_QWORD *)(v21 + 24) = v10 + 3744;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 16) = a2;
        }
      }
      *(_DWORD *)(a2 + 4) = 1;
      v22 = *(_QWORD **)(v10 + 3752);
      v23 = (_QWORD *)(a2 + 56);
      if ( *v22 != v10 + 3744 )
        __fastfail(3u);
      *v23 = v10 + 3744;
      v23[1] = v22;
      *v22 = v23;
      *(_QWORD *)(v10 + 3752) = v23;
      v24 = *(int *)(v10 + 3736);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 1414819172;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = a1;
          *(_QWORD *)(v26 + 24) = v24;
        }
      }
      if ( *(_DWORD *)(v10 + 3736) == 2 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v27 = *(_QWORD *)(a1 + 64);
          if ( v27 )
          {
            v28 = *(_QWORD *)(v27 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
            *(_DWORD *)v28 = 809382500;
            *(_QWORD *)(v28 + 8) = 0LL;
            *(_QWORD *)(v28 + 16) = a1;
            *(_QWORD *)(v28 + 24) = 2LL;
          }
        }
        *(_DWORD *)(v10 + 3736) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v11);
        v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        v30 = *(_QWORD *)(a1 + 64);
        if ( !v30 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v30 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        if ( *(_BYTE *)(v30 + 2480) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
          v32 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, 0x30uLL);
            *(_DWORD *)v32 = 1397515890;
            *((_DWORD *)v32 + 10) = 1380799588;
            *((_QWORD *)v32 + 2) = v10 + 3848;
            *((_QWORD *)v32 + 1) = a1;
            v33 = v32 + 24;
            v34 = *(_QWORD **)(v30 + 2520);
            if ( *v34 != v30 + 2512 )
              __fastfail(3u);
            *v33 = v30 + 2512;
            v33[1] = v34;
            *v34 = v33;
            *(_QWORD *)(v30 + 2520) = v33;
          }
          else
          {
            ++*(_DWORD *)(v30 + 2528);
          }
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v29);
          TimeIncrement = KeQueryTimeIncrement();
          if ( KeSetTimer((PKTIMER)(v10 + 3848), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v10 + 3784)) )
            UsbhReferenceListRemove(a1, v10 + 3848);
          return;
        }
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        p_SortKey = &WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
        v36 = v29;
LABEL_42:
        KeReleaseSpinLock((PKSPIN_LOCK)p_SortKey, v36);
        return;
      }
    }
    v36 = v11;
    p_SortKey = (unsigned int *)(v10 + 3728);
    goto LABEL_42;
  }
}
