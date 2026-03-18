/*
 * XREFs of CiSchedulerTaskIndexYield @ 0x1C00033E8
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C0009BC0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogTaskIndexYield @ 0x1C0001B14 (CiLogTaskIndexYield.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002860 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002EE8 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0003850 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerUpdateTimer @ 0x1C000388C (CiSchedulerUpdateTimer.c)
 */

void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG ActiveThreadCount; // ebx
  ULONG v4; // edi
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // eax

  ActiveThreadCount = a2;
  v4 = a3;
  if ( a2 < WPP_MAIN_CB.ActiveThreadCount )
    ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
  if ( a3 != -1 )
  {
    if ( a3 < WPP_MAIN_CB.ActiveThreadCount )
      v4 = WPP_MAIN_CB.ActiveThreadCount;
    if ( v4 >= ActiveThreadCount )
      v4 = -1;
  }
  if ( byte_1C00062B0 )
    CiLogTaskIndexYield(a1, ActiveThreadCount, v4);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerRemoveDeadline(a1 + 56);
  v7 = ActiveThreadCount + MEMORY[0xFFFFF78000000008];
  *(_BYTE *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 80) = v7;
  v8 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 && *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    v8 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  LOBYTE(v6) = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v8 + 24) > v7 )
      {
        v9 = *(_QWORD *)v8;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_25;
          v9 ^= v8;
        }
        if ( !v9 )
        {
LABEL_25:
          LOBYTE(v6) = 0;
          break;
        }
      }
      else
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_19;
          v9 ^= v8;
        }
        if ( !v9 )
        {
LABEL_19:
          LOBYTE(v6) = 1;
          break;
        }
      }
      v8 = v9;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v8, v6, a1 + 56);
  if ( *(_BYTE *)(a1 + 132) )
    CiSchedulerRemoveDeadline(a1 + 96);
  if ( v4 == -1 )
  {
    *(_BYTE *)(a1 + 132) = 0;
  }
  else
  {
    v11 = v4 + MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(a1 + 132) = 1;
    *(_QWORD *)(a1 + 120) = v11;
    v12 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 && *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      v12 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    LOBYTE(v10) = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v12 + 24) > v11 )
        {
          v13 = *(_QWORD *)v12;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_44;
            v13 ^= v12;
          }
          if ( !v13 )
          {
LABEL_44:
            LOBYTE(v10) = 0;
            break;
          }
        }
        else
        {
          v13 = *(_QWORD *)(v12 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_38;
            v13 ^= v12;
          }
          if ( !v13 )
          {
LABEL_38:
            LOBYTE(v10) = 1;
            RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v12, v10, a1 + 96);
            goto LABEL_47;
          }
        }
        v12 = v13;
      }
    }
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v12, v10, a1 + 96);
  }
LABEL_47:
  CiSchedulerUpdateTaskIndexPriorities(a1);
  CiSchedulerUpdateTimer();
  v14 = *(_DWORD *)(a1 + 184);
  if ( (v14 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v14 & 0xFFFFFFFB;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
