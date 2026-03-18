/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x14042E2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     RtlWriteAcquireTickLock @ 0x14011FBD8 (RtlWriteAcquireTickLock.c)
 *     KeRemoveQueueDpc @ 0x140129630 (KeRemoveQueueDpc.c)
 *     RtlWriteReleaseTickLock @ 0x140139E44 (RtlWriteReleaseTickLock.c)
 *     KiUpdateSystemTime @ 0x14014A00C (KiUpdateSystemTime.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeRebaselineInterruptTime @ 0x140202464 (KeRebaselineInterruptTime.c)
 *     KiPollFreezeExecution @ 0x140209BC0 (KiPollFreezeExecution.c)
 */

void __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v3; // r15d
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  LARGE_INTEGER v6; // r9
  unsigned __int64 v7; // kr00_8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rcx
  char v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp-68h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-50h]
  unsigned __int64 v21; // [rsp+50h] [rbp-48h]
  LARGE_INTEGER v22; // [rsp+58h] [rbp-40h] BYREF
  LARGE_INTEGER *v23; // [rsp+60h] [rbp-38h] BYREF
  int v24; // [rsp+68h] [rbp-30h]
  int v25; // [rsp+6Ch] [rbp-2Ch]
  unsigned int v26; // [rsp+90h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Number == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    v4 = *(_QWORD *)(Argument + 8);
    v3 = v26 >> 9;
    v19 = v4;
    v5 = v4 + MEMORY[0xFFFFF78000000008];
    v20 = v4 + MEMORY[0xFFFFF78000000008];
    v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      LODWORD(v17) = (__PAIR64__(HIDWORD(v19), v4) * PerformanceFrequency.QuadPart) >> 32;
      HIDWORD(v17) = (((unsigned int)v4 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart
                     + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v19)
                     + (((unsigned int)v4 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)) >> 32)
                   + PerformanceFrequency.HighPart * HIDWORD(v19);
      v7 = v17;
      LODWORD(v17) = v4 * PerformanceFrequency.LowPart;
      *(_DWORD *)(Argument + 20) = v7 / 0x989680;
      HIDWORD(v17) = v7 % 0x989680;
      *(_DWORD *)(Argument + 16) = v17 / 0x989680;
      *(_QWORD *)(Argument + 16) += v6.QuadPart;
    }
    v21 = v5 / KeMaximumIncrement;
    v8 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v5 % KeMaximumIncrement;
    MEMORY[0xFFFFF780000003B0] += v8;
    LODWORD(v19) = v5 % KeMaximumIncrement;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
    MEMORY[0xFFFFF78000000010] = HIDWORD(v20);
    MEMORY[0xFFFFF78000000008] = v5;
    MEMORY[0xFFFFF78000000328] = HIDWORD(v21);
    MEMORY[0xFFFFF78000000320] = v9;
    MEMORY[0xFFFFF78000000350] = v10;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock(v11);
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v3 = v26 >> 9;
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  v12 = v3 & 1;
  if ( KiSerializeTimerExpiration )
  {
    if ( !CurrentPrcb->ClockOwner )
      goto LABEL_16;
    v13 = KiProcessorBlock[0];
  }
  else
  {
    v13 = (__int64)CurrentPrcb;
  }
  if ( v13 != -13952 )
  {
    v14 = MEMORY[0xFFFFF78000000008];
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)((unsigned int)(v14 >> 18) - 256), 0LL);
  }
LABEL_16:
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v15 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter(Argument + 24, *(_QWORD *)(Argument + 16));
    KeRebaselineInterruptTime();
    if ( (xmmword_140401150 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v25 = 0;
      v22 = PerformanceCounter;
      v24 = 8;
      v23 = &v22;
      EtwTraceKernelEvent((__int64)&v23, 1u, 0x80008000, 0x1232u, 0x401802u);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    KiUpdateSystemTime(v15, 0LL, 3);
  if ( v12 )
    _enable();
}
