/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported @ 0x1C00081E0 (IsMulDestroyBrushInternalSupported.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     zzzWakeInputIdle @ 0x1C005B6D8 (zzzWakeInputIdle.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00B5B18 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxDoSysExpunge @ 0x1C00F48CC (xxxDoSysExpunge.c)
 *     ClientDeliverUserApc @ 0x1C010A4AC (ClientDeliverUserApc.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // r12d
  unsigned int v6; // r13d
  enum SLEEP_STATUS *v7; // rsi
  unsigned int v8; // r15d
  NTSTATUS v9; // r14d
  int v10; // r8d
  __int64 *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int16 v15; // dx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rcx
  ULONG v19; // r12d
  __int64 v20; // rdx
  int v21; // eax
  int v22; // esi
  int v23; // edi
  __int64 v24; // rdx
  struct _KEVENT *v25; // rcx
  __int64 v26; // rax
  __int64 CurrentProcessWin32Process; // rdi
  int WaitMode; // [rsp+20h] [rbp-128h]
  int Alertable; // [rsp+28h] [rbp-120h]
  int v32; // [rsp+44h] [rbp-104h]
  __int16 v33; // [rsp+48h] [rbp-100h]
  int v34; // [rsp+4Ch] [rbp-FCh]
  union _LARGE_INTEGER *Timeout; // [rsp+58h] [rbp-F0h]
  _DWORD v36[6]; // [rsp+60h] [rbp-E8h] BYREF
  enum SLEEP_STATUS *v37; // [rsp+78h] [rbp-D0h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-C8h]
  __int64 v39; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v40[8]; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-A8h]
  __int64 v42; // [rsp+A8h] [rbp-A0h] BYREF
  _BYTE v43[8]; // [rsp+B8h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-88h] BYREF
  _DWORD v45[8]; // [rsp+D0h] [rbp-78h] BYREF
  PVOID Object[4]; // [rsp+F0h] [rbp-58h] BYREF

  v34 = a4;
  v5 = a3;
  v6 = a1;
  v7 = a5;
  v37 = a5;
  v8 = 0;
  v9 = 0;
  v10 = a1 & 0x8000;
  v32 = v10;
  v36[4] = 0;
  WaitBlockArray = 0LL;
  v36[0] = 0;
  if ( !gfShellFrameHangResilient || !a5 )
  {
    v7 = (enum SLEEP_STATUS *)v36;
    v37 = (enum SLEEP_STATUS *)v36;
  }
  *(_DWORD *)v7 = 0;
  if ( (a1 & 0x8000) != 0 )
    v6 = a1 & 0xFFFF7FFF;
  if ( a2 )
  {
    v39 = -10000LL * a2;
    v11 = &v39;
  }
  else
  {
    v11 = 0LL;
  }
  Timeout = (union _LARGE_INTEGER *)v11;
  v41 = gptiCurrent;
  v33 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL);
  while ( 1 )
  {
    v12 = *(_QWORD *)(gptiCurrent + 400LL);
    if ( (*(_WORD *)(v12 + 4) & (unsigned __int16)v6) != 0 || a4 && ((unsigned __int16)v6 & *(_WORD *)(v12 + 6)) != 0 )
      break;
    if ( *(_DWORD *)v7 == 2 )
      goto LABEL_95;
    if ( !v10 && (*(_BYTE *)(v12 + 6) & 0x40) != 0 )
    {
      do
      {
        xxxReceiveMessage(gptiCurrent);
        v13 = *(_QWORD *)(gptiCurrent + 400LL);
      }
      while ( (*(_BYTE *)(v13 + 6) & 0x40) != 0 );
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) |= *(_WORD *)(gptiCurrent + 760LL) & *(_WORD *)(v13 + 6);
      *(_WORD *)(gptiCurrent + 760LL) = 0;
    }
    v14 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( *(_DWORD *)(v14 + 368) != gcSysExpunge )
    {
      *(_DWORD *)(v14 + 368) = gcSysExpunge;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL) & gdwSysExpungeMask) != 0 )
        xxxDoSysExpunge(gptiCurrent);
    }
    v15 = 64;
    if ( v32 )
      v15 = 0;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = v6 | v15;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 648LL));
    if ( v9 == 258 )
    {
      UserSetLastError(1460LL);
      *(_DWORD *)v7 = 1;
      goto LABEL_95;
    }
    if ( v9 == 192 )
    {
      ClientDeliverUserApc();
      goto LABEL_95;
    }
    if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) & *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL)) != 0 )
      goto LABEL_86;
    if ( v5 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
        goto LABEL_95;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) = 0LL;
      if ( gptiCurrent == gptiForeground
        && ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x1000) != 0 )
      {
        xxxCallHook(0, 0, 0LL, 0xBu);
      }
      zzzWakeInputIdle(gptiCurrent);
    }
    IsMulDestroyBrushInternalSupported();
    v18 = *(void **)(gptiCurrent + 1288LL);
    Object[0] = v18;
    v19 = 1;
    if ( gptiCurrent == gTermIO[2] && (v6 & 0x200) != 0 && !v11 )
    {
      v18 = (void *)aDeviceTemplate;
      Object[1] = *((PVOID *)&aDeviceTemplate + 34);
      Object[2] = *((PVOID *)&aDeviceTemplate + 39);
      Object[3] = *((PVOID *)&aDeviceTemplate + 51);
      v19 = 4;
      WaitBlockArray = (PKWAIT_BLOCK)gpDTIOMouseEventWaitObjectArray;
    }
    if ( gfShellFrameHangResilient )
    {
      v18 = *(void **)(gptiCurrent + 1256LL);
      if ( v18 )
      {
        if ( (v6 & 0xFFFF7DFF) != 0 )
          Object[v19++] = v18;
      }
    }
    do
    {
      if ( gdwInAtomicOperation )
      {
        v18 = (void *)gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v18, gdwInAtomicOperation, v16, v17);
      v9 = KeWaitForMultipleObjects(v19, Object, WaitAny, WrUserRequest, 1, 0, Timeout, WaitBlockArray);
      EnterCrit(0LL, 1LL);
      if ( v9 )
        goto LABEL_62;
      v42 = 0LL;
      LOBYTE(Alertable) = 0;
      v21 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), v45, 1LL, v40, &v42, Alertable);
      v22 = 0;
      if ( v21 )
      {
        if ( v21 == 258 )
          goto LABEL_61;
      }
      else
      {
        if ( !v45[0] )
        {
          v22 = 3;
LABEL_56:
          ZwAssociateWaitCompletionPacket(
            *(_QWORD *)(gptiCurrent + 1320LL),
            *(_QWORD *)(gptiCurrent + 1296LL),
            *(_QWORD *)(gptiCurrent + 1312LL),
            0LL,
            0LL,
            0,
            0LL,
            0LL);
          goto LABEL_57;
        }
        if ( v45[0] == 2 )
          goto LABEL_61;
        if ( v45[0] == 1 && *(_QWORD *)(gptiCurrent + 1336LL) )
        {
          v22 = v45[0] + 3;
          xxxHandleCoreMessagingQueueCompletion(gptiCurrent, (__int64)v45, v45[0], v17);
        }
      }
      if ( v22 == 3 )
        goto LABEL_56;
