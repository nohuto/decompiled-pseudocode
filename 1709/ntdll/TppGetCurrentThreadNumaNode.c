/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x180036CF8
 * Callers:
 *     TpAllocIoCompletion @ 0x18000A960 (TpAllocIoCompletion.c)
 *     TpAllocPoolInternal @ 0x18000AC04 (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x18000B778 (TppInitializeTimerSubQueue.c)
 *     TpAllocWait @ 0x18000BAE0 (TpAllocWait.c)
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TpReserveTaskPost @ 0x180011898 (TpReserveTaskPost.c)
 *     TppAllocAlpcCompletion @ 0x180013B30 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180014020 (TpAllocJobNotification.c)
 *     TppWorkInitialize @ 0x180036DB4 (TppWorkInitialize.c)
 *     RtlpTpIoAlloc @ 0x1800901F4 (RtlpTpIoAlloc.c)
 * Callees:
 *     TppAdjustRunningThreadGoal @ 0x18010AA10 (TppAdjustRunningThreadGoal.c)
 */

__int64 __fastcall TppGetCurrentThreadNumaNode(__int64 a1, _DWORD *a2, unsigned __int8 *a3)
{
  unsigned __int8 Number; // bp
  unsigned int v7; // r9d
  unsigned int v8; // edi
  unsigned __int16 Group; // r15
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = TppNumberNodes;
  v8 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
  {
    TppAdjustRunningThreadGoal(a1);
    v7 = TppNumberNodes;
  }
  v10 = 0;
  if ( v7 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v11 + 16LL * v10 + 8) == Group )
      {
        v12 = *(_QWORD *)(v11 + 16LL * v10);
        if ( _bittest64(&v12, Number) )
          break;
      }
      if ( ++v10 >= v7 )
        goto LABEL_8;
    }
    v8 = v10;
  }
LABEL_8:
  result = v8 < v7 ? v8 : 0;
  *a2 = result;
  if ( a3 )
    *a3 = Number;
  return result;
}
