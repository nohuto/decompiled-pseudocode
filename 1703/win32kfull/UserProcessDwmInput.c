/*
 * XREFs of UserProcessDwmInput @ 0x1C01A12C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0005124 (xxxComputeInputSinkInfo.c)
 *     GetDITWakeReason @ 0x1C00FF668 (GetDITWakeReason.c)
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     ?DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z @ 0x1C019C2F4 (-DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z.c)
 *     ProcessHidInputViaRim @ 0x1C01A821C (ProcessHidInputViaRim.c)
 *     DitClose @ 0x1C01B9FB8 (DitClose.c)
 *     DitOpen @ 0x1C01BA028 (DitOpen.c)
 *     DitStartRead @ 0x1C01BA0E8 (DitStartRead.c)
 *     DitStopRead @ 0x1C01BA158 (DitStopRead.c)
 *     DitTouchInject @ 0x1C01BA218 (DitTouchInject.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01D3B10 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     xxxRouteTouchpadInertiaToMT @ 0x1C020AA0C (xxxRouteTouchpadInertiaToMT.c)
 */

__int64 __fastcall UserProcessDwmInput(struct DIT_INFO *a1)
{
  unsigned int v2; // ebp
  char v3; // di
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PalmRejection *v10; // rcx
  PRKEVENT v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PRKEVENT v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PRKEVENT v20; // rbx
  PRKEVENT *v21; // rcx
  PRKEVENT v22; // rcx
  PRKEVENT v23; // rcx
  __int64 v24; // rdx
  PRKEVENT v25; // rcx
  PRKEVENT v26; // rcx
  struct _KEVENT *v27; // rcx
  PRKEVENT v28; // rcx
  PRKEVENT v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 **v34; // rdx
  __int64 v35; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-68h]
  int v38; // [rsp+28h] [rbp-60h]
  _QWORD v39[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v40; // [rsp+50h] [rbp-38h]
  unsigned int v41; // [rsp+90h] [rbp+8h] BYREF
  char v42; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  *((_DWORD *)a1 + 14) = 0;
  v3 = 1;
  do
  {
    if ( gbDITResetEventAlreadySignaled )
      goto LABEL_5;
    if ( gbDITMmcssEventAlreadySignaled )
    {
      *((_DWORD *)a1 + 14) = 1;
LABEL_5:
      v3 = 0;
      continue;
    }
    DITExecuteQueuedInputCompletions(a1);
    LOBYTE(v38) = 1;
    v4 = ZwRemoveIoCompletionEx(ghDITIocp, v39, 1LL, &v42, 0LL, v38);
    v2 = v4;
    if ( v4 )
    {
      if ( v4 == 192 )
        goto LABEL_10;
      if ( v4 != 257 )
        goto LABEL_5;
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
LABEL_10:
        EtwTraceDitTerminated();
        goto LABEL_5;
      }
      continue;
    }
    if ( v39[1] != 1LL )
    {
      EnterDeviceInfoListCrit_(v5);
      v31 = v39[0];
      if ( v39[0] )
      {
        --*(_DWORD *)(v39[0] + 312LL);
        v32 = (__int64 *)(v31 + 104);
        if ( (__int64 *)*v32 == v32 )
        {
          *(_OWORD *)(v31 + 168) = v40;
          v33 = gpDitInfo + 64;
          v34 = *(__int64 ***)(gpDitInfo + 72);
          if ( *v34 != (__int64 *)(gpDitInfo + 64) )
            __fastfail(3u);
          *v32 = v33;
          v32[1] = (__int64)v34;
          *v34 = v32;
          *(_QWORD *)(v33 + 8) = v32;
        }
        LeaveDeviceInfoListCrit_(v32);
        DITExecuteQueuedInputCompletions(a1);
        EnterDeviceInfoListCrit_(v35);
      }
      LeaveDeviceInfoListCrit_(v30);
      continue;
    }
    if ( (HANDLE)v39[0] == ghDITResetEventWcp )
    {
      v3 = 0;
      AssociateKernelIocpWcp(
        ghDITResetEventWcp,
        ghDITIocp,
        ghDITResetEvent,
        ghDITResetEventWcp,
        1LL,
        0,
        &gbDITResetEventAlreadySignaled);
      continue;
    }
    if ( (HANDLE)v39[0] == ghDITMmcssEventWcp )
    {
      v3 = 0;
      AssociateKernelIocpWcp(
        ghDITMmcssEventWcp,
        ghDITIocp,
        ghDITMmcssEvent,
        ghDITMmcssEventWcp,
        1LL,
        0,
        &gbDITMmcssEventAlreadySignaled);
      *((_DWORD *)a1 + 14) = 1;
      continue;
    }
    if ( (HANDLE)v39[0] == ghDITEventWcp )
    {
      AssociateKernelIocpWcp(ghDITEventWcp, ghDITIocp, ghDITEvent, ghDITEventWcp, 1LL, 0, 0LL);
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !(unsigned int)GetDITWakeReason((int *)&v41) )
            goto LABEL_78;
          if ( v41 > 0x20 )
            break;
          switch ( v41 )
          {
            case 0x20u:
              DitTouchInject();
              break;
            case 1u:
              DitOpen();
              break;
            case 2u:
              DitClose();
              break;
            case 4u:
              DitStartRead();
              break;
            case 8u:
              DitStopRead();
              break;
            case 0x10u:
              EnterCrit(0LL, 1LL);
              goto LABEL_26;
          }
        }
        switch ( v41 )
        {
          case 0x40u:
            ProcessQueuedMouseEvents();
            break;
          case 0x80u:
            xxxComputeInputSinkInfo();
            break;
          case 0x100u:
            xxxRouteTouchpadInertiaToMT();
            break;
          case 0x200u:
            EnterCrit(0LL, 1LL);
            PalmRejection::DispatchBufferedInputFrames(v10);
LABEL_26:
            UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
            break;
        }
      }
    }
    if ( (HANDLE)v39[0] == ghDITRITEventWcp )
    {
      AssociateKernelIocpWcp(ghDITRITEventWcp, ghDITIocp, ghDITRITEvent, ghDITRITEventWcp, 1LL, 0, 0LL);
      continue;
    }
    if ( (gdwMitConfig & 4) == 0 )
    {
      v11 = aDeviceTemplate[157];
      if ( (PRKEVENT)v39[0] == v11 )
      {
        AssociateKernelIocpWcp(v11, ghDITIocp, aDeviceTemplate[155], v11, 1LL, 0, &aDeviceTemplate[158]);
        EnterCrit(0LL, 1LL);
        RIMOnPnpNotification(aDeviceTemplate[152]);
        goto LABEL_71;
      }
    }
    if ( (gdwMitConfig & 4) != 0 )
      continue;
    v16 = aDeviceTemplate[162];
    if ( (PRKEVENT)v39[0] != v16 )
    {
      v23 = aDeviceTemplate[167];
      if ( (PRKEVENT)v39[0] == v23 )
      {
        AssociateKernelIocpWcp(v23, ghDITIocp, aDeviceTemplate[165], v23, 1LL, 0, &aDeviceTemplate[168]);
        EnterCrit(0LL, 1LL);
        v24 = 0LL;
        goto LABEL_60;
      }
      v25 = aDeviceTemplate[172];
      if ( (PRKEVENT)v39[0] != v25 )
      {
        v26 = aDeviceTemplate[180];
        if ( (PRKEVENT)v39[0] == v26 )
        {
          AssociateKernelIocpWcp(v26, ghDITIocp, aDeviceTemplate[178], v26, 1LL, 0, &aDeviceTemplate[181]);
          EnterCrit(0LL, 1LL);
          RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[152], 2LL);
          v27 = aDeviceTemplate[182];
        }
        else
        {
          v28 = aDeviceTemplate[186];
          if ( (PRKEVENT)v39[0] == v28 )
          {
            AssociateKernelIocpWcp(v28, ghDITIocp, aDeviceTemplate[184], v28, 1LL, 0, &aDeviceTemplate[187]);
            EnterCrit(0LL, 1LL);
            if ( gProtocolType )
              goto LABEL_71;
            RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
            v27 = aDeviceTemplate[188];
          }
          else
          {
            v29 = aDeviceTemplate[192];
            if ( (PRKEVENT)v39[0] != v29 )
              continue;
            AssociateKernelIocpWcp(v29, ghDITIocp, aDeviceTemplate[190], v29, 1LL, 0, &aDeviceTemplate[193]);
            EnterCrit(0LL, 1LL);
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(aDeviceTemplate[152], gpWin32kDriverObject);
            v27 = aDeviceTemplate[194];
          }
        }
        KeSetEvent(v27, 1, 0);
        goto LABEL_71;
      }
      AssociateKernelIocpWcp(v25, ghDITIocp, aDeviceTemplate[165], v25, 1LL, 0, &aDeviceTemplate[173]);
      EnterCrit(0LL, 1LL);
      v24 = 1LL;
