/*
 * XREFs of PspSetProcessTimerDelayForKTimers @ 0x140239944
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x1402394C4 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x1401FD040 (KeAdjustTimerDelayProcess.c)
 *     ExGetTimerDueTime @ 0x14025CBD4 (ExGetTimerDueTime.c)
 *     ExpTimer2Adjust @ 0x14025CFE8 (ExpTimer2Adjust.c)
 *     ExpTimerAdjust @ 0x14025D0A8 (ExpTimerAdjust.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForKTimers(__int64 a1)
{
  KSPIN_LOCK *v1; // r13
  unsigned int v3; // ebp
  KIRQL v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned int v7; // ecx
  unsigned __int64 v8; // r14
  _QWORD *i; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // r13
  unsigned __int64 v14; // [rsp+78h] [rbp+10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h]

  v1 = (KSPIN_LOCK *)(a1 + 1992);
  v3 = 10000 * (*(_DWORD *)(a1 + 1968) & 0x3FFFFFFF);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1992));
  if ( v3 != *(_DWORD *)(a1 + 68) )
  {
    v5 = 0LL;
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = *(_DWORD *)(a1 + 68);
    v15 = MEMORY[0xFFFFF78000000014];
    if ( v3 <= v7 )
    {
      if ( v3 < v7 )
      {
        v8 = -1LL;
        for ( i = *(_QWORD **)(a1 + 2000); i != (_QWORD *)(a1 + 2000); i = (_QWORD *)*i )
        {
          if ( (unsigned __int8)ExGetTimerDueTime(i, &v14) && v14 < v8 )
            v8 = v14;
        }
        v10 = *(_DWORD *)(a1 + 68) - v3;
        if ( v8 - v10 >= v6 )
          v5 = -v10;
        else
          v5 = v6 - v8;
      }
    }
    else
    {
      v5 = v3 - v7;
    }
    v11 = *(__int64 **)(a1 + 2000);
    if ( v11 != (__int64 *)(a1 + 2000) )
    {
      v12 = v15;
      do
      {
        if ( (v11[2] & 8) != 0 )
          ExpTimer2Adjust(v11 - 20, v5, v12, v6);
        else
          ExpTimerAdjust((PKTIMER)(v11 - 36), v6);
        v11 = (__int64 *)*v11;
      }
      while ( v11 != (__int64 *)(a1 + 2000) );
      v1 = (KSPIN_LOCK *)(a1 + 1992);
    }
    KeAdjustTimerDelayProcess(a1, v5, v3);
  }
  KxReleaseSpinLock(v1);
  __writecr8(v4);
  return 0LL;
}
