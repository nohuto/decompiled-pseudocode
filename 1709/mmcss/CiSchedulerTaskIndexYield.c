/*
 * XREFs of CiSchedulerTaskIndexYield @ 0x1C00033A8
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C0009BC0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogTaskIndexYield @ 0x1C0001B44 (CiLogTaskIndexYield.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C000286C (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002EB4 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C00037E0 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerUpdateTimer @ 0x1C000381C (CiSchedulerUpdateTimer.c)
 */

void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG ActiveThreadCount; // esi
  ULONG v4; // ebx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax

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
  if ( byte_1C00062A8 )
    CiLogTaskIndexYield(a1, ActiveThreadCount, v4);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerRemoveDeadline(a1 + 56);
  LOBYTE(v6) = 0;
  v7 = ActiveThreadCount + MEMORY[0xFFFFF78000000008];
  *(_BYTE *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 80) = v7;
  v8 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v8 + 24) > v7 )
      {
        v9 = *(_QWORD *)v8;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_22;
          v9 ^= v8;
        }
        if ( !v9 )
        {
LABEL_22:
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
            goto LABEL_16;
          v9 ^= v8;
        }
        if ( !v9 )
        {
LABEL_16:
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
    goto LABEL_41;
  }
  v11 = MEMORY[0xFFFFF78000000008];
  *(_BYTE *)(a1 + 132) = 1;
  LOBYTE(v10) = 0;
  v12 = v4 + v11;
  *(_QWORD *)(a1 + 120) = v12;
  v13 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    goto LABEL_39;
  while ( 1 )
  {
    if ( *(_QWORD *)(v13 + 24) <= v12 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_32;
        v14 ^= v13;
      }
      if ( !v14 )
      {
LABEL_32:
        LOBYTE(v10) = 1;
        goto LABEL_39;
      }
      goto LABEL_37;
    }
    v14 = *(_QWORD *)v13;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( !v14 )
        break;
      v14 ^= v13;
    }
    if ( !v14 )
      break;
LABEL_37:
    v13 = v14;
  }
  LOBYTE(v10) = 0;
LABEL_39:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v13, v10, a1 + 96);
LABEL_41:
  CiSchedulerUpdateTaskIndexPriorities(a1);
  CiSchedulerUpdateTimer();
  v15 = *(_DWORD *)(a1 + 184);
  if ( (v15 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v15 & 0xFFFFFFFB;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