LABEL_60:
      RIMOnTimerNotification(aDeviceTemplate[152], v24);
LABEL_71:
      UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
      continue;
    }
    AssociateKernelIocpWcp(v16, ghDITIocp, aDeviceTemplate[160], v16, 1LL, 0, &aDeviceTemplate[163]);
    EnterCrit(0LL, 1LL);
    v20 = 0LL;
    v21 = (PRKEVENT *)aDeviceTemplate[201];
    if ( v21 != &aDeviceTemplate[202] )
      v20 = aDeviceTemplate[201];
    UserSessionSwitchLeaveCrit(v21, v17, v18, v19);
    v22 = aDeviceTemplate[0];
    if ( SLODWORD(aDeviceTemplate[196]) >= 0 )
    {
      ProcessHidInputViaRim(aDeviceTemplate[201]);
      v22 = aDeviceTemplate[0];
      if ( v20 )
      {
        aDeviceTemplate[201] = (PRKEVENT)&aDeviceTemplate[202];
        v22 = aDeviceTemplate[0];
      }
    }
    LOBYTE(BugCheckParameter4) = 0;
    RIMReadInput(
      v22[50].Header.WaitListHead.Blink,
      &v22[67],
      (unsigned int)v22[65].Header.SignalState,
      *(_QWORD *)&v22[53].Header.Lock,
      BugCheckParameter4,
      &v22[66],
      &v22[65],
      &v22[65].Header.WaitListHead);
    if ( v20 )
    {
      EnterCrit(0LL, 1LL);
      RIMFreeKernelMem(v20);
      goto LABEL_71;
    }
LABEL_78:
    ;
  }
  while ( v3 );
  return v2;
}