LABEL_57:
      if ( v22 != 4 || (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 8) != 0 && (v6 & 8) != 0 )
      {
LABEL_61:
        v7 = v37;
LABEL_62:
        v23 = 0;
        goto LABEL_63;
      }
      v23 = 1;
      v7 = v37;
LABEL_63:
      v18 = (void *)gTermIO[0];
      if ( v9 == 1 || gptiCurrent == gTermIO[2] && (unsigned int)(v9 - 2) <= 1 )
      {
        if ( gptiCurrent == gTermIO[2] )
        {
          switch ( v9 )
          {
            case 1:
              RtlInitUnicodeString(&DestinationString, 0LL);
              LOBYTE(WaitMode) = 0;
              *((_DWORD *)&aDeviceTemplate + 72) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                                     *((_QWORD *)&aDeviceTemplate + 12),
                                                     &DestinationString,
                                                     0LL,
                                                     ghRemoteMouseChannel,
                                                     WaitMode,
                                                     v43);
              KeSetEvent(*((PRKEVENT *)&aDeviceTemplate + 35), 1, 0);
              break;
            case 2:
              RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)&aDeviceTemplate + 12), 0LL);
              KeSetEvent(*((PRKEVENT *)&aDeviceTemplate + 42), 1, 0);
              break;
            case 3:
              RIMDirectStartDeviceClassNotifications(*((_QWORD *)&aDeviceTemplate + 12), gpWin32kDriverObject);
              KeSetEvent(*((PRKEVENT *)&aDeviceTemplate + 54), 1, 0);
              break;
          }
        }
        else if ( gfShellFrameHangResilient )
        {
          *(_DWORD *)v7 = 2;
          v39 = -100000LL;
        }
      }
    }
    while ( v9 == 1 || v23 );
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000) != 0 )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) )
        goto LABEL_85;
      EtwTraceSleepInputIdle(0LL, gptiCurrent);
      v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
      v25 = *(struct _KEVENT **)(v24 + 32);
      if ( v25 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v24 + 32) = 0LL;
        goto LABEL_85;
      }
      if ( v25 )
LABEL_84:
        KeClearEvent(v25);
    }
    else
    {
      v26 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( !*(_QWORD *)(v26 + 296) )
        *(_QWORD *)(v26 + 296) = gptiCurrent;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 296LL) == gptiCurrent )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v20);
        EtwTraceSleepInputIdle(0LL, gptiCurrent);
        v25 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
        if ( v25 == (struct _KEVENT *)-1LL )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 16) = 0LL;
        }
        else if ( v25 )
        {
          goto LABEL_84;
        }
      }
    }
LABEL_85:
    v5 = a3;
LABEL_86:
    v11 = (__int64 *)Timeout;
    v10 = v32;
    a4 = v34;
  }
  v8 = 1;
LABEL_95:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = v33;
  if ( v8 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v8;
}
