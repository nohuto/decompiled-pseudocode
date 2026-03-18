/*
 * XREFs of PfSnCheckLoggingForThread @ 0x14004AF54
 * Callers:
 *     PfSnLogPageFault @ 0x14005F114 (PfSnLogPageFault.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x14004AA70 (PsGetBaseIoPriorityThread.c)
 */

__int64 __fastcall PfSnCheckLoggingForThread(__int64 a1, __int64 a2, char a3)
{
  int BaseIoPriorityThread; // eax
  struct _KTHREAD *v4; // r10
  __int64 v5; // r11
  unsigned int v6; // ecx
  int v7; // edx
  struct _KTHREAD *v8; // rax

  if ( (((a3 & 2) == 0) & (*(_BYTE *)(a1 + 1744) >> 6)) != 0 )
  {
    return 0;
  }
  else
  {
    BaseIoPriorityThread = PsGetBaseIoPriorityThread(a1);
    v6 = 0;
    v7 = BaseIoPriorityThread;
    if ( BaseIoPriorityThread >= 2 )
      goto LABEL_3;
    if ( v4 == KeGetCurrentThread() && v4[1].Timer.DueTime.LowPart )
      v7 = 2;
    if ( v7 >= 2 )
    {
LABEL_3:
      v8 = *(struct _KTHREAD **)(v5 + 432);
      if ( !v8 || v8 == v4 && *(void **)(v5 + 440) == v4[1].KernelStack )
        return 1;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 336));
    }
  }
  return v6;
}
