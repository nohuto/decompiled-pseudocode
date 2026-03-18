/*
 * XREFs of UsbhEnableTimerObject @ 0x1C0019EB0
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 *     UsbhSshExitSx @ 0x1C0003CAC (UsbhSshExitSx.c)
 *     UsbhSshEnabled @ 0x1C0009C28 (UsbhSshEnabled.c)
 *     Usbh_SSH_HubActive @ 0x1C000B450 (Usbh_SSH_HubActive.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x1C00179C0 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubSSH_PnpStart @ 0x1C0018C40 (UsbhHubSSH_PnpStart.c)
 *     UsbhHubStart @ 0x1C001DD84 (UsbhHubStart.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00247B0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0025E80 (UsbhPdoPnp_DeviceEnumerated.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003CF3C (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003D024 (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004AF70 (UsbhDriverNotFoundWorker.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhReferenceListRemove @ 0x1C0021BB0 (UsbhReferenceListRemove.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r12
  __int64 v8; // r13
  __int64 v10; // r14
  KIRQL v11; // al
  __int16 v12; // cx
  int v13; // esi
  KIRQL v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *v28; // rdi
  __int16 v29; // ax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  KIRQL v35; // r12
  __int64 v36; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  ULONG TimeIncrement; // eax
  int v41; // r11d
  KIRQL v42; // [rsp+6Ch] [rbp-4Dh]
  _DWORD v43[4]; // [rsp+70h] [rbp-49h] BYREF
  int v44; // [rsp+80h] [rbp-39h] BYREF
  __int16 v45; // [rsp+84h] [rbp-35h]
  __int16 v46; // [rsp+86h] [rbp-33h]
  __int16 v47; // [rsp+88h] [rbp-31h]
  __int16 v48; // [rsp+8Ah] [rbp-2Fh]
  _WORD v49[2]; // [rsp+90h] [rbp-29h] BYREF
  int v50; // [rsp+94h] [rbp-25h]
  int v51; // [rsp+98h] [rbp-21h]
  int v57; // [rsp+B0h] [rbp-9h]

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
    v12 = UsbhLogMask;
    v13 = 0;
    v42 = v11;
    v14 = v11;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 827616869;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = a2;
        *(_QWORD *)(v16 + 24) = v8;
        v12 = UsbhLogMask;
      }
      if ( (v12 & 0x2000) != 0 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 829451877;
          *(_QWORD *)(v18 + 24) = a5;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v6;
          v12 = UsbhLogMask;
        }
        if ( (v12 & 0x2000) != 0 )
        {
          v19 = *(_QWORD *)(a1 + 64);
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
            *(_DWORD *)v20 = 846229093;
            *(_QWORD *)(v20 + 16) = a6;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 24) = 0LL;
          }
        }
      }
    }
    v43[0] = v6;
    if ( dword_1C0069650 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( !v21 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v21 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v44 = *(_DWORD *)(v21 + 5192);
      v45 = *(_WORD *)(v21 + 5196);
      v22 = *(_DWORD *)(v21 + 5200);
      v46 = v22;
      v43[2] = v22;
      v47 = *(_WORD *)(v21 + 5228);
      v48 = *(_WORD *)(v21 + 5230);
      v49[0] = *(_WORD *)(v21 + 2548);
      LOWORD(v22) = *(_WORD *)(v21 + 2550);
      v50 = 0;
      v49[1] = v22;
      v51 = *(unsigned __int16 *)(v21 + 5208);
      v23 = *(_WORD *)(v21 + 5208) != 0;
      v50 = v23;
      if ( *(unsigned __int16 *)(v21 + 5210) )
        v50 = ++v23;
      if ( *(unsigned __int16 *)(v21 + 5212) )
        v50 = ++v23;
      if ( *(unsigned __int16 *)(v21 + 5214) )
        v50 = ++v23;
      if ( *(unsigned __int16 *)(v21 + 5216) )
        v50 = ++v23;
      if ( *(unsigned __int16 *)(v21 + 5218) )
        v50 = v23 + 1;
      v57 = *(_DWORD *)(v21 + 2536);
      UsbhEtwWrite(
        &USBHUB_ETW_EVENT_HUB_ENABLE_TIMER,
        0LL,
        (unsigned __int64)&v44,
        12LL,
        v49,
        36LL,
        v43,
        4LL,
        a2 + 72,
        4,
        0LL);
      v14 = v42;
    }
    *(_DWORD *)(a2 + 28) = a6;
    *(_QWORD *)(a2 + 40) = a5;
    v24 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 24) = v6;
    *(_DWORD *)(a2 + 16) = v8;
    *(_DWORD *)(a2 + 12) = v8;
    if ( v24 )
    {
      if ( v24 == 2 )
      {
        Log(a1, 0x2000, 1701729331, a2, v10 + 3744);
        *(_DWORD *)(a2 + 4) = v41;
      }
    }
    else
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 844394085;
          *(_QWORD *)(v26 + 24) = v10 + 3744;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = a2;
        }
      }
      *(_DWORD *)(a2 + 4) = 1;
      v27 = *(_QWORD **)(v10 + 3752);
      v28 = (_QWORD *)(a2 + 56);
      if ( *v27 != v10 + 3744 )
        __fastfail(3u);
      *v28 = v10 + 3744;
      v28[1] = v27;
      *v27 = v28;
      *(_QWORD *)(v10 + 3752) = v28;
      v29 = UsbhLogMask;
      v30 = *(int *)(v10 + 3736);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 1414819172;
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)(v32 + 16) = a1;
          *(_QWORD *)(v32 + 24) = v30;
          v29 = UsbhLogMask;
        }
      }
      if ( *(_DWORD *)(v10 + 3736) == 2 )
      {
        if ( (v29 & 0x2000) != 0 )
        {
          v33 = *(_QWORD *)(a1 + 64);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
            *(_DWORD *)v34 = 809382500;
            *(_QWORD *)(v34 + 8) = 0LL;
            *(_QWORD *)(v34 + 16) = a1;
            *(_QWORD *)(v34 + 24) = 2LL;
          }
        }
        *(_DWORD *)(v10 + 3736) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v14);
        v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        v36 = *(_QWORD *)(a1 + 64);
        if ( !v36 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v36 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        if ( *(_BYTE *)(v36 + 2480) )
        {
          PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
          if ( PoolWithTag )
          {
            *PoolWithTag = 0LL;
            PoolWithTag[3] = 0LL;
            PoolWithTag[4] = 0LL;
            PoolWithTag[5] = 0LL;
            *(_DWORD *)PoolWithTag = 1397515890;
            *((_DWORD *)PoolWithTag + 10) = 1380799588;
            PoolWithTag[2] = v10 + 3848;
            PoolWithTag[1] = a1;
            v38 = PoolWithTag + 3;
            v39 = *(_QWORD **)(v36 + 2520);
            if ( *v39 != v36 + 2512 )
              __fastfail(3u);
            *v38 = v36 + 2512;
            v38[1] = v39;
            *v39 = v38;
            *(_QWORD *)(v36 + 2520) = v38;
          }
          else
          {
            ++*(_DWORD *)(v36 + 2528);
          }
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v35);
        }
        else
        {
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v35);
          v13 = -1073741823;
        }
        if ( (v13 & 0xC0000000) != 0xC0000000 )
        {
          TimeIncrement = KeQueryTimeIncrement();
          if ( KeSetTimer((PKTIMER)(v10 + 3848), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v10 + 3784)) )
            UsbhReferenceListRemove(a1, v10 + 3848);
        }
        return;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v14);
  }
}
