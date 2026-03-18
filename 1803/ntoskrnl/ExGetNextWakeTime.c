/*
 * XREFs of ExGetNextWakeTime @ 0x14048773C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopIsWakeTimerImmanent @ 0x140765568 (PopIsWakeTimerImmanent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryTimerDueTime @ 0x140242130 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x140271244 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  unsigned __int64 TimerDueTime; // rdi
  __int64 v7; // rsi
  unsigned __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 *v10; // r12
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  KIRQL v21; // [rsp+98h] [rbp+10h]

  TimerDueTime = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = MEMORY[0xFFFFF78000000014];
  v10 = (__int64 *)ExpWakeTimerList;
  v18 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v12 = (__int64)(v10 - 33);
      v10 = (__int64 *)*v10;
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 64));
      v19 = *(_QWORD *)(v12 + 256);
      if ( !a3 || (*(_BYTE *)(v12 + 304) & 4) != 0 )
      {
        if ( (*(_BYTE *)(v12 + 304) & 2) != 0 )
        {
          v13 = *(_QWORD *)(v12 + 312);
          if ( *(_BYTE *)(v12 + 248) == 1 )
          {
            TimerDueTime = 0LL;
            if ( v13 )
              TimerDueTime = v18 + v13 - v9;
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
      __writecr8(v21);
      v14 = v19;
      if ( TimerDueTime - 1 >= a2 - 1 )
      {
        TimerDueTime = a2;
        v14 = v7;
      }
      a2 = TimerDueTime;
      TimerDueTime = 0LL;
      v7 = v14;
    }
    while ( v10 != &ExpWakeTimerList );
    v8 = 0LL;
    if ( v14 )
    {
      PoStoreDiagnosticContext(v14, 0LL, &NumberOfBytes);
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
