/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x1400BE1B4
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405361A8 (PspQueryJobHierarchyAccountingInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // r12
  __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v8; // rsi
  int v10; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v4 = KiProcessorBlock;
    v5 = (unsigned int)KeNumberProcessors_0;
    v6 = a1 + 128;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = 0;
      v8 = *v4;
      while ( 1 )
      {
        LOBYTE(a2) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v10);
        while ( *(_QWORD *)(v8 + 48) );
      }
      v3 += *(_QWORD *)(v6 + 56);
      if ( (*(_BYTE *)(v6 + 112) & 1) != 0 )
        v3 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v6 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      ++v4;
      v6 += 424LL;
      --v5;
    }
    while ( v5 );
  }
  __writecr8(CurrentIrql);
  return v3;
}
