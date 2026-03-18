/*
 * XREFs of xxxDesktopThread @ 0x1C0048580
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopThreadWaiter @ 0x1C0048A94 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0048D04 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00492E4 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011B920 (xxxCleanupMotherDesktopWindow.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C012421C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxOnPTPMouseOperation @ 0x1C01B4A7C (xxxOnPTPMouseOperation.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01BC1B8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     OpenMultiplePortDevice @ 0x1C01BE8E8 (OpenMultiplePortDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // r14d
  int v3; // r15d
  int v4; // r15d
  const WCHAR *v5; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v7; // r13
  __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  struct _KEVENT *v12; // rcx
  void *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  unsigned int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // r14d
  int v22; // r15d
  const struct tagPOINTERCURSORDATA *v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  LegacyInputDispatcher *v30; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  void *v34; // rax
  void *v35; // rax
  void *v36; // rax
  void *v37; // rax
  __int64 v38; // r9
  unsigned int v39; // eax
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  struct _KEVENT *v46; // rcx
  void *v47; // rcx
  LegacyInputDispatcher *v48; // rcx
  _QWORD *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  struct _KEVENT *v53; // rcx
  signed __int32 v54[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  _QWORD *v56; // [rsp+30h] [rbp-D8h]
  _QWORD *v57; // [rsp+38h] [rbp-D0h]
  _QWORD *v58; // [rsp+40h] [rbp-C8h]
  __int64 v59; // [rsp+50h] [rbp-B8h]
  __int64 v60; // [rsp+68h] [rbp-A0h]
  LegacyInputDispatcher *v61; // [rsp+70h] [rbp-98h] BYREF
  int ProcessInformation; // [rsp+78h] [rbp-90h] BYREF
  int v63; // [rsp+7Ch] [rbp-8Ch]
  int v64; // [rsp+80h] [rbp-88h]
  unsigned int v65; // [rsp+84h] [rbp-84h]
  int v66; // [rsp+88h] [rbp-80h]
  int v67; // [rsp+8Ch] [rbp-7Ch]
  int v68; // [rsp+90h] [rbp-78h]
  int v69; // [rsp+94h] [rbp-74h]
  int v70; // [rsp+98h] [rbp-70h]
  int v71; // [rsp+9Ch] [rbp-6Ch]
  int ThreadInformation; // [rsp+A0h] [rbp-68h] BYREF
  char v73[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v74[8]; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING v76; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING v77; // [rsp+D8h] [rbp-30h] BYREF
  void *v78[10]; // [rsp+E8h] [rbp-20h] BYREF

  LOBYTE(v60) = 0;
  v61 = 0LL;
  v2 = 0;
  memset(v78, 0, sizeof(v78));
  v3 = *(_DWORD *)a1;
  ThreadInformation = 12;
  v4 = v3 & 2;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadPriority, &ThreadInformation, 4u);
  v5 = L"IO_DT";
  if ( v4 )
    v5 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v5);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_57;
  ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread());
  *((_QWORD *)a1 + 2) = ThreadWin32Thread;
  v7 = ThreadWin32Thread;
  v8 = *((_QWORD *)ThreadWin32Thread + 51);
  *((_QWORD *)a1 + 3) = v8;
  ++*(_DWORD *)(v8 + 388);
  *((_QWORD *)ThreadWin32Thread + 55) = gpkdiStatic;
  *((_QWORD *)ThreadWin32Thread + 74) = 0LL;
  if ( (int)LegacyInputDispatcher::Create(&v61) < 0 )
  {
LABEL_57:
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v54, 0);
    return KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
  }
  if ( !v4 )
  {
    v2 = 1;
    v78[0] = (void *)aDeviceTemplate[10];
  }
  LODWORD(v9) = 0xFFFF;
  v63 = 0xFFFF;
  if ( v4 )
  {
    v66 = 0xFFFF;
  }
  else
  {
    v10 = v2++;
    v66 = v10;
    v78[v10] = Feedback::gpevtPointerCursorOperation;
  }
  if ( v4 )
  {
    v64 = 0xFFFF;
  }
  else
  {
    v11 = v2++;
    v64 = v11;
    v78[v11] = (void *)gpevtPTPOperation;
  }
  if ( v4 || (gdwMitConfig & 1) != 0 )
  {
    v67 = 0xFFFF;
    v68 = 0xFFFF;
    v69 = 0xFFFF;
    v70 = 0xFFFF;
  }
  else
  {
    v63 = v2;
    v34 = (void *)aDeviceTemplate[16];
    v67 = v2 + 1;
    v78[v2] = v34;
    v78[v2 + 1] = (void *)aDeviceTemplate[21];
    v35 = (void *)aDeviceTemplate[26];
    v68 = v2 + 2;
    v78[v2 + 2] = v35;
    v36 = (void *)aDeviceTemplate[34];
    v69 = v2 + 3;
    v78[v2 + 3] = v36;
    v37 = (void *)aDeviceTemplate[39];
    v38 = v2 + 4;
    v9 = v2 + 5;
    v2 += 6;
    v70 = v38;
    v78[v38] = v37;
    v78[v9] = (void *)aDeviceTemplate[51];
  }
  v71 = v9;
  if ( gSessionId == gServiceSessionId )
  {
    if ( !v4 && (gdwMitConfig & 1) != 0 )
    {
      CBaseInput::InitializeSensor(gpMouseSensor);
      LOBYTE(v60) = 1;
    }
  }
  else if ( !v4 )
  {
    LOBYTE(v60) = 1;
    if ( (gdwMitConfig & 1) != 0 )
    {
      if ( (int)CBaseInput::InitializeSensor(gpMouseSensor) >= 0 )
      {
        if ( gProtocolType )
        {
          EnterCrit(0LL, 1LL);
          CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
          UserSessionSwitchLeaveCrit(v33, v32);
        }
        CBaseInput::Read(gpMouseSensor);
      }
    }
    else
    {
      v39 = DeviceTypeToRimInputType(0LL);
      LOBYTE(v59) = 0;
      if ( (int)RIMRegisterForInput(
                  v39,
                  0LL,
                  gpWin32kDriverObject,
                  aDeviceTemplate[14],
                  aDeviceTemplate[24],
                  0LL,
                  0,
                  0LL,
                  Win32kRIMDevChangeCallback,
                  v59,
                  0LL,
                  &aDeviceTemplate[12]) >= 0 )
      {
        LOBYTE(v40) = 1;
        RawInputManagerObjectResolveHandle(aDeviceTemplate[12], 3LL, v40, &aDeviceTemplate[13]);
        EnterCrit(0LL, 1LL);
        if ( gProtocolType )
        {
          RtlInitUnicodeString(&v76, 0LL);
          LOBYTE(BugCheckParameter4) = 0;
          RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
            aDeviceTemplate[12],
            &v76,
            0LL,
            ghRemoteMouseChannel,
            BugCheckParameter4,
            v73);
        }
        else
        {
          OpenMultiplePortDevice(aDeviceTemplate[12], 0LL);
        }
        UserSessionSwitchLeaveCrit(v42, v41);
        HIDWORD(aDeviceTemplate[55]) = 64;
        v58 = &aDeviceTemplate[56];
        v57 = &aDeviceTemplate[55];
        v43 = HIDWORD(aDeviceTemplate[55]);
        v56 = &aDeviceTemplate[58];
        v44 = aDeviceTemplate[19];
        v45 = aDeviceTemplate[12];
        LOBYTE(BugCheckParameter4) = 0;
        RIMReadInput(
          v45,
          &aDeviceTemplate[61],
          v43,
          v44,
          BugCheckParameter4,
          &aDeviceTemplate[58],
          &aDeviceTemplate[55],
          &aDeviceTemplate[56]);
      }
    }
  }
  v65 = v2;
  EnterCrit(0LL, 1LL);
  v12 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
  *(_DWORD *)a1 |= 4u;
  KeSetEvent(v12, 1, 0);
  v13 = (void *)*((_QWORD *)a1 + 7);
  ObReferenceObjectByPointer(v13, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  if ( gdwInAtomicOperation )
  {
    v14 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v14, gdwInAtomicOperation);
  KeWaitForSingleObject(v13, WrUserRequest, 0, 0, 0LL);
  EnterCrit(0LL, 1LL);
  ObfDereferenceObject(v13);
  if ( (*(_DWORD *)a1 & 8) == 0 )
  {
    ProcessInformation = 1;
    ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
    v16 = v2;
    v17 = v2 + 1;
    v78[v16] = (void *)*((_QWORD *)v7 + 172);
    if ( (gdwMitConfig & 1) == 0 || (v18 = v17 + 7, v4) )
      v18 = v17;
    LegacyInputDispatcher::Initialize(v61, 1, 0, v18, v17, v78);
    if ( v18 != v17 )
      CBaseInput::RegisterDispatcherObject(gpMouseSensor, v61);
    v19 = 0LL;
    v20 = v65;
    *((_DWORD *)v61 + 15) = v65;
    if ( v4 )
      qword_1C0327A68 = (__int64)v61;
    else
      qword_1C0327A70 = (__int64)v61;
    v21 = v63;
    v22 = v64;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                LOBYTE(v20) = 1;
                v24 = xxxDesktopThreadWaiter(v20, 0LL);
                if ( v24 != v65 )
                  break;
                if ( !(unsigned int)xxxHandleDesktopMessages(v7, a1) )
                {
                  if ( a1 == (struct tagTERMINAL *)gTermIO[0] )
                    gdwHydraHint |= 0x100000u;
                  *((_QWORD *)a1 + 2) = 0LL;
                  *((_QWORD *)a1 + 3) = 0LL;
                  *((_DWORD *)a1 + 8) = 0;
                  *(_DWORD *)a1 = 0;
                  v26 = *((_QWORD *)v7 + 54);
                  if ( v26 )
                  {
                    HMAssignmentUnlock(v26 + 184);
                    v27 = *((_QWORD *)v7 + 54);
                    v28 = (_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL);
                    if ( *v28 )
                    {
                      *(_QWORD *)(**(_QWORD **)(v27 + 8) + 8LL) = 0LL;
                      HMAssignmentUnlock(v28);
                    }
                  }
                  v29 = gpkdiStatic;
                  *((_QWORD *)v7 + 55) = gpkdiStatic;
                  --*(_DWORD *)(v8 + 388);
                  if ( *((_QWORD *)v7 + 51) != v8 )
                    zzzDestroyQueue(v8, v7);
                  if ( (_BYTE)v60 )
                    CleanupSensorExplicitly(0LL);
                  v30 = v61;
                  if ( v61 )
                    LegacyInputDispatcher::`scalar deleting destructor'(v61, v29);
                  v61 = 0LL;
                  UserSessionSwitchLeaveCrit(v30, v29);
                  ProcessInformation = 0;
                  return ZwSetInformationProcess(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           ProcessBreakOnTermination,
                           &ProcessInformation,
                           4u);
                }
              }
              if ( v24 == v66 )
              {
                if ( gdwInAtomicOperation )
                {
                  v20 = gdwExtraInstrumentations;
                  if ( (gdwExtraInstrumentations & 1) != 0 )
                    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                }
                UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation);
                HandlePointerCursorSideOp();
                v23 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64(
                                                             (volatile __int64 *)&Feedback::gppcdLatest,
                                                             0LL);
                if ( v23 )
                {
                  RenderCursor(v23);
                  _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&(&Feedback::gppcdFree)[(unsigned int)((v23
                                                                                     - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                                                    / 0xCuLL)],
                    (signed __int64)v23,
                    0LL);
                }
                EnterCrit(0LL, 1LL);
                goto LABEL_35;
              }
              if ( v24 != v22 )
                break;
              if ( gdwInAtomicOperation )
              {
                v20 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation);
              xxxOnPTPMouseOperation();
              EnterCrit(0LL, 1LL);
            }
            if ( v24 != v21 )
              break;
            RIMOnPnpNotification(aDeviceTemplate[12]);
          }
          if ( v24 != v67 )
            break;
          v49 = (_QWORD *)aDeviceTemplate[61];
          if ( v49 != &aDeviceTemplate[62] )
            v19 = aDeviceTemplate[61];
          UserSessionSwitchLeaveCrit(v49, v25);
          if ( SLODWORD(aDeviceTemplate[56]) >= 0 && v19 )
            aDeviceTemplate[61] = &aDeviceTemplate[62];
          HIDWORD(aDeviceTemplate[55]) = 64;
          v58 = &aDeviceTemplate[56];
          v57 = &aDeviceTemplate[55];
          v50 = HIDWORD(aDeviceTemplate[55]);
          v56 = &aDeviceTemplate[58];
          v51 = aDeviceTemplate[19];
          v52 = aDeviceTemplate[12];
          LOBYTE(BugCheckParameter4) = 0;
          RIMReadInput(
            v52,
            &aDeviceTemplate[61],
            v50,
            v51,
            BugCheckParameter4,
            &aDeviceTemplate[58],
            &aDeviceTemplate[55],
            &aDeviceTemplate[56]);
          EnterCrit(0LL, 1LL);
          if ( v19 )
            RIMFreeKernelMem(v19);
LABEL_35:
          v19 = 0LL;
        }
        if ( v24 != v68 )
          break;
        RIMOnTimerNotification(aDeviceTemplate[12], 0LL);
      }
      if ( v24 == v69 )
      {
        RtlInitUnicodeString(&v77, 0LL);
        LOBYTE(BugCheckParameter4) = 0;
        LODWORD(aDeviceTemplate[36]) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                         aDeviceTemplate[12],
                                         &v77,
                                         0LL,
                                         ghRemoteMouseChannel,
                                         BugCheckParameter4,
                                         v74);
        v53 = (struct _KEVENT *)aDeviceTemplate[35];
        goto LABEL_105;
      }
      if ( v24 == v70 )
        break;
      if ( v24 == v71 )
      {
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        RIMDirectStartDeviceClassNotifications(aDeviceTemplate[12], gpWin32kDriverObject);
        v53 = (struct _KEVENT *)aDeviceTemplate[54];
LABEL_105:
        KeSetEvent(v53, 1, 0);
      }
    }
    RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[12], 0LL);
    v53 = (struct _KEVENT *)aDeviceTemplate[42];
    goto LABEL_105;
  }
  _InterlockedOr(v54, 0);
  if ( *((_QWORD *)a1 + 1) )
    xxxCleanupMotherDesktopWindow(a1);
  v46 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
  if ( v46 )
    KeSetEvent(v46, 1, 0);
  --*(_DWORD *)(v8 + 388);
  v47 = (void *)*((_QWORD *)a1 + 7);
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *(_DWORD *)a1 = 0;
  if ( v47 )
  {
    ObfDereferenceObject(v47);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( (_BYTE)v60 )
    CleanupSensorExplicitly(0LL);
  v48 = v61;
  if ( v61 )
    LegacyInputDispatcher::`scalar deleting destructor'(v61, v15);
  return UserSessionSwitchLeaveCrit(v48, v15);
}
