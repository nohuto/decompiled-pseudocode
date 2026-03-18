/*
 * XREFs of xxxDesktopThread @ 0x1C00C7B20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00C6160 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     ?xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z @ 0x1C00C85A8 (-xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00C86F4 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     vCleanupRimClient @ 0x1C0109970 (vCleanupRimClient.c)
 *     vCleanupRimClientWorker @ 0x1C0109B6C (vCleanupRimClientWorker.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0111B98 (xxxCleanupMotherDesktopWindow.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C011A838 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z @ 0x1C019CEF8 (-ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z.c)
 *     xxxOnPTPMouseOperation @ 0x1C01B1678 (xxxOnPTPMouseOperation.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01B6E5C (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     OpenMultiplePortDevice @ 0x1C01BA2F8 (OpenMultiplePortDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // r14d
  int v3; // r15d
  int v4; // r15d
  const WCHAR *v5; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  PRKEVENT v13; // rax
  PRKEVENT v14; // rax
  PRKEVENT v15; // rax
  PRKEVENT v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  PRKEVENT v23; // rax
  PRKEVENT v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  PRKEVENT v31; // r9
  PRKEVENT v32; // rcx
  struct _KEVENT *v33; // rcx
  void *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KEVENT *v41; // rcx
  void *v42; // rcx
  LegacyInputDispatcher *v43; // rcx
  __int64 v44; // rcx
  unsigned int v45; // r14d
  unsigned int v46; // ebx
  int v47; // r14d
  unsigned int v48; // r15d
  PRKEVENT v49; // rbx
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  LegacyInputDispatcher *v61; // rcx
  const struct tagPOINTERCURSORDATA *v62; // rbx
  PRKEVENT *v63; // rcx
  struct DEVICEINFO *v64; // rcx
  PRKEVENT v65; // rax
  __int64 v66; // r8
  PRKEVENT v67; // r9
  PRKEVENT v68; // rcx
  struct _KEVENT *v69; // rcx
  signed __int32 v70[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  PRKEVENT *v72; // [rsp+30h] [rbp-D8h]
  PRKEVENT *v73; // [rsp+38h] [rbp-D0h]
  PRKEVENT *v74; // [rsp+40h] [rbp-C8h]
  __int64 (__fastcall *v75)(); // [rsp+48h] [rbp-C0h]
  __int64 v76; // [rsp+50h] [rbp-B8h]
  __int64 v77; // [rsp+58h] [rbp-B0h]
  PRKEVENT *v78; // [rsp+60h] [rbp-A8h]
  char ProcessInformation; // [rsp+68h] [rbp-A0h]
  int ProcessInformation_4; // [rsp+6Ch] [rbp-9Ch] BYREF
  LegacyInputDispatcher *v81; // [rsp+70h] [rbp-98h] BYREF
  int v82; // [rsp+78h] [rbp-90h]
  int v83; // [rsp+7Ch] [rbp-8Ch]
  int v84; // [rsp+80h] [rbp-88h]
  int v85; // [rsp+84h] [rbp-84h]
  int v86; // [rsp+88h] [rbp-80h]
  int v87; // [rsp+8Ch] [rbp-7Ch]
  int v88; // [rsp+90h] [rbp-78h]
  int v89; // [rsp+94h] [rbp-74h]
  int ThreadInformation; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v91; // [rsp+9Ch] [rbp-6Ch]
  char v92[8]; // [rsp+A0h] [rbp-68h] BYREF
  char v93[8]; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING v95; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v96; // [rsp+D0h] [rbp-38h] BYREF
  void *v97[10]; // [rsp+E8h] [rbp-20h] BYREF

  ProcessInformation = 0;
  v81 = 0LL;
  v2 = 0;
  memset(v97, 0, sizeof(v97));
  v3 = *(_DWORD *)a1;
  ThreadInformation = 12;
  v4 = v3 & 2;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadPriority, &ThreadInformation, 4u);
  v5 = L"IO_DT";
  if ( v4 )
    v5 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v5);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_4;
  ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *((_QWORD *)a1 + 2) = ThreadWin32Thread;
  v8 = ThreadWin32Thread;
  v9 = *((_QWORD *)ThreadWin32Thread + 48);
  *((_QWORD *)a1 + 3) = v9;
  ++*(_DWORD *)(v9 + 348);
  *((_QWORD *)ThreadWin32Thread + 52) = gpkdiStatic;
  *((_QWORD *)ThreadWin32Thread + 67) = 0LL;
  if ( a1 == (struct tagTERMINAL *)gTermIO[0] )
  {
    gpDTIOMouseEventWaitObjectArray = Win32AllocPoolNonPaged(480LL, 2001433429LL);
    if ( !gpDTIOMouseEventWaitObjectArray )
      goto LABEL_4;
  }
  if ( (int)LegacyInputDispatcher::Create(&v81) < 0 )
  {
LABEL_4:
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v70, 0);
    return KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
  }
  if ( !v4 )
  {
    v2 = 1;
    v97[0] = aDeviceTemplate[10];
  }
  LODWORD(v10) = 0xFFFF;
  v82 = 0xFFFF;
  if ( v4 )
  {
    v83 = 0xFFFF;
  }
  else
  {
    v11 = v2++;
    v83 = v11;
    v97[v11] = Feedback::gpevtPointerCursorOperation;
  }
  if ( v4 )
  {
    v84 = 0xFFFF;
  }
  else
  {
    v12 = v2++;
    v84 = v12;
    v97[v12] = (void *)gpevtPTPOperation;
  }
  if ( v4 || (gdwMitConfig & 1) != 0 )
  {
    v85 = 0xFFFF;
    v86 = 0xFFFF;
    v87 = 0xFFFF;
    v88 = 0xFFFF;
  }
  else
  {
    v82 = v2;
    v13 = aDeviceTemplate[16];
    v85 = v2 + 1;
    v97[v2] = v13;
    v97[v2 + 1] = aDeviceTemplate[21];
    v14 = aDeviceTemplate[26];
    v86 = v2 + 2;
    v97[v2 + 2] = v14;
    v15 = aDeviceTemplate[34];
    v87 = v2 + 3;
    v97[v2 + 3] = v15;
    v16 = aDeviceTemplate[39];
    v17 = v2 + 4;
    v10 = v2 + 5;
    v2 += 6;
    v88 = v17;
    v97[v17] = v16;
    v97[v10] = aDeviceTemplate[51];
  }
  v89 = v10;
  if ( gSessionId == gServiceSessionId )
  {
    if ( !v4 && (gdwMitConfig & 1) != 0 )
    {
      CBaseInput::InitializeSensor(gpMouseSensor);
      ProcessInformation = 1;
    }
  }
  else if ( !v4 )
  {
    ProcessInformation = 1;
    if ( (gdwMitConfig & 1) != 0 )
    {
      if ( (int)CBaseInput::InitializeSensor(gpMouseSensor) >= 0 )
      {
        if ( gProtocolType )
        {
          EnterCrit(0LL, 1LL);
          CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
          UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
        }
        CBaseInput::Read(gpMouseSensor);
      }
    }
    else
    {
      v22 = (unsigned int)DeviceTypeToRimInputType(0LL);
      v78 = &aDeviceTemplate[12];
      v77 = 0LL;
      LOBYTE(v76) = 0;
      v75 = Win32kRIMDevChangeCallback;
      v23 = aDeviceTemplate[24];
      v24 = aDeviceTemplate[14];
      LODWORD(v73) = 0;
      if ( (int)RIMRegisterForInput(
                  v22,
                  0LL,
                  gpWin32kDriverObject,
                  v24,
                  v23,
                  0LL,
                  v73,
                  0LL,
                  Win32kRIMDevChangeCallback,
                  v76,
                  0LL,
                  &aDeviceTemplate[12]) >= 0 )
      {
        LOBYTE(v25) = 1;
        RawInputManagerObjectResolveHandle(aDeviceTemplate[12], 3LL, v25, &aDeviceTemplate[13]);
        EnterCrit(0LL, 1LL);
        if ( gProtocolType )
        {
          RtlInitUnicodeString(&v95, 0LL);
          LOBYTE(BugCheckParameter4) = 0;
          RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
            aDeviceTemplate[12],
            &v95,
            0LL,
            ghRemoteMouseChannel,
            BugCheckParameter4,
            v92);
        }
        else
        {
          OpenMultiplePortDevice(aDeviceTemplate[12], 0LL);
        }
        UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
        HIDWORD(aDeviceTemplate[55]) = 64;
        v74 = &aDeviceTemplate[56];
        v73 = &aDeviceTemplate[55];
        v30 = HIDWORD(aDeviceTemplate[55]);
        v72 = &aDeviceTemplate[58];
        v31 = aDeviceTemplate[19];
        v32 = aDeviceTemplate[12];
        LOBYTE(BugCheckParameter4) = 0;
        RIMReadInput(
          v32,
          &aDeviceTemplate[61],
          v30,
          v31,
          BugCheckParameter4,
          &aDeviceTemplate[58],
          &aDeviceTemplate[55],
          &aDeviceTemplate[56]);
      }
    }
  }
  v91 = v2;
  EnterCrit(0LL, 1LL);
  v33 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
  *(_DWORD *)a1 |= 4u;
  KeSetEvent(v33, 1, 0);
  v34 = (void *)*((_QWORD *)a1 + 7);
  ObReferenceObjectByPointer(v34, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  if ( gdwInAtomicOperation )
  {
    v35 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v35, gdwInAtomicOperation, v36, v37);
  KeWaitForSingleObject(v34, WrUserRequest, 0, 0, 0LL);
  EnterCrit(0LL, 1LL);
  ObfDereferenceObject(v34);
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    _InterlockedOr(v70, 0);
    if ( *((_QWORD *)a1 + 1) )
      xxxCleanupMotherDesktopWindow(a1);
    v41 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
    if ( v41 )
      KeSetEvent(v41, 1, 0);
    if ( a1 == (struct tagTERMINAL *)gTermIO[0] && gpDTIOMouseEventWaitObjectArray )
    {
      Win32FreePool(gpDTIOMouseEventWaitObjectArray);
      gpDTIOMouseEventWaitObjectArray = 0LL;
    }
    --*(_DWORD *)(v9 + 348);
    v42 = (void *)*((_QWORD *)a1 + 7);
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_DWORD *)a1 = 0;
    if ( v42 )
    {
      ObfDereferenceObject(v42);
      *((_QWORD *)a1 + 7) = 0LL;
    }
    if ( ProcessInformation )
      vCleanupRimClient(0LL);
    v43 = v81;
    if ( v81 )
      LegacyInputDispatcher::`scalar deleting destructor'(v81, v38);
    return UserSessionSwitchLeaveCrit(v43, v38, v39, v40);
  }
  ProcessInformation_4 = 1;
  ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation_4, 4u);
  v44 = v2;
  v45 = v2 + 1;
  v97[v44] = (void *)*((_QWORD *)v8 + 161);
  if ( (gdwMitConfig & 1) == 0 || (v46 = v45 + 6, v4) )
    v46 = v45;
  LegacyInputDispatcher::Initialize(v81, 1, 0, v46, v45, v97);
  if ( v46 != v45 )
    CBaseInput::RegisterDispatcherObject(gpMouseSensor, v81);
  v47 = v82;
  v48 = v91;
LABEL_60:
  v49 = 0LL;
  do
  {
    while ( 1 )
    {
      v50 = xxxDesktopThreadWaiter(v48, v81);
      if ( v50 == v48 )
        break;
      if ( v50 == v83 )
      {
        if ( gdwInAtomicOperation )
        {
          v52 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v52, gdwInAtomicOperation, v53, v54);
        HandlePointerCursorSideOp();
        v62 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64(
                                                     (volatile __int64 *)&Feedback::gppcdLatest,
                                                     0LL);
        if ( v62 )
        {
          RenderCursor(v62);
          _InterlockedCompareExchange64(
            (volatile signed __int64 *)&(&Feedback::gppcdFree)[(unsigned int)((v62
                                                                             - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                                            / 0xCuLL)],
            (signed __int64)v62,
            0LL);
        }
        EnterCrit(0LL, 1LL);
        goto LABEL_60;
      }
      if ( v50 == v84 )
      {
        if ( gdwInAtomicOperation )
        {
          v52 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v52, gdwInAtomicOperation, v53, v54);
        xxxOnPTPMouseOperation();
        EnterCrit(0LL, 1LL);
      }
      else if ( v50 == v47 )
      {
        RIMOnPnpNotification(aDeviceTemplate[12]);
      }
      else
      {
        if ( v50 == v85 )
        {
          v63 = (PRKEVENT *)aDeviceTemplate[61];
          if ( v63 != &aDeviceTemplate[62] )
            v49 = aDeviceTemplate[61];
          UserSessionSwitchLeaveCrit(v63, v51, v53, v54);
          v65 = aDeviceTemplate[0];
          if ( SLODWORD(aDeviceTemplate[56]) >= 0 )
          {
            ProcessMouseInputViaRim(v64, aDeviceTemplate[61], (unsigned int)aDeviceTemplate[57], aDeviceTemplate[58]);
            if ( v49 )
              aDeviceTemplate[61] = (PRKEVENT)&aDeviceTemplate[62];
            v65 = aDeviceTemplate[0];
          }
          HIDWORD(v65[18].Header.WaitListHead.Flink) = 64;
          v74 = &aDeviceTemplate[56];
          v73 = &aDeviceTemplate[55];
          v66 = HIDWORD(aDeviceTemplate[55]);
          v72 = &aDeviceTemplate[58];
          v67 = aDeviceTemplate[19];
          v68 = aDeviceTemplate[12];
          LOBYTE(BugCheckParameter4) = 0;
          RIMReadInput(
            v68,
            &aDeviceTemplate[61],
            v66,
            v67,
            BugCheckParameter4,
            &aDeviceTemplate[58],
            &aDeviceTemplate[55],
            &aDeviceTemplate[56]);
          EnterCrit(0LL, 1LL);
          if ( v49 )
            RIMFreeKernelMem(v49);
          goto LABEL_60;
        }
        if ( v50 == v86 )
        {
          RIMOnTimerNotification(aDeviceTemplate[12], 0LL);
        }
        else
        {
          if ( v50 == v87 )
          {
            RtlInitUnicodeString(&v96, 0LL);
            LOBYTE(BugCheckParameter4) = 0;
            LODWORD(aDeviceTemplate[36]) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                             aDeviceTemplate[12],
                                             &v96,
                                             0LL,
                                             ghRemoteMouseChannel,
                                             BugCheckParameter4,
                                             v93);
            v69 = aDeviceTemplate[35];
            goto LABEL_107;
          }
          if ( v50 == v88 )
          {
            RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[12], 0LL);
            v69 = aDeviceTemplate[42];
            goto LABEL_107;
          }
          if ( v50 == v89 )
          {
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(aDeviceTemplate[12], gpWin32kDriverObject);
            v69 = aDeviceTemplate[54];
LABEL_107:
            KeSetEvent(v69, 1, 0);
          }
        }
      }
    }
  }
  while ( (unsigned int)xxxHandleDesktopMessages(v8, a1) );
  if ( a1 == (struct tagTERMINAL *)gTermIO[0] )
  {
    gdwHydraHint |= 0x100000u;
    if ( gpDTIOMouseEventWaitObjectArray )
    {
      Win32FreePool(gpDTIOMouseEventWaitObjectArray);
      gpDTIOMouseEventWaitObjectArray = 0LL;
    }
  }
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_DWORD *)a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  v57 = *((_QWORD *)v8 + 51);
  if ( v57 )
  {
    HMAssignmentUnlock(v57 + 184);
    v58 = *((_QWORD *)v8 + 51);
    v59 = (_QWORD *)(*(_QWORD *)(v58 + 8) + 16LL);
    if ( *v59 )
    {
      *(_QWORD *)(**(_QWORD **)(v58 + 8) + 8LL) = 0LL;
      HMAssignmentUnlock(v59);
    }
  }
  v60 = gpkdiStatic;
  *((_QWORD *)v8 + 52) = gpkdiStatic;
  --*(_DWORD *)(v9 + 348);
  if ( *((_QWORD *)v8 + 48) != v9 )
    zzzDestroyQueue(v9);
  if ( ProcessInformation )
    vCleanupRimClientWorker(0LL);
  v61 = v81;
  if ( v81 )
    LegacyInputDispatcher::`scalar deleting destructor'(v81, v60);
  v81 = 0LL;
  UserSessionSwitchLeaveCrit(v61, v60, v55, v56);
  ProcessInformation_4 = 0;
  return ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation_4, 4u);
}
