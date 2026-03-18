/*
 * XREFs of ExGetNextWakeTime @ 0x14041AF60
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryTimerDueTime @ 0x1401FE678 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x140227060 (PoStoreDiagnosticContext.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  __int64 v6; // r15
  unsigned __int64 *v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v11; // rbp
  unsigned __int64 TimerDueTime; // rsi
  __int64 v13; // rax
  unsigned __int64 *PoolWithTag; // rax
  bool result; // al
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  KIRQL v21; // [rsp+98h] [rbp+10h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = (__int64 *)ExpWakeTimerList;
  v17 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v11 = (__int64)(v9 - 33);
      TimerDueTime = 0LL;
      v9 = (__int64 *)*v9;
      SpinLock = (PKSPIN_LOCK)(v11 + 64);
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 64));
      v19 = *(_QWORD *)(v11 + 256);
      if ( !a3 || (*(_BYTE *)(v11 + 304) & 4) != 0 )
      {
        if ( (*(_BYTE *)(v11 + 304) & 2) != 0 )
        {
          if ( *(_BYTE *)(v11 + 248) == 1 )
          {
            v13 = *(_QWORD *)(v11 + 312);
            if ( v13 )
              TimerDueTime = v17 + v13 - v8;
          }
          else
          {
            TimerDueTime = *(_QWORD *)(v11 + 312);
          }
        }
        else
        {
          TimerDueTime = KeQueryTimerDueTime(v11);
        }
        if ( TimerDueTime < a1 )
          TimerDueTime = 0LL;
      }
      KxReleaseSpinLock(SpinLock);
      __writecr8(v21);
      if ( TimerDueTime - 1 < a2 - 1 )
      {
        v6 = v19;
        a2 = TimerDueTime;
      }
    }
    while ( v9 != &ExpWakeTimerList );
    v7 = 0LL;
    if ( v6 )
    {
      PoStoreDiagnosticContext(v6, 0LL, &NumberOfBytes);
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53577254u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreDiagnosticContext(v6, PoolWithTag, &NumberOfBytes) < 0 )
        {
          ExFreePoolWithTag(v7, 0x53577254u);
          v7 = 0LL;
        }
      }
    }
  }
  *a4 = a2;
  result = v6 != 0;
  *a5 = v7;
  return result;
}
