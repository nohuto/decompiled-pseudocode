/*
 * XREFs of CiSchedulerThreadFunction @ 0x1C0002030
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C00011B0 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001200 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001280 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001780 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001CC0 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002D10 (CiSchedulerProcessDeadlines.c)
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     CiLogSchedulerEvent @ 0x1C0003F54 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0004030 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C00040AC (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C000467C (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00048B4 (WPP_SF_d.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  unsigned int v1; // r15d
  PVOID *p_Reserved; // rdi
  char v4; // r14
  int v5; // r13d
  unsigned __int64 v6; // r8
  struct _DEVICE_OBJECT *SystemArgument1; // rcx
  struct _DEVICE_OBJECT *NextDevice; // rsi
  __int64 p_NextDevice; // r12
  __int64 v10; // rax
  unsigned __int8 AttachedDevice; // al
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 **v16; // rdx
  unsigned int DpcData_high; // ebx
  unsigned int v18; // edi
  unsigned __int64 v19; // rdx
  unsigned __int32 j; // r13d
  int v21; // edi
  int v22; // r12d
  unsigned __int64 v23; // r15
  _QWORD *m; // rbx
  _QWORD **v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  bool v28; // zf
  unsigned int v29; // esi
  int v30; // r14d
  unsigned int v31; // ebx
  __int64 v32; // rdi
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // edi
  unsigned __int64 v38; // r8
  struct _DEVICE_OBJECT *v39; // rdx
  struct _DEVICE_OBJECT *v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r14
  int v46; // edi
  int v47; // r12d
  _QWORD *ii; // rbx
  _QWORD **v49; // rax
  _QWORD *v50; // rsi
  _QWORD *v51; // rcx
  __int64 SecurityDescriptor_high; // rbx
  unsigned __int64 v53; // rdx
  int v54; // edi
  int v55; // r12d
  unsigned __int64 v56; // r15
  _QWORD *kk; // rbx
  _QWORD **v58; // rax
  _QWORD *v59; // rsi
  _QWORD *v60; // rcx
  _QWORD *n; // rax
  _QWORD *k; // rax
  _QWORD *jj; // rax
  int v64; // eax
  __int64 v65; // r15
  int v66; // eax
  __int32 v67; // r13d
  __int64 v68; // r14
  int v69; // eax
  int v70; // eax
  ULONGLONG v71; // rax
  __int64 v72; // r14
  int v73; // eax
  int v74; // eax
  int v75; // [rsp+30h] [rbp-99h] BYREF
  int v76; // [rsp+38h] [rbp-91h] BYREF
  int v77; // [rsp+40h] [rbp-89h] BYREF
  PVOID *v78; // [rsp+48h] [rbp-81h]
  struct _DEVICE_OBJECT *i; // [rsp+50h] [rbp-79h]
  char v80[8]; // [rsp+58h] [rbp-71h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+80h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+90h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+A0h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+B0h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+C0h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+D0h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+E0h] [rbp+17h] BYREF

  v1 = 0;
  p_Reserved = 0LL;
  v78 = 0LL;
  if ( byte_1C0007298 )
    CiLogSchedulerWakeup(1LL);
  v4 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = KeGetCurrentThread();
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids);
  while ( 1 )
  {
    v5 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    CiThreadsMovedUp = v4;
    for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1;
          i = SystemArgument1 )
    {
      p_Reserved = &SystemArgument1[-1].Reserved;
      NextDevice = SystemArgument1->NextDevice;
      p_NextDevice = (__int64)&SystemArgument1->NextDevice;
      v78 = &SystemArgument1[-1].Reserved;
      if ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice )
      {
        do
        {
          if ( (BYTE4(NextDevice->DeviceExtension) & 1) == 0 )
          {
            if ( v4 )
            {
              v10 = *((_QWORD *)&NextDevice[-1].Reserved + 1);
              if ( *(_QWORD *)(v10 + 120) || !*(_BYTE *)(v10 + 132) && *(_QWORD *)(v10 + 80) )
              {
                AttachedDevice = *((_BYTE *)NextDevice[-1].Reserved + 40);
                if ( AttachedDevice > LOBYTE(NextDevice->AttachedDevice) )
                  AttachedDevice = (unsigned __int8)NextDevice->AttachedDevice;
              }
              else
              {
                AttachedDevice = (unsigned __int8)NextDevice->AttachedDevice;
              }
              v12 = AttachedDevice;
            }
            else
            {
              v12 = BYTE2(NextDevice->AttachedDevice);
            }
            if ( BYTE3(NextDevice->AttachedDevice) != v12 )
            {
              BYTE3(NextDevice->AttachedDevice) = v12;
              if ( byte_1C0007298 )
                CiLogSchedulerEvent(&NextDevice[-1].Dpc.DpcData, v12);
              KeSetActualBasePriorityThread(NextDevice->NextDevice, v12);
              v4 = CiThreadsMovedUp;
            }
            ++v5;
            ++v1;
          }
          NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        }
        while ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice );
        SystemArgument1 = i;
        p_Reserved = v78;
      }
      SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
    }
    if ( v4 && v1 > 1 )
    {
      v13 = (__int64 *)p_Reserved[4];
      v14 = (__int64 *)(p_Reserved + 4);
      v15 = *v13;
      if ( (PVOID *)v13[1] != p_Reserved + 4 || *(__int64 **)(v15 + 8) != v13 )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      v16 = (__int64 **)p_Reserved[5];
      if ( *v16 != v14 )
        __fastfail(3u);
      *v13 = (__int64)v14;
      v13[1] = (__int64)v16;
      *v16 = v13;
      p_Reserved[5] = v13;
    }
    if ( v5 )
    {
      if ( v4 )
      {
        if ( CiSchedulerInLazyMode )
        {
          DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
          v18 = 2;
        }
        else
        {
          DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
          v18 = 1;
        }
        if ( qword_1C0007198 )
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
        LOBYTE(v6) = 0;
        v19 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
        qword_1C0007198 = DpcData_high + MEMORY[0xFFFFF78000000008];
        byte_1C00071A4 = 0;
        if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        {
          while ( 1 )
          {
            if ( *(_QWORD *)(v19 + 24) <= (unsigned __int64)DpcData_high + MEMORY[0xFFFFF78000000008] )
            {
              v6 = *(_QWORD *)(v19 + 8);
              if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
              {
                if ( !v6 )
                {
LABEL_188:
                  LOBYTE(v6) = 1;
                  break;
                }
                v6 ^= v19;
              }
              if ( !v6 )
                goto LABEL_188;
            }
            else
            {
              v6 = *(_QWORD *)v19;
              if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
              {
                if ( !v6 )
                {
LABEL_176:
                  LOBYTE(v6) = 0;
                  break;
                }
                v6 ^= v19;
              }
              if ( !v6 )
                goto LABEL_176;
            }
            v19 = v6;
          }
        }
        RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v19, v6, &WPP_MAIN_CB.Reserved);
        CiSchedulerUpdateTimer();
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( byte_1C0007298 )
          CiLogSchedulerSleep(v18);
        for ( j = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; j = 0 )
        {
          if ( !j )
            KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
          if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
          {
            v21 = 0;
            v22 = 0;
            v23 = MEMORY[0xFFFFF78000000008] + 2000LL;
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
            CiSchedulerTimerNode = 2LL;
            m = (_QWORD *)((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL);
            if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            {
              do
              {
                v25 = (_QWORD **)m[1];
                v26 = m;
                v27 = m;
                if ( v25 )
                {
                  m = (_QWORD *)m[1];
                  for ( k = *v25; k; k = (_QWORD *)*k )
                    m = k;
                }
                else
                {
                  for ( m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL); m; m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*m == v27 )
                      break;
                    v27 = m;
                  }
                }
                if ( v26[3] <= v23 )
                {
                  RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v26);
                  v28 = *((_DWORD *)v26 + 8) == 1;
                  v26[3] = 0LL;
                  if ( v28 )
                  {
                    v21 |= 0x20u;
                    if ( *((_BYTE *)v26 + 36) )
                    {
                      v68 = (__int64)(v26 - 12);
                    }
                    else
                    {
                      v69 = *((_DWORD *)v26 + 32);
                      v68 = (__int64)(v26 - 7);
                      if ( (v69 & 1) != 0 )
                      {
                        v22 = 1;
                        ++CiTotalTasksDeadlineExpired;
                        *(_DWORD *)(v68 + 184) = v69 | 4;
                      }
                    }
                    CiSchedulerUpdateTaskIndexPriorities(v68);
                    v70 = *(_DWORD *)(v68 + 184);
                    if ( (v70 & 2) != 0 && (*((_BYTE *)v26 + 36) || !*(_BYTE *)(v68 + 132)) )
                    {
                      *(_DWORD *)(v68 + 184) = v70 & 0xFFFFFFFD;
                      CiSchedulerSetTaskIndexThreadTag(v68, 0);
                      --CiTotalTasksBuffering;
                    }
                    if ( byte_1C0007298 )
                    {
                      if ( *((_BYTE *)v26 + 36) )
                      {
                        v82.Ptr = v68 + 144;
                        *(_QWORD *)&v82.Size = 4LL;
                        EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v82);
                      }
                      else
                      {
                        UserData.Ptr = v68 + 144;
                        *(_QWORD *)&UserData.Size = 4LL;
                        EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &UserData);
                      }
                    }
                  }
                  else
                  {
                    v21 |= 0x10u;
                  }
                }
              }
              while ( m );
            }
            if ( (v21 & 0x20) != 0 )
            {
              if ( v22 )
              {
                if ( CiCurrentMediaBufferingState )
                {
                  CiCurrentMediaBufferingState = 0;
                  PoNotifyMediaBuffering(0LL);
                }
              }
              else
              {
                CiSystemUpdateMediaBufferingState();
              }
            }
            if ( (v21 & 0x10) == 0 )
              CiSchedulerUpdateTimer();
            v1 = 0;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            if ( v22 )
            {
              if ( byte_1C0007298 )
              {
                v83.Ptr = (ULONGLONG)&v75;
                v75 = 1;
                *(_QWORD *)&v83.Size = 4LL;
                EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v83);
              }
              PoLatencySensitivityHint(4LL);
            }
            j |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v21;
            if ( (j & 0xFFFFFFDF) != 0 )
              break;
          }
          if ( byte_1C0007298 )
            CiLogSchedulerWakeup(j);
        }
        if ( (j & 0xC) == 0 )
        {
          while ( 1 )
          {
            if ( CiSchedulerDisallowLazyMode )
            {
              v35 = CiProcessorIdleHistoryBits;
              v34 = CiSchedulerIdleCycleBitMask;
            }
            else
            {
              v29 = byte_1C00071F8;
              v30 = 0;
              v31 = 0;
              if ( !byte_1C00071F8 )
                goto LABEL_60;
              v32 = 0LL;
              do
              {
                if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v31, v32 + CiLastIdleTime) )
                  ++v30;
                ++v31;
                v32 += 8LL;
              }
              while ( v31 < v29 );
              if ( v30 )
                v33 = 0;
              else
LABEL_60:
                v33 = (2 * CiProcessorIdleHistoryBits) | 1;
              v34 = CiSchedulerIdleCycleBitMask;
              v35 = CiSchedulerIdleCycleBitMask & v33;
              CiProcessorIdleHistoryBits = v35;
            }
            if ( !v35 )
              break;
            if ( v35 == v34 )
            {
              if ( !CiSchedulerInLazyMode )
              {
                if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                  WPP_SF_d(
                    WPP_GLOBAL_Control->AttachedDevice,
                    13LL,
                    &WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids,
                    HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
                CiSchedulerInLazyMode = 1;
              }
              v36 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
              v37 = 4;
            }
            else
            {
              v36 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
              v37 = 3;
            }
            if ( byte_1C0007298 )
              CiLogSchedulerWakeup(j);
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
            if ( CiSchedulerInLazyMode )
            {
              v39 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
              if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
              {
LABEL_207:
                j |= 0x80u;
                WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
                goto LABEL_103;
              }
              while ( 1 )
              {
                v40 = v39->NextDevice;
                v38 = (unsigned __int64)&v39->NextDevice;
                if ( v40 != (struct _DEVICE_OBJECT *)&v39->NextDevice )
                  break;
LABEL_242:
                v39 = *(struct _DEVICE_OBJECT **)&v39->Type;
                if ( v39 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
                  goto LABEL_207;
              }
              while ( (BYTE4(v40->DeviceExtension) & 1) != 0 )
              {
                v40 = *(struct _DEVICE_OBJECT **)&v40->Type;
                if ( v40 == (struct _DEVICE_OBJECT *)v38 )
                  goto LABEL_242;
              }
            }
            if ( qword_1C0007198 )
              RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
            LOBYTE(v38) = 0;
            v41 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
            byte_1C00071A4 = 0;
            qword_1C0007198 = v36 + MEMORY[0xFFFFF78000000008];
            if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
            {
              while ( 1 )
              {
                if ( *(_QWORD *)(v41 + 24) <= (unsigned __int64)v36 + MEMORY[0xFFFFF78000000008] )
                {
                  v38 = *(_QWORD *)(v41 + 8);
                  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
                  {
                    if ( !v38 )
                    {
LABEL_149:
                      LOBYTE(v38) = 1;
                      break;
                    }
                    v38 ^= v41;
                  }
                  if ( !v38 )
                    goto LABEL_149;
                }
                else
                {
                  v38 = *(_QWORD *)v41;
                  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
                  {
                    if ( !v38 )
                    {
LABEL_145:
                      LOBYTE(v38) = 0;
                      break;
                    }
                    v38 ^= v41;
                  }
                  if ( !v38 )
                    goto LABEL_145;
                }
                v41 = v38;
              }
            }
            RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v41, v38, &WPP_MAIN_CB.Reserved);
            v42 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL;
            if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            {
              if ( v42 != CiSchedulerTimerNode )
              {
                v43 = *(_QWORD *)(v42 + 24);
                if ( MEMORY[0xFFFFF78000000008] > v43 )
                {
                  v44 = 0LL;
                }
                else
                {
                  v44 = MEMORY[0xFFFFF78000000008] - v43;
                  if ( (__int64)(MEMORY[0xFFFFF78000000008] - v43) < -2000 )
                    v44 += 2000LL;
                }
                CiSchedulerTimerNode = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL;
                ExSetTimer(
                  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                  v44,
                  0LL,
                  &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
              }
            }
            else if ( CiSchedulerTimerNode != 1 )
            {
              CiSchedulerTimerNode = 1LL;
              ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
            }
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            if ( byte_1C0007298 )
              CiLogSchedulerSleep(v37);
            for ( j = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; j = 0 )
            {
              if ( !j )
                KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
              if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
              {
                v45 = MEMORY[0xFFFFF78000000008] + 2000LL;
                v46 = 0;
                v47 = 0;
                KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
                CiSchedulerTimerNode = 2LL;
                ii = (_QWORD *)((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL);
                if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                {
                  do
                  {
                    v49 = (_QWORD **)ii[1];
                    v50 = ii;
                    v51 = ii;
                    if ( v49 )
                    {
                      ii = (_QWORD *)ii[1];
                      for ( n = *v49; n; n = (_QWORD *)*n )
                        ii = n;
                    }
                    else
                    {
                      for ( ii = (_QWORD *)(ii[2] & 0xFFFFFFFFFFFFFFFCuLL);
                            ii;
                            ii = (_QWORD *)(ii[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        if ( (_QWORD *)*ii == v51 )
                          break;
                        v51 = ii;
                      }
                    }
                    if ( v50[3] <= v45 )
                    {
                      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v50);
                      v28 = *((_DWORD *)v50 + 8) == 1;
                      v50[3] = 0LL;
                      if ( v28 )
                      {
                        v46 |= 0x20u;
                        if ( *((_BYTE *)v50 + 36) )
                        {
                          v65 = (__int64)(v50 - 12);
                        }
                        else
                        {
                          v64 = *((_DWORD *)v50 + 32);
                          v65 = (__int64)(v50 - 7);
                          if ( (v64 & 1) != 0 )
                          {
                            v47 = 1;
                            ++CiTotalTasksDeadlineExpired;
                            *(_DWORD *)(v65 + 184) = v64 | 4;
                          }
                        }
                        CiSchedulerUpdateTaskIndexPriorities(v65);
                        v66 = *(_DWORD *)(v65 + 184);
                        if ( (v66 & 2) != 0 && (*((_BYTE *)v50 + 36) || !*(_BYTE *)(v65 + 132)) )
                        {
                          *(_DWORD *)(v65 + 184) = v66 & 0xFFFFFFFD;
                          CiSchedulerSetTaskIndexThreadTag(v65, 0);
                          --CiTotalTasksBuffering;
                        }
                        if ( byte_1C0007298 )
                        {
                          v71 = v65 + 144;
                          v1 = 0;
                          if ( *((_BYTE *)v50 + 36) )
                          {
                            v85.Ptr = v71;
                            *(_QWORD *)&v85.Size = 4LL;
                            EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v85);
                          }
                          else
                          {
                            v84.Ptr = v71;
                            *(_QWORD *)&v84.Size = 4LL;
                            EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &v84);
                          }
                        }
                        else
                        {
                          v1 = 0;
                        }
                      }
                      else
                      {
                        v46 |= 0x10u;
                      }
                    }
                  }
                  while ( ii );
                }
                if ( (v46 & 0x20) != 0 )
                {
                  if ( v47 )
                  {
                    if ( CiCurrentMediaBufferingState )
                    {
                      CiCurrentMediaBufferingState = 0;
                      PoNotifyMediaBuffering(0LL);
                    }
                  }
                  else
                  {
                    CiSystemUpdateMediaBufferingState();
                  }
                }
                if ( (v46 & 0x10) == 0 )
                  CiSchedulerUpdateTimer();
                WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
                if ( v47 )
                {
                  if ( byte_1C0007298 )
                  {
                    v86.Ptr = (ULONGLONG)&v76;
                    v76 = 1;
                    *(_QWORD *)&v86.Size = 4LL;
                    EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v86);
                  }
                  PoLatencySensitivityHint(4LL);
                }
                j |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v46;
                if ( (j & 0xFFFFFFDF) != 0 )
                  break;
              }
              if ( byte_1C0007298 )
                CiLogSchedulerWakeup(j);
            }
            if ( (j & 0xC) != 0 )
              goto LABEL_103;
          }
          if ( CiSchedulerInLazyMode )
          {
            CiSchedulerInLazyMode = 0;
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids);
          }
        }
LABEL_103:
        v4 = 0;
      }
      else
      {
        SecurityDescriptor_high = HIDWORD(WPP_MAIN_CB.SecurityDescriptor);
        if ( qword_1C0007198 )
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
        LOBYTE(v6) = 0;
        v53 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
        qword_1C0007198 = SecurityDescriptor_high + MEMORY[0xFFFFF78000000008];
        byte_1C00071A4 = 0;
        if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        {
          while ( 1 )
          {
            if ( *(_QWORD *)(v53 + 24) <= (unsigned __int64)(SecurityDescriptor_high + MEMORY[0xFFFFF78000000008]) )
            {
              v6 = *(_QWORD *)(v53 + 8);
              if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
              {
                if ( !v6 )
                {
LABEL_210:
                  LOBYTE(v6) = 1;
                  break;
                }
                v6 ^= v53;
              }
              if ( !v6 )
                goto LABEL_210;
            }
            else
            {
              v6 = *(_QWORD *)v53;
              if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
              {
                if ( !v6 )
                {
LABEL_175:
                  LOBYTE(v6) = 0;
                  break;
                }
                v6 ^= v53;
              }
              if ( !v6 )
                goto LABEL_175;
            }
            v53 = v6;
          }
        }
        RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v53, v6, &WPP_MAIN_CB.Reserved);
        CiSchedulerUpdateTimer();
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( byte_1C0007298 )
          CiLogSchedulerSleep(0LL);
        for ( j = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; j = 0 )
        {
          if ( !j )
            KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
          if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
          {
            v54 = 0;
            v55 = 0;
            v56 = MEMORY[0xFFFFF78000000008] + 2000LL;
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
            CiSchedulerTimerNode = 2LL;
            kk = (_QWORD *)((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL);
            if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            {
              do
              {
                v58 = (_QWORD **)kk[1];
                v59 = kk;
                v60 = kk;
                if ( v58 )
                {
                  kk = (_QWORD *)kk[1];
                  for ( jj = *v58; jj; jj = (_QWORD *)*jj )
                    kk = jj;
                }
                else
                {
                  for ( kk = (_QWORD *)(kk[2] & 0xFFFFFFFFFFFFFFFCuLL); kk; kk = (_QWORD *)(kk[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*kk == v60 )
                      break;
                    v60 = kk;
                  }
                }
                if ( v59[3] <= v56 )
                {
                  RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v59);
                  v28 = *((_DWORD *)v59 + 8) == 1;
                  v59[3] = 0LL;
                  if ( v28 )
                  {
                    v54 |= 0x20u;
                    if ( *((_BYTE *)v59 + 36) )
                    {
                      v72 = (__int64)(v59 - 12);
                    }
                    else
                    {
                      v73 = *((_DWORD *)v59 + 32);
                      v72 = (__int64)(v59 - 7);
                      if ( (v73 & 1) != 0 )
                      {
                        v55 = 1;
                        ++CiTotalTasksDeadlineExpired;
                        *(_DWORD *)(v72 + 184) = v73 | 4;
                      }
                    }
                    CiSchedulerUpdateTaskIndexPriorities(v72);
                    v74 = *(_DWORD *)(v72 + 184);
                    if ( (v74 & 2) != 0 && (*((_BYTE *)v59 + 36) || !*(_BYTE *)(v72 + 132)) )
                    {
                      *(_DWORD *)(v72 + 184) = v74 & 0xFFFFFFFD;
                      CiSchedulerSetTaskIndexThreadTag(v72, 0);
                      --CiTotalTasksBuffering;
                    }
                    if ( byte_1C0007298 )
                    {
                      if ( *((_BYTE *)v59 + 36) )
                      {
                        v88.Ptr = v72 + 144;
                        *(_QWORD *)&v88.Size = 4LL;
                        EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v88);
                      }
                      else
                      {
                        v87.Ptr = v72 + 144;
                        *(_QWORD *)&v87.Size = 4LL;
                        EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &v87);
                      }
                    }
                  }
                  else
                  {
                    v54 |= 0x10u;
                  }
                }
              }
              while ( kk );
            }
            if ( (v54 & 0x20) != 0 )
            {
              if ( v55 )
              {
                if ( CiCurrentMediaBufferingState )
                {
                  CiCurrentMediaBufferingState = 0;
                  PoNotifyMediaBuffering(0LL);
                }
              }
              else
              {
                CiSystemUpdateMediaBufferingState();
              }
            }
            if ( (v54 & 0x10) == 0 )
              CiSchedulerUpdateTimer();
            v1 = 0;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            if ( v55 )
            {
              if ( byte_1C0007298 )
              {
                v89.Ptr = (ULONGLONG)&v77;
                v77 = 1;
                *(_QWORD *)&v89.Size = 4LL;
                EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v89);
              }
              PoLatencySensitivityHint(4LL);
            }
            j |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v54;
            if ( (j & 0xFFFFFFDF) != 0 )
              break;
          }
          if ( byte_1C0007298 )
            CiLogSchedulerWakeup(j);
        }
        v4 = 1;
      }
    }
    else
    {
      v4 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      v1 = 0;
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids);
      if ( byte_1C0007298 )
        CiLogSchedulerSleep(5LL);
      v67 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
      if ( !v67 )
        KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
      CiSchedulerProcessDeadlines(v80);
      j = _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v67;
    }
    if ( byte_1C0007298 )
      CiLogSchedulerWakeup(j);
    if ( (j & 8) != 0 )
      break;
    p_Reserved = v78;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids);
  PsTerminateSystemThread(0);
}
