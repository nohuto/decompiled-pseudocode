/*
 * XREFs of KiInSwapSingleProcess @ 0x1400AA560
 * Callers:
 *     KiAttachProcess @ 0x140007F44 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeReadyThread @ 0x14003FBA0 (KeReadyThread.c)
 * Callees:
 *     KiRequestProcessInSwap @ 0x1400AA620 (KiRequestProcessInSwap.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 */

char __fastcall KiInSwapSingleProcess(_KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  char v6; // bp
  struct _KPRCB *CurrentPrcb; // rdx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v6 = 1;
  while ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( (*(_DWORD *)a2 & 0x80u) != 0 );
  }
  if ( (*(_DWORD *)(a2 + 572) & 7) != 0 )
  {
    KiRequestProcessInSwap(a1, a2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a1 == CurrentPrcb->CurrentThread )
    {
      a1->WaitReason = 23;
      a1->WaitIrql = a3;
      KiSwapThread(a1, CurrentPrcb);
      return 1;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  __writecr8(a3);
  return v6;
}
