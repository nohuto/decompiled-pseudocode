/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C0002D10
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002030 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C00011B0 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001200 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001280 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001780 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C00041FC (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0004264 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C00045B8 (CiLogTurboEngaged.c)
 */

char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  unsigned __int64 v3; // r13
  int v4; // esi
  int v5; // r12d
  _QWORD *j; // rdi
  _QWORD **v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  bool v11; // zf
  __int64 v12; // rbp
  int v13; // eax
  int v14; // eax

  result = WPP_MAIN_CB.SectorSize;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    v3 = MEMORY[0xFFFFF78000000008] + 2000LL;
    v4 = 0;
    v5 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    CiSchedulerTimerNode = 2LL;
    j = (_QWORD *)((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL);
    if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      do
      {
        v7 = (_QWORD **)j[1];
        v8 = j;
        v9 = j;
        if ( v7 )
        {
          j = (_QWORD *)j[1];
          for ( i = *v7; i; i = (_QWORD *)*i )
            j = i;
        }
        else
        {
          for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*j == v9 )
              break;
            v9 = j;
          }
        }
        if ( v8[3] <= v3 )
        {
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v8);
          v11 = *((_DWORD *)v8 + 8) == 1;
          v8[3] = 0LL;
          if ( v11 )
          {
            v4 |= 0x20u;
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
                v5 = 1;
                ++CiTotalTasksDeadlineExpired;
                *(_DWORD *)(v12 + 184) = v13 | 4;
              }
            }
            CiSchedulerUpdateTaskIndexPriorities(v12);
            v14 = *(_DWORD *)(v12 + 184);
            if ( (v14 & 2) != 0 && (*((_BYTE *)v8 + 36) || !*(_BYTE *)(v12 + 132)) )
            {
              *(_DWORD *)(v12 + 184) = v14 & 0xFFFFFFFD;
              CiSchedulerSetTaskIndexThreadTag(v12, 0);
              --CiTotalTasksBuffering;
            }
            if ( byte_1C0007298 )
            {
              if ( *((_BYTE *)v8 + 36) )
                CiLogTaskIndexPreDeadlineExpired(v12);
              else
                CiLogTaskIndexDeadlineExpired(v12);
            }
          }
          else
          {
            v4 |= 0x10u;
          }
        }
      }
      while ( j );
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v5 )
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
    if ( (v4 & 0x10) == 0 )
      CiSchedulerUpdateTimer();
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( v5 )
    {
      if ( byte_1C0007298 )
        CiLogTurboEngaged();
      PoLatencySensitivityHint(4LL);
    }
    *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v4;
    return (*a1 & 0xFFFFFFDF) != 0;
  }
  return result;
}
