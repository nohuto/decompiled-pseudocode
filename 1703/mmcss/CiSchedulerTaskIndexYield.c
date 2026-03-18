/*
 * XREFs of CiSchedulerTaskIndexYield @ 0x1C00012C0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A290 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001780 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogSchedulerEvent @ 0x1C0003F54 (CiLogSchedulerEvent.c)
 *     CiLogTaskIndexYield @ 0x1C00042CC (CiLogTaskIndexYield.c)
 */

void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG ActiveThreadCount; // esi
  ULONG v5; // edi
  unsigned __int64 v6; // r8
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *i; // rbx
  __int64 v15; // rax
  unsigned __int8 v16; // al
  unsigned int v17; // ebp
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  int v21; // eax

  ActiveThreadCount = a2;
  v5 = a3;
  if ( a2 < WPP_MAIN_CB.ActiveThreadCount )
    ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
  if ( a3 != -1 )
  {
    if ( a3 < WPP_MAIN_CB.ActiveThreadCount )
      v5 = WPP_MAIN_CB.ActiveThreadCount;
    if ( v5 >= ActiveThreadCount )
      v5 = -1;
  }
  if ( byte_1C0007298 )
    CiLogTaskIndexYield(a1, ActiveThreadCount, v5);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( *(_BYTE *)(a1 + 92) )
      *(_BYTE *)(a1 + 92) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 56);
    if ( CiSchedulerTimerNode == a1 + 56 )
      CiSchedulerTimerNode = 2LL;
  }
  v6 = ActiveThreadCount + MEMORY[0xFFFFF78000000008];
  *(_BYTE *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 80) = v6;
  v7 = 0;
  v8 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v8 + 24) > v6 )
      {
        v9 = *(_QWORD *)v8;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v9 )
          {
LABEL_61:
            v7 = 0;
            break;
          }
          v9 ^= v8;
        }
        if ( !v9 )
          goto LABEL_61;
      }
      else
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v9 )
          {
LABEL_19:
            v7 = 1;
            break;
          }
          v9 ^= v8;
        }
        if ( !v9 )
          goto LABEL_19;
      }
      v8 = v9;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v8, v7, a1 + 56);
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    if ( *(_BYTE *)(a1 + 132) )
      *(_BYTE *)(a1 + 132) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 96);
    if ( CiSchedulerTimerNode == a1 + 96 )
      CiSchedulerTimerNode = 2LL;
  }
  if ( v5 == -1 )
  {
    *(_BYTE *)(a1 + 132) = 0;
    goto LABEL_37;
  }
  v10 = v5 + MEMORY[0xFFFFF78000000008];
  *(_BYTE *)(a1 + 132) = 1;
  *(_QWORD *)(a1 + 120) = v10;
  v11 = 0;
  v12 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    goto LABEL_36;
  while ( 1 )
  {
    if ( *(_QWORD *)(v12 + 24) > v10 )
    {
      v13 = *(_QWORD *)v12;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( !v13 )
        {
LABEL_35:
          v11 = 0;
          goto LABEL_36;
        }
        v13 ^= v12;
      }
      if ( !v13 )
        goto LABEL_35;
      goto LABEL_31;
    }
    v13 = *(_QWORD *)(v12 + 8);
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      break;
LABEL_59:
    if ( !v13 )
      goto LABEL_60;
LABEL_31:
    v12 = v13;
  }
  if ( v13 )
  {
    v13 ^= v12;
    goto LABEL_59;
  }
LABEL_60:
  v11 = 1;
LABEL_36:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v12, v11, a1 + 96);
LABEL_37:
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 68) & 1) == 0 )
    {
      if ( CiThreadsMovedUp )
      {
        v15 = *(i - 1);
        if ( *(_QWORD *)(v15 + 120) || !*(_BYTE *)(v15 + 132) && *(_QWORD *)(v15 + 80) )
        {
          v16 = *(_BYTE *)(*(i - 2) + 40);
          if ( v16 > *((_BYTE *)i + 24) )
            v16 = *((_BYTE *)i + 24);
        }
        else
        {
          v16 = *((_BYTE *)i + 24);
        }
        v17 = v16;
      }
      else
      {
        v17 = *((unsigned __int8 *)i + 26);
      }
      if ( *((unsigned __int8 *)i + 27) != v17 )
      {
        *((_BYTE *)i + 27) = v17;
        if ( byte_1C0007298 )
          CiLogSchedulerEvent(i - 10, v17);
        KeSetActualBasePriorityThread(i[2], v17);
      }
    }
  }
  v18 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL;
  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    if ( v18 != CiSchedulerTimerNode )
    {
      v19 = *(_QWORD *)(v18 + 24);
      if ( MEMORY[0xFFFFF78000000008] > v19 )
      {
        v20 = 0LL;
      }
      else
      {
        v20 = MEMORY[0xFFFFF78000000008] - v19;
        if ( (__int64)(MEMORY[0xFFFFF78000000008] - v19) < -2000 )
          v20 += 2000LL;
      }
      CiSchedulerTimerNode = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
  }
  else if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
  v21 = *(_DWORD *)(a1 + 184);
  if ( (v21 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v21 & 0xFFFFFFFB;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
