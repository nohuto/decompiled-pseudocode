/*
 * XREFs of PspSetProcessTimerDelayForKTimers @ 0x14024E8F4
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x14024E464 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeAdjustTimerDelayProcess @ 0x140202E68 (KeAdjustTimerDelayProcess.c)
 *     ExpTimerAdjust @ 0x140286A1C (ExpTimerAdjust.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForKTimers(__int64 a1)
{
  KSPIN_LOCK *v1; // r13
  unsigned int v3; // esi
  KIRQL v4; // bp
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rbp
  volatile signed __int32 *v9; // r14
  unsigned __int64 v10; // r13
  volatile signed __int32 *v11; // r15
  char v12; // cl
  __int64 v13; // rbx
  _QWORD *v14; // r14
  unsigned __int64 v16; // [rsp+70h] [rbp+8h]
  __int64 v17; // [rsp+78h] [rbp+10h]

  v1 = (KSPIN_LOCK *)(a1 + 2016);
  v3 = 10000 * (*(_DWORD *)(a1 + 1992) & 0x3FFFFFFF);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2016));
  LOBYTE(v16) = v4;
  if ( v3 != *(_DWORD *)(a1 + 68) )
  {
    v5 = 0LL;
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = *(_DWORD *)(a1 + 68);
    v17 = MEMORY[0xFFFFF78000000008];
    if ( v3 <= v7 )
    {
      if ( v3 < v7 )
      {
        v8 = -1LL;
        v9 = *(volatile signed __int32 **)(a1 + 2024);
        if ( v9 != (volatile signed __int32 *)(a1 + 2024) )
        {
          v10 = v16;
          do
          {
            v11 = v9 - 72;
            KiAcquireKobjectLockSafe(v9 - 72);
            v12 = 0;
            if ( (*((_BYTE *)v9 - 285) & 0x40) != 0 )
            {
              v10 = *((_QWORD *)v11 + 3);
              v12 = 1;
            }
            _InterlockedAnd(v11, 0xFFFFFF7F);
            if ( v12 && v10 < v8 )
              v8 = v10;
            v9 = *(volatile signed __int32 **)v9;
          }
          while ( v9 != (volatile signed __int32 *)(a1 + 2024) );
          v6 = v17;
          v1 = (KSPIN_LOCK *)(a1 + 2016);
        }
        v13 = *(_DWORD *)(a1 + 68) - v3;
        if ( v8 - v13 >= v6 )
          v5 = -v13;
        else
          v5 = v6 - v8;
        v4 = v16;
      }
    }
    else
    {
      v5 = v3 - v7;
    }
    v14 = *(_QWORD **)(a1 + 2024);
    if ( v14 != (_QWORD *)(a1 + 2024) )
    {
      do
      {
        ExpTimerAdjust((PKTIMER)(v14 - 36), v17);
        v14 = (_QWORD *)*v14;
      }
      while ( v14 != (_QWORD *)(a1 + 2024) );
      v4 = v16;
      v1 = (KSPIN_LOCK *)(a1 + 2016);
    }
    KeAdjustTimerDelayProcess(a1, v5, v3);
  }
  KxReleaseSpinLock(v1);
  __writecr8(v4);
  return 0LL;
}
