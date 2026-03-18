/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C0002C60
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C0002AE8 (CiSchedulerDeepSleep.c)
 *     CiSchedulerSleep @ 0x1C0003278 (CiSchedulerSleep.c)
 * Callees:
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0001A44 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0001AAC (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C0001E00 (CiLogTurboEngaged.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002860 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0003230 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0003850 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerUpdateTimer @ 0x1C000388C (CiSchedulerUpdateTimer.c)
 */

char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  int v3; // ebp
  int v4; // r12d
  unsigned __int64 v5; // r15
  _QWORD *p_Type; // rbx
  _QWORD **v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *i; // rcx
  bool v11; // zf
  __int64 v12; // rdi
  int v13; // eax
  int v14; // eax

  result = WPP_MAIN_CB.SectorSize;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    return result;
  v3 = 0;
  v4 = 0;
  v5 = MEMORY[0xFFFFF78000000008] + 2000LL;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
  {
    p_Type = &WPP_MAIN_CB.DeviceObjectExtension->Type;
LABEL_6:
    while ( p_Type )
    {
      v7 = (_QWORD **)p_Type[1];
      v8 = p_Type;
      v9 = p_Type;
      if ( v7 )
      {
        p_Type = (_QWORD *)p_Type[1];
        for ( i = *v7; i; i = (_QWORD *)*i )
          p_Type = i;
      }
      else
      {
        for ( p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL);
              p_Type;
              p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*p_Type == v9 )
            break;
          v9 = p_Type;
        }
      }
      if ( v8[3] <= v5 )
      {
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v8);
        v11 = *((_DWORD *)v8 + 8) == 1;
        v8[3] = 0LL;
        if ( v11 )
        {
          v3 |= 0x20u;
          if ( *((_BYTE *)v8 + 36) )
          {
            v12 = (__int64)(v8 - 12);
          }
          else
          {
            v13 = *((_DWORD *)v8 + 32);
            v12 = (__int64)(v8 - 7);
            if ( (v13 & 1) != 0 )
            {
              v4 = 1;
              ++CiTotalTasksDeadlineExpired;
              *(_DWORD *)(v12 + 184) = v13 | 4;
            }
          }
          CiSchedulerUpdateTaskIndexPriorities(v12);
          v14 = *(_DWORD *)(v12 + 184);
          if ( (v14 & 2) != 0 && (*((_BYTE *)v8 + 36) || !*(_BYTE *)(v12 + 132)) )
          {
            *(_DWORD *)(v12 + 184) = v14 & 0xFFFFFFFD;
            CiSchedulerSetTaskIndexThreadTag(v12, 0LL);
            --CiTotalTasksBuffering;
          }
          if ( byte_1C00062B0 )
          {
            if ( *((_BYTE *)v8 + 36) )
              CiLogTaskIndexPreDeadlineExpired(v12);
            else
              CiLogTaskIndexDeadlineExpired(v12);
          }
        }
        else
        {
          v3 |= 0x10u;
        }
      }
    }
    goto LABEL_30;
  }
  if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)1 )
  {
    p_Type = (_QWORD *)((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                             + 1));
    goto LABEL_6;
  }
LABEL_30:
  if ( (v3 & 0x20) != 0 )
  {
    if ( v4 )
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
  if ( (v3 & 0x10) == 0 )
    CiSchedulerUpdateTimer();
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v4 )
  {
    if ( byte_1C00062B0 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v3;
  return (*a1 & 0xFFFFFFDF) != 0;
}
