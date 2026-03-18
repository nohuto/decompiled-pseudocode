/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x1C000FF30
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C000E060 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0040EC4 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C00066B0 (UsbhSignalResumeEvent.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0006A00 (UsbhSignalDriverResetEvent.c)
 *     UsbhHandleSuspend @ 0x1C0007790 (UsbhHandleSuspend.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0007CD8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhEnumerate1 @ 0x1C00091C0 (UsbhEnumerate1.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A898 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhWaitConnect @ 0x1C00121B0 (UsbhWaitConnect.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0017370 (UsbhAcquireEnumBusLock.c)
 *     UsbhDerefPdo @ 0x1C0025AD0 (UsbhDerefPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSuspendEvent @ 0x1C0042180 (UsbhSignalSuspendEvent.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00474E0 (WPP_RECORDER_SF_dD.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 *     UsbhEnumerate2 @ 0x1C00510E0 (UsbhEnumerate2.c)
 *     UsbhDropDevice @ 0x1C0051458 (UsbhDropDevice.c)
 *     UsbhHandleOvercurrent @ 0x1C00515E0 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v4; // r13
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int16 v16; // di
  __int64 v17; // rdx
  __int64 v18; // rcx
  KIRQL v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int16 v26; // r9
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // r8
  unsigned __int8 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r13d
  __int16 v40; // dx
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // r8
  int v44; // ecx
  __int64 v45; // rdi
  __int64 v46; // rcx
  void (__fastcall *v47)(_QWORD, int *); // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v52; // r13
  _QWORD *PoolWithTag; // rax
  _QWORD *v54; // rdi
  _QWORD *v55; // rdi
  _QWORD *v56; // rcx
  __int64 v57; // rdi
  int v58; // eax
  KIRQL v59; // di
  __int64 v60; // r9
  int v61; // eax
  int v62; // eax
  int v63; // eax
  __int64 v64; // rax
  int v65; // r8d
  __int64 v66; // rdx
  struct _KEVENT *v67; // rcx
  int v68; // [rsp+48h] [rbp-50h]
  int v69[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 729179504;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a3,
      88,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      0);
  v10 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 1313891184;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v10;
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 1145332592;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 24) = v4;
      }
    }
  }
  v15 = 0LL;
  v16 = *(_WORD *)(a2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
      *(_DWORD *)v18 = 1329877100;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 24) = 1884308559LL;
    }
  }
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v21 = 1413771367;
      *(_QWORD *)(v21 + 16) = v16;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 24) = 0LL;
    }
  }
  if ( v16 )
  {
    v22 = *(_QWORD *)(a1 + 64);
    if ( !v22 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v22 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v22);
    if ( v16 <= *(unsigned __int8 *)(v22 + 2938) )
    {
      v23 = *(_QWORD *)(v22 + 3056);
      if ( v23 )
      {
        v24 = 2928LL * v16 + v23 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v25 = *(_QWORD *)(v22 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
          *(_DWORD *)v25 = 1044672615;
          *(_QWORD *)(v25 + 16) = v16;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 24) = v24;
        }
        if ( v24 )
        {
          v15 = *(_QWORD *)(v24 + 392);
          if ( v15 )
          {
            v52 = *(_QWORD *)(v15 + 64);
            if ( !v52 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v24 + 392), 0LL);
            if ( *(_DWORD *)v52 != 1329877064 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v24 + 392), *(_QWORD *)(v15 + 64));
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            v54 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 0x30uLL);
              *(_DWORD *)v54 = 1668571500;
              v54[4] = v15;
              *((_DWORD *)v54 + 6) = 1884308559;
              v54[5] = 0LL;
              v55 = v54 + 1;
              v56 = *(_QWORD **)(v52 + 1272);
              if ( *v56 != v52 + 1264 )
                __fastfail(3u);
              *v55 = v52 + 1264;
              v55[1] = v56;
              *v56 = v55;
              *(_QWORD *)(v52 + 1272) = v55;
            }
            else
            {
              ++*(_DWORD *)(v52 + 1280);
            }
            v4 = a3;
          }
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
  if ( v15 )
    *(_DWORD *)(a2 + 416) = 1;
  v26 = *a4;
  v27 = (v15 != 0) | 0x10;
  if ( (*a4 & 1) == 0 )
    v27 = v15 != 0;
  v28 = v27 | 2;
  if ( (v26 & 4) == 0 )
    v28 = v27;
  if ( (v26 & 8) != 0 )
    v28 |= 4u;
  *(_WORD *)(a2 + 420) = v26;
  v29 = v28 | 8;
  if ( (v26 & 2) == 0 )
    v29 = v28;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v30 = *(_QWORD *)(a1 + 64);
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
      *(_DWORD *)v31 = 1414087210;
      *(_QWORD *)(v31 + 16) = v26;
      *(_QWORD *)(v31 + 24) = v29;
      *(_QWORD *)(v31 + 8) = 0LL;
    }
  }
  v32 = *(unsigned __int16 *)(a2 + 4);
  v33 = *(unsigned int *)(a2 + 400);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 64);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
      *(_DWORD *)v35 = 844382762;
      *(_QWORD *)(v35 + 8) = 0LL;
      *(_QWORD *)(v35 + 16) = v33;
      *(_QWORD *)(v35 + 24) = v32;
    }
  }
  v36 = *(unsigned int *)(v4 + 8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 861159978;
      *(_QWORD *)(v38 + 24) = v29;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = v36;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v36,
      89,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_WORD *)(a2 + 420));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v36,
      90,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_DWORD *)(a2 + 400));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v36,
      91,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_DWORD *)(v4 + 8));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v36,
      92,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      v29);
  if ( (*(_WORD *)(a2 + 420) & 0x108) == 0 && (*(_DWORD *)(v4 + 8) & 0x80008) == 0 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        93,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 512, 1886353240, v29, *(unsigned int *)(v4 + 8));
    v29 &= ~8u;
    UsbhSignalResumeEvent(a1, a2);
    UsbhSignalSuspendEvent(a1, a2);
    LOBYTE(v68) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 60, v4, 56, 0, 0, usbfile_pchange_c, 5582, v68);
  }
  v39 = *(_DWORD *)(v4 + 32);
  v40 = *(_WORD *)(a2 + 420);
  v41 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v42 = *(_DWORD *)(a2 + 400);
  v43 = a3;
  v44 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a2 + 856) = v41;
  v45 = a2 + 32 * (v41 + 27);
  *(_DWORD *)v45 = v42;
  *(_DWORD *)(v45 + 4) = v44;
  *(_BYTE *)(v45 + 18) = v29;
  *(_WORD *)(v45 + 16) = v40;
  *(_QWORD *)(v45 + 8) = v15;
  *(_BYTE *)(v45 + 19) = 0;
  *(_DWORD *)(v45 + 20) = v39;
  *(_DWORD *)(v45 + 28) = 1;
  v46 = *(_QWORD *)(a1 + 64);
  if ( !v46 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v46 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v47 = *(void (__fastcall **)(_QWORD, int *))(v46 + 4592);
  if ( v47 )
  {
    v47(*(_QWORD *)(v46 + 4560), v69);
    LODWORD(v47) = v69[0];
    v43 = a3;
  }
  *(_DWORD *)(v45 + 24) = (_DWORD)v47 - v39;
  if ( !v15 )
  {
LABEL_62:
    if ( (*(_DWORD *)(a3 + 8) & 0x20000) == 0 || (v60 = *(_QWORD *)(a3 + 40), v60 == v15) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          94,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4));
      v48 = *(_DWORD *)(a2 + 400);
      if ( v48 )
      {
        v58 = v48 - 1;
        if ( v58 )
        {
          v61 = v58 - 1;
          if ( v61 )
          {
            v62 = v61 - 1;
            if ( v62 )
            {
              v63 = v62 - 1;
              if ( v63 )
              {
                if ( v63 == 1 )
                  *(_DWORD *)(a2 + 400) = UsbhHandleSuspend(a1, *(_QWORD *)(a3 + 8), v29, a2, v15);
              }
              else
              {
                if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
                {
                  *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent(a1, v15);
                }
                else
                {
                  *(_DWORD *)(a2 + 400) = 4;
                  if ( (*(_DWORD *)(a3 + 8) & 0x20000) != 0 )
                  {
                    UsbhSignalSyncDeviceResetPdo(a1, v15, -1073741823);
                    UsbhSignalDriverResetEvent(a1, a2);
                  }
                  if ( (*(_DWORD *)(a3 + 8) & 0x10000) != 0 )
                  {
                    UsbhSignalSyncDeviceResetPdo(a1, v15, -1073741823);
                    UsbhSignalDriverResetEvent(a1, a2);
                  }
                  if ( (*(_DWORD *)(a3 + 8) & 0x40000) != 0 )
                    UsbhSignalSuspendEvent(a1, a2);
                  if ( (*(_DWORD *)(a3 + 8) & 0x100000) != 0 )
                  {
                    UsbhSignalResumeEvent(a1, a2);
                    if ( v29 == 1 )
                    {
                      UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
                      UsbhDropDevice(a1, a2, v15);
                    }
                  }
                }
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    96,
                    (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids);
                Log(a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v29);
              }
            }
            else
            {
              if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
                *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent(a1, v15);
              *(_DWORD *)(a2 + 400) = 3;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  95,
                  (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids);
              Log(a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v29);
            }
          }
          else
          {
            *(_DWORD *)(a2 + 400) = UsbhEnumerate2(a1, v15);
          }
        }
        else
        {
          *(_DWORD *)(a2 + 400) = UsbhEnumerate1(a1, *(_QWORD *)(a3 + 8), v29, a2, v15);
        }
      }
      else
      {
        *(_DWORD *)(a2 + 400) = UsbhWaitConnect(a1, v15);
      }
    }
    else
    {
      Log(a1, 512, 1685222994, v60, *(unsigned int *)(a3 + 8));
      UsbhSignalSyncDeviceResetPdo(a1, *(_QWORD *)(a3 + 40), -1073741810);
      UsbhSignalDriverResetEvent(a1, a2);
    }
    goto LABEL_67;
  }
  v57 = *(_QWORD *)(v15 + 64);
  if ( !v57 )
    UsbhTrapFatal_Dbg(v15, 0LL);
  if ( *(_DWORD *)v57 != 1329877064 )
    UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64));
  if ( !*(_BYTE *)(v57 + 2732) || (*(_BYTE *)(a2 + 420) & 1) != 0 )
  {
    if ( (*(_DWORD *)(v57 + 1412) & 0x400000) != 0 )
    {
      KeWaitForSingleObject((PVOID)(v57 + 2928), Executive, 0, 0, 0LL);
      if ( (*(_DWORD *)(v57 + 1412) & 0x4000000) != 0 && (*(_BYTE *)(a3 + 8) & 1) != 0 )
      {
        Log(a1, 512, 1144213585, HIBYTE(*(_DWORD *)(v57 + 1412)) & 1, *(unsigned __int16 *)(a2 + 420));
        *(_DWORD *)(v57 + 1412) |= 0x3000000u;
        v67 = (struct _KEVENT *)(v57 + 2904);
        if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
          KeSetEvent(v67, 0, 0);
        else
          KeResetEvent(v67);
        KeSetEvent((PRKEVENT)(v57 + 2928), 0, 0);
        goto LABEL_67;
      }
      KeSetEvent((PRKEVENT)(v57 + 2928), 0, 0);
    }
    goto LABEL_62;
  }
  v64 = *(unsigned int *)(v43 + 8);
  if ( (v64 & 0x30008) != 0 )
  {
    if ( (v64 & 0x30000) != 0 )
    {
      Log(a1, 512, 1650742098, *(_QWORD *)(v43 + 40), v64);
      UsbhSignalSyncDeviceResetPdo(a1, v15, -1073741823);
      UsbhSignalDriverResetEvent(a1, a2);
      v43 = a3;
    }
    Log(a1, 512, 1650741836, 0, *(unsigned int *)(v43 + 8));
    v65 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v7 + 3072) == v65 )
    {
      v66 = *(_QWORD *)(a2 + 376);
      if ( *(_QWORD *)(v7 + 3080) == v66 )
        UsbhReleaseEnumBusLockEx(a1, v66, v65);
    }
    LOBYTE(v68) = 1;
    UsbhException(a1, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 5639, v68);
  }
LABEL_67:
  if ( *(_DWORD *)(a2 + 416) )
  {
    Log(a1, 1024, 1970032689, v15, a2);
    v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a2 + 416) = 0;
    Log(a1, 1024, 1970032690, v15, a2);
    UsbhDerefPdo(a1, v15, 0LL, 1884308559LL);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v59);
  }
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v49 = *(_QWORD *)(a1 + 64);
    if ( v49 )
    {
      v50 = *(_QWORD *)(v49 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
      *(_DWORD *)v50 = 762733936;
      *(_QWORD *)(v50 + 8) = 0LL;
      *(_QWORD *)(v50 + 16) = a2;
      *(_QWORD *)(v50 + 24) = 0LL;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      97,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}
