/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C00FD870
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C00FD450 (EditionDeactivateMitInput.c)
 *     WaitForRitDisEngagement @ 0x1C00FD760 (WaitForRitDisEngagement.c)
 * Callees:
 *     ProcessHidInputViaRim @ 0x1C01AB5BC (ProcessHidInputViaRim.c)
 *     GetDITWakeReason @ 0x1C01BADB4 (GetDITWakeReason.c)
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *KeyContext; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KEVENT *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  struct _FILE_IO_COMPLETION_INFORMATION v24; // [rsp+40h] [rbp-38h] BYREF
  int v25; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  v5 = a1;
  UserSessionSwitchLeaveCrit(a1, a2);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( !v5 )
        {
          v6 = ObWaitForSingleObject(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
          if ( v6 != 257 || PsIsThreadTerminating(KeGetCurrentThread()) )
            return EnterCrit(0LL, 1LL);
        }
        v6 = IOCPDispatcher::WaitAndDispatch(gpIOCPDispatcher, 0LL, 0, &v24);
        if ( v6 )
          goto LABEL_11;
        if ( v24.ApcContext == (PVOID)1 || v24.ApcContext == (PVOID)2 && (gdwMitConfig & 4) != 0 )
          break;
        EnterDeviceInfoListCrit_();
        KeyContext = (char *)v24.KeyContext;
        if ( v24.KeyContext )
        {
          v9 = (__int64)v24.KeyContext + 104;
          *((_QWORD *)v24.KeyContext + 14) = (char *)v24.KeyContext + 104;
          *((_QWORD *)KeyContext + 13) = KeyContext + 104;
          --*((_DWORD *)KeyContext + 78);
          if ( v4 )
          {
            if ( *(_QWORD *)v9 == v9 )
            {
              *(_OWORD *)(KeyContext + 168) = *(_OWORD *)&v24.IoStatusBlock.Status;
              v12 = gpDitInfo + 64;
              v8 = *(__int64 **)(gpDitInfo + 72);
              if ( *v8 != gpDitInfo + 64 )
                __fastfail(3u);
              *(_QWORD *)v9 = v12;
              *(_QWORD *)(v9 + 8) = v8;
              *v8 = v9;
              *(_QWORD *)(v12 + 8) = v9;
            }
          }
          else
          {
            v9 = 65533LL;
            *((_WORD *)KeyContext + 32) &= ~2u;
          }
        }
        LeaveDeviceInfoListCrit_(v9, v8, v10);
      }
      if ( v24.KeyContext == WPP_MAIN_CB.SecurityDescriptor )
      {
        IOCPDispatcher::ReassociateNonSenserHandleForIOCP(
          gpIOCPDispatcher,
          WPP_MAIN_CB.SecurityDescriptor,
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink);
        return EnterCrit(0LL, 1LL);
      }
      if ( v24.KeyContext != *(PVOID *)&WPP_MAIN_CB.ActiveThreadCount )
        break;
      IOCPDispatcher::ReassociateNonSenserHandleForIOCP(
        gpIOCPDispatcher,
        *(void **)&WPP_MAIN_CB.ActiveThreadCount,
        *(&WPP_MAIN_CB.Reserved + 1));
      while ( (unsigned int)GetDITWakeReason(&v25) )
      {
        switch ( v25 )
        {
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
  }
  while ( v24.KeyContext == (PVOID)ghDITResetEventWcp || v24.KeyContext == (PVOID)ghDITMmcssEventWcp );
  if ( (gdwMitConfig & 4) == 0 && v24.KeyContext == (PVOID)aDeviceTemplate[157] )
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
LABEL_54:
    UserSessionSwitchLeaveCrit(v14, v13);
    return EnterCrit(0LL, 1LL);
  }
  if ( (gdwMitConfig & 4) != 0 )
    return EnterCrit(0LL, 1LL);
  if ( v24.KeyContext != (PVOID)aDeviceTemplate[162] )
  {
    if ( v24.KeyContext == (PVOID)aDeviceTemplate[167] )
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
      v22 = 0LL;
    }
    else
    {
      if ( v24.KeyContext != (PVOID)aDeviceTemplate[172] )
      {
        if ( v24.KeyContext == (PVOID)aDeviceTemplate[180] )
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
          v18 = (struct _KEVENT *)aDeviceTemplate[182];
        }
        else
        {
          if ( v24.KeyContext != (PVOID)aDeviceTemplate[186] )
          {
            v15 = (PVOID)aDeviceTemplate[192];
            if ( v24.KeyContext != v15 )
              return EnterCrit(0LL, 1LL);
            AssociateKernelIocpWcp(v15, ghDITIocp, aDeviceTemplate[190], v15, 1LL, 0, &aDeviceTemplate[193]);
            EnterCrit(0LL, 1LL);
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(aDeviceTemplate[152], gpWin32kDriverObject);
            KeSetEvent((PRKEVENT)aDeviceTemplate[194], 1, 0);
            UserSessionSwitchLeaveCrit(v17, v16);
            goto LABEL_11;
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
            goto LABEL_54;
          RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
          v18 = (struct _KEVENT *)aDeviceTemplate[188];
        }
        KeSetEvent(v18, 1, 0);
        goto LABEL_54;
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
      v22 = 1LL;
    }
    RIMOnTimerNotification(aDeviceTemplate[152], v22);
    goto LABEL_54;
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
  v20 = 0LL;
  v21 = (_QWORD *)aDeviceTemplate[201];
  if ( v21 != &aDeviceTemplate[202] )
    v20 = aDeviceTemplate[201];
  UserSessionSwitchLeaveCrit(v21, v19);
  if ( SLODWORD(aDeviceTemplate[196]) >= 0 )
  {
    ProcessHidInputViaRim((void *)aDeviceTemplate[201]);
    if ( v20 )
      aDeviceTemplate[201] = &aDeviceTemplate[202];
  }
  LOBYTE(BugCheckParameter4) = 0;
  RIMReadInput(
    aDeviceTemplate[152],
    &aDeviceTemplate[201],
    HIDWORD(aDeviceTemplate[195]),
    aDeviceTemplate[159],
    BugCheckParameter4,
    &aDeviceTemplate[198],
    &aDeviceTemplate[195],
    &aDeviceTemplate[196]);
  if ( v20 )
  {
    EnterCrit(0LL, 1LL);
    RIMFreeKernelMem(v20);
    goto LABEL_54;
  }
  return EnterCrit(0LL, 1LL);
}
