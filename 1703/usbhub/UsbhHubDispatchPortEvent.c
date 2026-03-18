/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x1C0010E20
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C000F560 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C00400D4 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0007C30 (UsbhSignalResumeEvent.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0007D84 (UsbhSignalDriverResetEvent.c)
 *     UsbhHandleSuspend @ 0x1C000880C (UsbhHandleSuspend.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0009EC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A028 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhWaitConnect @ 0x1C0014410 (UsbhWaitConnect.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhEnumerate1 @ 0x1C0021090 (UsbhEnumerate1.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041390 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhEnumerate2 @ 0x1C005031C (UsbhEnumerate2.c)
 *     UsbhDropDevice @ 0x1C0050694 (UsbhDropDevice.c)
 *     UsbhHandleOvercurrent @ 0x1C0050820 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v4; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int16 v16; // bp
  __int64 v17; // rdx
  __int64 v18; // rcx
  KIRQL v19; // al
  char v20; // r9
  KIRQL v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int16 v28; // r9
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // r12
  __int16 v32; // ax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  PDEVICE_OBJECT v42; // r10
  int v43; // ecx
  int v44; // ebp
  __int16 v45; // dx
  int v46; // eax
  __int64 v47; // r14
  __int64 v48; // r14
  __int64 v49; // rcx
  void (__fastcall *v50)(_QWORD, int *, __int64, __int64); // rax
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v56; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v58; // r14
  _QWORD *v59; // r14
  _QWORD *v60; // rcx
  __int64 v61; // rbp
  int v62; // r9d
  __int64 v63; // rbp
  __int64 *v64; // r14
  __int64 *v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 *v68; // rdx
  __int64 **v69; // rcx
  int v70; // eax
  __int64 v71; // r9
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // edx
  int v76; // edx
  int v77; // edx
  int v78; // eax
  int v79; // r8d
  __int64 v80; // rdx
  struct _KEVENT *v81; // rcx
  int v82; // eax
  int v83; // [rsp+48h] [rbp-60h]
  int v84; // [rsp+50h] [rbp-58h] BYREF
  KIRQL v85; // [rsp+58h] [rbp-50h]

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
  v20 = UsbhLogMask;
  v21 = v19;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v22 = *(_QWORD *)(a1 + 64);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
      *(_DWORD *)v23 = 1413771367;
      *(_QWORD *)(v23 + 16) = v16;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v23 + 24) = 0LL;
      v20 = UsbhLogMask;
    }
  }
  if ( v16 )
  {
    v24 = *(_QWORD *)(a1 + 64);
    if ( !v24 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v24 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v24);
    if ( v16 <= *(unsigned __int8 *)(v24 + 2938) )
    {
      v25 = *(_QWORD *)(v24 + 3056);
      if ( v25 )
      {
        v26 = v25 + 2928LL * (v16 - 1);
        if ( (v20 & 8) != 0 )
        {
          v27 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_DWORD *)v27 = 1044672615;
          *(_QWORD *)(v27 + 16) = v16;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 24) = v26;
        }
        if ( v26 )
        {
          v15 = *(_QWORD *)(v26 + 392);
          if ( v15 )
          {
            v56 = *(_QWORD *)(v15 + 64);
            if ( !v56 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v26 + 392), 0LL);
            if ( *(_DWORD *)v56 != 1329877064 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v26 + 392), *(_QWORD *)(v15 + 64));
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            v58 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 0x30uLL);
              *(_DWORD *)v58 = 1668571500;
              v58[4] = v15;
              *((_DWORD *)v58 + 6) = 1884308559;
              v58[5] = 0LL;
              v59 = v58 + 1;
              v60 = *(_QWORD **)(v56 + 1272);
              if ( *v60 != v56 + 1264 )
                __fastfail(3u);
              *v59 = v56 + 1264;
              v59[1] = v60;
              *v60 = v59;
              *(_QWORD *)(v56 + 1272) = v59;
            }
            else
            {
              ++*(_DWORD *)(v56 + 1280);
            }
            v4 = a3;
          }
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21);
  if ( v15 )
    *(_DWORD *)(a2 + 416) = 1;
  v28 = *a4;
  v29 = (v15 != 0) | 0x10;
  if ( (*a4 & 1) == 0 )
    v29 = v15 != 0;
  v30 = v29 | 2;
  if ( (v28 & 4) == 0 )
    v30 = v29;
  if ( (v28 & 8) != 0 )
    v30 |= 4u;
  *(_WORD *)(a2 + 420) = v28;
  v31 = v30 | 8;
  if ( (v28 & 2) == 0 )
    v31 = v30;
  v32 = UsbhLogMask;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v33 = *(_QWORD *)(a1 + 64);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
      *(_DWORD *)v34 = 1414087210;
      *(_QWORD *)(v34 + 16) = v28;
      *(_QWORD *)(v34 + 24) = v31;
      *(_QWORD *)(v34 + 8) = 0LL;
      v32 = UsbhLogMask;
    }
  }
  v35 = *(unsigned __int16 *)(a2 + 4);
  v36 = *(unsigned int *)(a2 + 400);
  if ( (v32 & 0x200) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 844382762;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = v36;
      *(_QWORD *)(v38 + 24) = v35;
      v32 = UsbhLogMask;
    }
  }
  v39 = *(unsigned int *)(v4 + 8);
  if ( (v32 & 0x200) != 0 )
  {
    v40 = *(_QWORD *)(a1 + 64);
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
      *(_DWORD *)v41 = 861159978;
      *(_QWORD *)(v41 + 24) = v31;
      *(_QWORD *)(v41 + 8) = 0LL;
      *(_QWORD *)(v41 + 16) = v39;
    }
  }
  v42 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v39,
      89,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_WORD *)(a2 + 420));
    v42 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        v75,
        v39,
        90,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_DWORD *)(a2 + 400));
      v42 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          v76,
          v39,
          91,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_DWORD *)(v4 + 8));
        v42 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            v77,
            v39,
            92,
            (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
            *(_WORD *)(a2 + 4),
            v31);
          v42 = WPP_GLOBAL_Control;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v4 + 8) & 0x80008) == 0 && (*(_WORD *)(a2 + 420) & 0x108) == 0 )
  {
    if ( LOWORD(v42->DeviceType) )
      WPP_RECORDER_SF_d(
        v42->DeviceExtension,
        0,
        1,
        93,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 512, 1886353240, v31, *(unsigned int *)(v4 + 8));
    v31 &= ~8u;
    UsbhSignalResumeEvent(a1, a2);
    UsbhSignalSuspendEvent(a1, a2);
    LOBYTE(v83) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 60, v4, 56, 0, 0, usbfile_pchange_c, 5582, v83);
  }
  v43 = *(_DWORD *)(v4 + 8);
  v44 = *(_DWORD *)(v4 + 32);
  v45 = *(_WORD *)(a2 + 420);
  v46 = *(_DWORD *)(a2 + 400);
  v47 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  *(_DWORD *)(a2 + 856) = v47;
  v48 = a2 + 32 * (v47 + 27);
  *(_DWORD *)v48 = v46;
  *(_DWORD *)(v48 + 4) = v43;
  *(_BYTE *)(v48 + 18) = v31;
  *(_WORD *)(v48 + 16) = v45;
  *(_QWORD *)(v48 + 8) = v15;
  *(_BYTE *)(v48 + 19) = 0;
  *(_DWORD *)(v48 + 20) = v44;
  *(_DWORD *)(v48 + 28) = 1;
  v49 = *(_QWORD *)(a1 + 64);
  if ( !v49 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v49 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v50 = *(void (__fastcall **)(_QWORD, int *, __int64, __int64))(v49 + 4592);
  if ( v50 )
  {
    v50(*(_QWORD *)(v49 + 4560), &v84, v39, v36);
    LODWORD(v50) = v84;
  }
  *(_DWORD *)(v48 + 24) = (_DWORD)v50 - v44;
  if ( v15 )
  {
    v61 = *(_QWORD *)(v15 + 64);
    if ( !v61 )
      UsbhTrapFatal_Dbg(v15, 0LL);
    if ( *(_DWORD *)v61 != 1329877064 )
      UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64));
    if ( *(_BYTE *)(v61 + 2716) && (*(_BYTE *)(a2 + 420) & 1) == 0 )
    {
      v78 = *(_DWORD *)(a3 + 8);
      if ( (v78 & 0x30008) != 0 )
      {
        if ( (v78 & 0x30000) != 0 )
        {
          Log(a1, 512, 1650742098, *(_QWORD *)(a3 + 40), *(unsigned int *)(a3 + 8));
          UsbhSignalSyncDeviceResetPdo(a1, v15, -1073741823);
          UsbhSignalDriverResetEvent(a1, a2);
        }
        Log(a1, 512, 1650741836, 0, *(unsigned int *)(a3 + 8));
        v79 = *(unsigned __int16 *)(a2 + 4);
        if ( *(_DWORD *)(v7 + 3072) == v79 )
        {
          v80 = *(_QWORD *)(a2 + 376);
          if ( *(_QWORD *)(v7 + 3080) == v80 )
            UsbhReleaseEnumBusLockEx(a1, v80, v79);
        }
        LOBYTE(v83) = 1;
        UsbhException(a1, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 5639, v83);
      }
      goto LABEL_61;
    }
    if ( (*(_DWORD *)(v61 + 1412) & 0x400000) != 0 )
    {
      KeWaitForSingleObject((PVOID)(v61 + 2912), Executive, 0, 0, 0LL);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 && (*(_DWORD *)(v61 + 1412) & 0x4000000) != 0 )
      {
        Log(a1, 512, 1144213585, HIBYTE(*(_DWORD *)(v61 + 1412)) & 1, *(unsigned __int16 *)(a2 + 420));
        *(_DWORD *)(v61 + 1412) |= 0x3000000u;
        v81 = (struct _KEVENT *)(v61 + 2888);
        if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
          KeSetEvent(v81, 0, 0);
        else
          KeResetEvent(v81);
        KeSetEvent((PRKEVENT)(v61 + 2912), 0, 0);
        goto LABEL_61;
      }
      KeSetEvent((PRKEVENT)(v61 + 2912), 0, 0);
    }
  }
  if ( (*(_DWORD *)(a3 + 8) & 0x20000) != 0 )
  {
    v71 = *(_QWORD *)(a3 + 40);
    if ( v71 != v15 )
    {
      Log(a1, 512, 1685222994, v71, *(unsigned int *)(a3 + 8));
      UsbhSignalSyncDeviceResetPdo(a1, *(_QWORD *)(a3 + 40), -1073741810);
      UsbhSignalDriverResetEvent(a1, a2);
      goto LABEL_61;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      94,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  v51 = *(_DWORD *)(a2 + 400);
  if ( !v51 )
  {
    v52 = UsbhWaitConnect(a1, v15);
LABEL_60:
    *(_DWORD *)(a2 + 400) = v52;
    goto LABEL_61;
  }
  v70 = v51 - 1;
  if ( !v70 )
  {
    v52 = UsbhEnumerate1(a1, v15);
    goto LABEL_60;
  }
  v72 = v70 - 1;
  if ( !v72 )
  {
    v52 = UsbhEnumerate2(a1, v15);
    goto LABEL_60;
  }
  v73 = v72 - 1;
  if ( v73 )
  {
    v74 = v73 - 1;
    if ( v74 )
    {
      if ( v74 == 1 )
      {
        v52 = UsbhHandleSuspend(a1, *(_QWORD *)(a3 + 8), v31, a2, v15);
        goto LABEL_60;
      }
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
          if ( v31 == 1 )
          {
            UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
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
      Log(a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v31);
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
    Log(a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v31);
  }
LABEL_61:
  if ( *(_DWORD *)(a2 + 416) )
  {
    Log(a1, 1024, 1970032689, v15, a2);
    v85 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a2 + 416) = 0;
    Log(a1, 1024, 1970032690, v15, a2);
    Log(a1, 256, 1685218896, v62, 1884308559LL);
    v63 = PdoExt(v15);
    v64 = (__int64 *)(v63 + 1264);
    v65 = *(__int64 **)(v63 + 1264);
    if ( v65 == (__int64 *)(v63 + 1264) )
    {
LABEL_158:
      v82 = *(_DWORD *)(v63 + 1280);
      if ( v82 )
        *(_DWORD *)(v63 + 1280) = v82 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v66 = *(_QWORD *)(a1 + 64);
          if ( v66 )
          {
            v67 = *(_QWORD *)(v66 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v66 + 880)) & *(_DWORD *)(v66 + 884));
            *(_DWORD *)v67 = 1064591724;
            *(_QWORD *)(v67 + 8) = 0LL;
            *(_QWORD *)(v67 + 16) = v63;
            *(_QWORD *)(v67 + 24) = 1884308559LL;
          }
        }
        if ( *((_DWORD *)v65 + 4) == 1884308559 && !v65[4] )
          break;
        v65 = (__int64 *)*v65;
        if ( v65 == v64 )
          goto LABEL_158;
      }
      v68 = (__int64 *)*v65;
      v69 = (__int64 **)v65[1];
      if ( *(__int64 **)(*v65 + 8) != v65 || *v69 != v65 )
        __fastfail(3u);
      *v69 = v68;
      v68[1] = (__int64)v69;
      ExFreePoolWithTag(v65 - 1, 0);
    }
    if ( (__int64 *)*v64 == v64 && !*(_DWORD *)(v63 + 1280) )
      KeSetEvent((PRKEVENT)(v63 + 1288), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v85);
  }
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v53 = *(_QWORD *)(a1 + 64);
    if ( v53 )
    {
      v54 = *(_QWORD *)(v53 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
      *(_DWORD *)v54 = 762733936;
      *(_QWORD *)(v54 + 8) = 0LL;
      *(_QWORD *)(v54 + 16) = a2;
      *(_QWORD *)(v54 + 24) = 0LL;
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
