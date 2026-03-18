/*
 * XREFs of KiAttachProcess @ 0x140007F44
 * Callers:
 *     KeStackAttachProcess @ 0x140007A90 (KeStackAttachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     KeAttachProcess @ 0x1400C7820 (KeAttachProcess.c)
 * Callees:
 *     KiMoveApcState @ 0x140008620 (KiMoveApcState.c)
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x1400AA560 (KiInSwapSingleProcess.c)
 *     KiLoadDirectoryTableBase @ 0x1400ADCA0 (KiLoadDirectoryTableBase.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiAttachProcess(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  int v9; // r11d
  _QWORD *v10; // r10
  struct _KPRCB *v11; // rcx
  __int64 v12; // rsi
  __int64 Group; // rbx
  unsigned __int64 GroupIndex; // rdi
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  int v19; // [rsp+50h] [rbp+18h] BYREF

  v5 = a5;
  KiMoveApcState(a1 + 152, a5);
  v10[1] = v10;
  *v10 = v10;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( v5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( !v9 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 572), 8u) & 7) != 0 )
  {
    KiReleaseThreadLockSafe(a1);
    LOBYTE(v16) = a3;
    KiInSwapSingleProcess(a1, a2, v16);
    KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = 0;
    while ( 1 )
    {
      LOBYTE(v17) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v17);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v19);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  KiReleaseThreadLockSafe(a1);
  v11 = KeGetCurrentPrcb();
  v12 = *(_QWORD *)(v5 + 32);
  Group = v11->Group;
  GroupIndex = v11->GroupIndex;
  _interlockedbittestandset64((volatile signed __int32 *)(a2 + 8 * Group + 280), GroupIndex);
  KiLoadDirectoryTableBase(a2, *(_QWORD *)(a2 + 40));
  _interlockedbittestandreset64((volatile signed __int32 *)(v12 + 8 * Group + 280), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  result = a3;
  __writecr8(a3);
  return result;
}
