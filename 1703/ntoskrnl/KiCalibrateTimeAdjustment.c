/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x140404FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x14001B1AC (RtlWriteAcquireTickLock.c)
 *     KeRemoveQueueDpc @ 0x14001B6E0 (KeRemoveQueueDpc.c)
 *     KiPollFreezeExecution @ 0x14003C890 (KiPollFreezeExecution.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     KeRebaselineInterruptTime @ 0x140136EF4 (KeRebaselineInterruptTime.c)
 *     KiSelectActiveTimerTable @ 0x140143C08 (KiSelectActiveTimerTable.c)
 *     KiUpdateSystemTime @ 0x140144050 (KiUpdateSystemTime.c)
 *     RtlWriteReleaseTickLock @ 0x140149278 (RtlWriteReleaseTickLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r15
  bool v3; // r14
  ULONG_PTR result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  LARGE_INTEGER v8; // r9
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  unsigned __int64 v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-68h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  unsigned __int64 v20; // [rsp+50h] [rbp-48h]
  LARGE_INTEGER v21; // [rsp+58h] [rbp-40h] BYREF
  LARGE_INTEGER *v22; // [rsp+60h] [rbp-38h] BYREF
  int v23; // [rsp+68h] [rbp-30h]
  int v24; // [rsp+6Ch] [rbp-2Ch]
  int v25; // [rsp+90h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Number == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    v6 = *(_QWORD *)(Argument + 8);
    v3 = (v25 & 0x200) != 0;
    v18 = v6;
    v7 = v6 + MEMORY[0xFFFFF78000000008];
    v19 = v6 + MEMORY[0xFFFFF78000000008];
    v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      LODWORD(v16) = (PerformanceFrequency.QuadPart * __PAIR64__(HIDWORD(v18), v6)) >> 32;
      HIDWORD(v16) = (((((unsigned int)v6 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)
                     + (unsigned int)v6 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart
                     + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v18)) >> 32)
                   + PerformanceFrequency.HighPart * HIDWORD(v18);
      v9 = v16;
      LODWORD(v16) = v6 * PerformanceFrequency.LowPart;
      *(_DWORD *)(Argument + 20) = v9 / 0x989680;
      HIDWORD(v16) = v9 % 0x989680;
      *(_DWORD *)(Argument + 16) = v16 / 0x989680;
      *(_QWORD *)(Argument + 16) += v8.QuadPart;
    }
    v20 = v7 / KeMaximumIncrement;
    v10 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v7 % KeMaximumIncrement;
    MEMORY[0xFFFFF780000003B0] += v10;
    LODWORD(v18) = v7 % KeMaximumIncrement;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
    MEMORY[0xFFFFF78000000010] = HIDWORD(v19);
    MEMORY[0xFFFFF78000000008] = v7;
    MEMORY[0xFFFFF78000000328] = HIDWORD(v20);
    MEMORY[0xFFFFF78000000320] = v11;
    MEMORY[0xFFFFF78000000350] = v12;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock(v13);
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v3 = (v25 & 0x200) != 0;
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  if ( KiSelectActiveTimerTable((__int64)CurrentPrcb, 1) )
  {
    v14 = MEMORY[0xFFFFF78000000008];
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)((unsigned int)(v14 >> 18) - 256), 0LL);
  }
  result = MEMORY[0xFFFFF78000000320];
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v5 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter(Argument + 24, *(_QWORD *)(Argument + 16));
    result = KeRebaselineInterruptTime().QuadPart;
    if ( (xmmword_1403E4010 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v24 = 0;
      v21 = PerformanceCounter;
      v23 = 8;
      v22 = &v21;
      result = (ULONG_PTR)EtwTraceKernelEvent((int)&v22, 1, 0x80008000, 4658, 4200450);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    result = KiUpdateSystemTime(v5, 0LL, 3);
  if ( v3 )
    _enable();
  return result;
}
