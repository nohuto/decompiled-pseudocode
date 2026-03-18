/*
 * XREFs of KeSetSchedulingGroupCycleNotification @ 0x1400C5DD8
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

void __fastcall KeSetSchedulingGroupCycleNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 *v7; // r15
  __int64 v8; // r13
  _QWORD *v9; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // rsi
  int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]

  v13 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = a2;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v7 = KiProcessorBlock;
      v8 = (unsigned int)KeNumberProcessors_0;
      v9 = (_QWORD *)(a1 + 128);
      do
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = 0;
        v11 = *v7;
        while ( 1 )
        {
          LOBYTE(a2) = 1;
          KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
          do
            KeYieldProcessorEx(&v12);
          while ( *(_QWORD *)(v11 + 48) );
        }
        v9[5] = *v9;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
        KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        ++v7;
        v9 += 53;
        --v8;
      }
      while ( v8 );
      v4 = v13;
    }
    *(_QWORD *)(a1 + 72) = v4;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), a3);
    __writecr8(CurrentIrql);
  }
}
