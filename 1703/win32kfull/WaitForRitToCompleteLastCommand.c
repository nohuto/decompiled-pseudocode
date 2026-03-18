/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C0109144
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C0108D50 (EditionDeactivateMitInput.c)
 *     WaitForRitDisEngagement @ 0x1C0109034 (WaitForRitDisEngagement.c)
 *     UserDeactivateDwmInputProcessing @ 0x1C01A1080 (UserDeactivateDwmInputProcessing.c)
 * Callees:
 *     GetDITWakeReason @ 0x1C00FF668 (GetDITWakeReason.c)
 *     ?AssociateKernelIocWcpHelper@@YAXPEAX0@Z @ 0x1C0109804 (-AssociateKernelIocWcpHelper@@YAXPEAX0@Z.c)
 *     ProcessHidInputViaRim @ 0x1C01A821C (ProcessHidInputViaRim.c)
 *     DitClose @ 0x1C01B9FB8 (DitClose.c)
 *     DitOpen @ 0x1C01BA028 (DitOpen.c)
 *     DitStartRead @ 0x1C01BA0E8 (DitStartRead.c)
 *     DitStopRead @ 0x1C01BA158 (DitStopRead.c)
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v5; // ebp
  int v6; // esi
  int v7; // edi
  int v8; // eax
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *KeyContext; // rax
  __int64 v13; // rax
  __int64 *v14; // rdx
  PRKEVENT v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  PRKEVENT v27; // rbx
  PRKEVENT *v28; // rcx
  PRKEVENT v29; // rcx
  __int64 v30; // rdx
  struct _KEVENT *v31; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-68h]
  int v34; // [rsp+28h] [rbp-60h]
  struct _FILE_IO_COMPLETION_INFORMATION v35[2]; // [rsp+40h] [rbp-48h] BYREF
  int v36; // [rsp+90h] [rbp+8h] BYREF
  char v37; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a2;
  v6 = a1;
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( !v6 )
          {
            v7 = ObWaitForSingleObject(ghDITRITEvent, 0LL, 0LL, 0LL, 0LL);
LABEL_57:
            if ( v7 != 257 || PsIsThreadTerminating(KeGetCurrentThread()) )
              return EnterCrit(0LL, 1LL);
          }
          if ( (gdwMitConfig & 4) != 0 )
          {
            v8 = IOCPDispatcher::WaitAndDispatch(gpIOCPDispatcher, 0LL, 0, v35);
          }
          else
          {
            LOBYTE(v34) = 0;
            v8 = ZwRemoveIoCompletionEx(ghDITIocp, v35, 1LL, &v37, 0LL, v34);
          }
          v7 = v8;
          if ( v8 )
            goto LABEL_57;
          if ( v35[0].ApcContext == (PVOID)1 )
            break;
          if ( v35[0].ApcContext == (PVOID)2 )
          {
            v10 = gdwMitConfig;
            if ( (gdwMitConfig & 4) != 0 )
              break;
          }
          EnterDeviceInfoListCrit_(v10);
          KeyContext = (char *)v35[0].KeyContext;
          if ( v35[0].KeyContext )
          {
            v11 = (__int64)v35[0].KeyContext + 104;
            *((_QWORD *)v35[0].KeyContext + 14) = (char *)v35[0].KeyContext + 104;
            *((_QWORD *)KeyContext + 13) = KeyContext + 104;
            --*((_DWORD *)KeyContext + 78);
            if ( v5 )
            {
              if ( *(_QWORD *)v11 == v11 )
              {
                *(_OWORD *)(KeyContext + 168) = *(_OWORD *)&v35[0].IoStatusBlock.Status;
                v13 = gpDitInfo + 64;
                v14 = *(__int64 **)(gpDitInfo + 72);
                if ( *v14 != gpDitInfo + 64 )
                  __fastfail(3u);
                *(_QWORD *)v11 = v13;
                *(_QWORD *)(v11 + 8) = v14;
                *v14 = v11;
                *(_QWORD *)(v13 + 8) = v11;
              }
            }
            else
            {
              v11 = 65533LL;
              *((_WORD *)KeyContext + 32) &= ~2u;
            }
          }
          LeaveDeviceInfoListCrit_(v11);
        }
        if ( v35[0].KeyContext == ghDITRITEventWcp )
        {
          AssociateKernelIocWcpHelper(v35[0].KeyContext, v9);
          return EnterCrit(0LL, 1LL);
        }
        if ( v35[0].KeyContext != ghDITEventWcp )
          break;
        AssociateKernelIocWcpHelper(v35[0].KeyContext, v9);
        while ( (unsigned int)GetDITWakeReason(&v36) )
        {
          switch ( v36 )
          {
            case 1:
              DitOpen();
              break;
            case 2:
              DitClose();
              break;
            case 4:
              DitStartRead();
              break;
            case 8:
              DitStopRead();
              break;
            case 16:
              *a3 |= 0x10u;
              break;
            case 32:
              *a3 |= 0x20u;
              break;
            case 64:
              *a3 |= 0x40u;
              break;
            case 128:
              *a3 |= 0x80u;
              break;
            case 256:
              *a3 |= 0x100u;
              break;
          }
        }
      }
      if ( v35[0].KeyContext != ghDITResetEventWcp )
        break;
      gbDITResetEventAlreadySignaled = 1;
    }
    if ( v35[0].KeyContext != ghDITMmcssEventWcp )
      break;
    gbDITMmcssEventAlreadySignaled = 1;
  }
  if ( (gdwMitConfig & 4) == 0 && v35[0].KeyContext == aDeviceTemplate[157] )
  {
    AssociateKernelIocpWcp(
      aDeviceTemplate[157],
      ghDITIocp,
      aDeviceTemplate[155],
      aDeviceTemplate[157],
      1LL,
      0,
      &aDeviceTemplate[158]);
    EnterCrit(0LL, 1LL);
    RIMOnPnpNotification(aDeviceTemplate[152]);
LABEL_62:
    UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
    return EnterCrit(0LL, 1LL);
  }
  if ( (gdwMitConfig & 4) != 0 )
    return EnterCrit(0LL, 1LL);
  if ( v35[0].KeyContext != aDeviceTemplate[162] )
  {
    if ( v35[0].KeyContext == aDeviceTemplate[167] )
    {
      AssociateKernelIocpWcp(
        aDeviceTemplate[167],
        ghDITIocp,
        aDeviceTemplate[165],
        aDeviceTemplate[167],
        1LL,
        0,
        &aDeviceTemplate[168]);
      EnterCrit(0LL, 1LL);
      v30 = 0LL;
    }
    else
    {
      if ( v35[0].KeyContext != aDeviceTemplate[172] )
      {
        if ( v35[0].KeyContext == aDeviceTemplate[180] )
        {
          AssociateKernelIocpWcp(
            aDeviceTemplate[180],
            ghDITIocp,
            aDeviceTemplate[178],
            aDeviceTemplate[180],
            1LL,
            0,
            &aDeviceTemplate[181]);
          EnterCrit(0LL, 1LL);
          RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[152], 2LL);
          v31 = aDeviceTemplate[182];
        }
        else
        {
          if ( v35[0].KeyContext != aDeviceTemplate[186] )
          {
            v15 = aDeviceTemplate[192];
            if ( v35[0].KeyContext != v15 )
              return EnterCrit(0LL, 1LL);
            AssociateKernelIocpWcp(v15, ghDITIocp, aDeviceTemplate[190], v15, 1LL, 0, &aDeviceTemplate[193]);
            EnterCrit(0LL, 1LL);
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(aDeviceTemplate[152], gpWin32kDriverObject);
            KeSetEvent(aDeviceTemplate[194], 1, 0);
            UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
            goto LABEL_57;
          }
          AssociateKernelIocpWcp(
            aDeviceTemplate[186],
            ghDITIocp,
            aDeviceTemplate[184],
            aDeviceTemplate[186],
            1LL,
            0,
            &aDeviceTemplate[187]);
          EnterCrit(0LL, 1LL);
          if ( gProtocolType )
            goto LABEL_62;
          RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
          v31 = aDeviceTemplate[188];
        }
        KeSetEvent(v31, 1, 0);
        goto LABEL_62;
      }
      AssociateKernelIocpWcp(
        aDeviceTemplate[172],
        ghDITIocp,
        aDeviceTemplate[170],
        aDeviceTemplate[172],
        1LL,
        0,
        &aDeviceTemplate[173]);
      EnterCrit(0LL, 1LL);
      v30 = 1LL;
    }
    RIMOnTimerNotification(aDeviceTemplate[152], v30);
    goto LABEL_62;
  }
  AssociateKernelIocpWcp(
    aDeviceTemplate[162],
    ghDITIocp,
    aDeviceTemplate[160],
    aDeviceTemplate[162],
    1LL,
    0,
    &aDeviceTemplate[163]);
  EnterCrit(0LL, 1LL);
  v27 = 0LL;
  v28 = (PRKEVENT *)aDeviceTemplate[201];
  if ( v28 != &aDeviceTemplate[202] )
    v27 = aDeviceTemplate[201];
  UserSessionSwitchLeaveCrit(v28, v24, v25, v26);
  v29 = aDeviceTemplate[0];
  if ( SLODWORD(aDeviceTemplate[196]) >= 0 )
  {
    ProcessHidInputViaRim(aDeviceTemplate[201]);
    v29 = aDeviceTemplate[0];
    if ( v27 )
    {
      aDeviceTemplate[201] = (PRKEVENT)&aDeviceTemplate[202];
      v29 = aDeviceTemplate[0];
    }
  }
  LOBYTE(BugCheckParameter4) = 0;
  RIMReadInput(
    v29[50].Header.WaitListHead.Blink,
    &v29[67],
    (unsigned int)v29[65].Header.SignalState,
    *(_QWORD *)&v29[53].Header.Lock,
    BugCheckParameter4,
    &v29[66],
    &v29[65],
    &v29[65].Header.WaitListHead);
  if ( v27 )
  {
    EnterCrit(0LL, 1LL);
    RIMFreeKernelMem(v27);
    goto LABEL_62;
  }
  return EnterCrit(0LL, 1LL);
}
