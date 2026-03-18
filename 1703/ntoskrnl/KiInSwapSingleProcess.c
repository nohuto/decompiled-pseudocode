/*
 * XREFs of KiInSwapSingleProcess @ 0x1400B2A20
 * Callers:
 *     KiAttachProcess @ 0x1400B1C00 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeReadyThread @ 0x14011216C (KeReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiRequestProcessInSwap @ 0x1400B2AE0 (KiRequestProcessInSwap.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 */

char __fastcall KiInSwapSingleProcess(_KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  char v6; // bp
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v6 = 1;
  while ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( (*(_DWORD *)a2 & 0x80u) != 0 );
  }
  if ( (*(_DWORD *)(a2 + 572) & 7) != 0 )
  {
    KiRequestProcessInSwap(a1, a2);
    if ( a1 == KeGetCurrentPrcb()->CurrentThread )
    {
      a1->WaitReason = 23;
      a1->WaitIrql = a3;
      KiSwapThread(a1);
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
