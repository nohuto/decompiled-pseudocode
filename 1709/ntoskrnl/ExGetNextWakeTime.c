/*
 * XREFs of ExGetNextWakeTime @ 0x14043AB44
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopIsWakeTimerImmanent @ 0x140701178 (PopIsWakeTimerImmanent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryTimerDueTime @ 0x140204914 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x140239D30 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  unsigned __int64 TimerDueTime; // rdi
  __int64 v7; // r14
  unsigned __int64 *v8; // rbp
  __int64 v9; // rbx
  __int64 *v10; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  KIRQL v20; // [rsp+98h] [rbp+10h]

  TimerDueTime = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = MEMORY[0xFFFFF78000000014];
  v10 = (__int64 *)ExpWakeTimerList;
  v17 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v12 = (__int64)(v10 - 33);
      v10 = (__int64 *)*v10;
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 64));
      v18 = *(_QWORD *)(v12 + 256);
      if ( !a3 || (*(_BYTE *)(v12 + 304) & 4) != 0 )
      {
        if ( (*(_BYTE *)(v12 + 304) & 2) != 0 )
        {
          if ( *(_BYTE *)(v12 + 248) == 1 )
          {
            v13 = *(_QWORD *)(v12 + 312);
            TimerDueTime = 0LL;
            if ( v13 )
              TimerDueTime = v17 + v13 - v9;
          }
          else
          {
            TimerDueTime = *(_QWORD *)(v12 + 312);
          }
        }
        else
        {
          TimerDueTime = KeQueryTimerDueTime(v12);
        }
        if ( TimerDueTime < a1 )
          TimerDueTime = 0LL;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v12 + 64));
      __writecr8(v20);
      if ( TimerDueTime - 1 < a2 - 1 )
      {
        v7 = v18;
        a2 = TimerDueTime;
      }
      TimerDueTime = 0LL;
    }
    while ( v10 != &ExpWakeTimerList );
    v8 = 0LL;
    if ( v7 )
    {
      PoStoreDiagnosticContext(v7, 0LL, &NumberOfBytes);
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53577254u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreDiagnosticContext(v7, PoolWithTag, &NumberOfBytes) < 0 )
        {
          ExFreePoolWithTag(v8, 0x53577254u);
          v8 = 0LL;
        }
      }
    }
  }
  *a4 = a2;
  *a5 = v8;
  return v7 != 0;
}
