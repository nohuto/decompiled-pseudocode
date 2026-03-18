/*
 * XREFs of KiInSwapSingleProcess @ 0x1400BFC20
 * Callers:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KeReadyThread @ 0x1400A6844 (KeReadyThread.c)
 *     KiAttachProcess @ 0x1400BFEE0 (KiAttachProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiRequestProcessInSwap @ 0x1400BFCE0 (KiRequestProcessInSwap.c)
 */

char __fastcall KiInSwapSingleProcess(__int64 a1, __int64 a2, unsigned __int8 a3)
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
    if ( (_KTHREAD *)a1 == CurrentPrcb->CurrentThread )
    {
      *(_BYTE *)(a1 + 643) = 23;
      *(_BYTE *)(a1 + 390) = a3;
      KiSwapThread(a1, (__int64)CurrentPrcb);
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
