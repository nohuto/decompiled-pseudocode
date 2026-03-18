/*
 * XREFs of KeRequestTerminationThread @ 0x1400AB560
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x1406D7900 (KeRequestTerminationProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KeForceResumeThread @ 0x1400AA148 (KeForceResumeThread.c)
 *     KiSignalThreadForApc @ 0x1400AB2FC (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400AB46C (KiInsertQueueApc.c)
 *     KeAlertThread @ 0x1400AB690 (KeAlertThread.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  _DWORD v7[4]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v9; // [rsp+48h] [rbp-90h]
  __int64 v10; // [rsp+50h] [rbp-88h]

  v1 = a1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 544) + 720LL) & 1) != 0 )
  {
    v6 = *(unsigned int *)(a1 + 796);
    LOBYTE(a1) = 2;
    v9 = v6;
    v10 = v1;
    VslpEnterIumSecureMode(a1, 8LL, 0LL, v8);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 120), 0xFu) )
  {
    v2 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(v7);
      while ( *(_QWORD *)(v1 + 64) );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(v1 + 116) & 0x4000) != 0 )
    {
      v2 = 1;
      if ( !*(_BYTE *)(v1 + 730) )
      {
        *(_BYTE *)(v1 + 730) = 1;
        KiInsertQueueApc(v1 + 648);
        LOBYTE(v5) = CurrentIrql;
        KiSignalThreadForApc((__int64)CurrentPrcb, v1 + 648, v5);
      }
    }
    *(_QWORD *)(v1 + 64) = 0LL;
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
    if ( v2 )
    {
      KeAlertThread(v1, 0LL);
      KeForceResumeThread(v1);
    }
  }
}
