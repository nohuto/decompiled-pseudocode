/*
 * XREFs of PpmIdlePrevetoWatchdog @ 0x14023B7D8
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rsi
  KIRQL v8; // bp
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v10; // rdx
  unsigned int v11; // r10d
  __int64 v12; // r11
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  result = PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 4) )
    {
      v7 = (unsigned int)dword_140389CC0;
      result = (unsigned int)dword_140389CC0;
      if ( dword_140389CC0 != -1 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        v10 = 0LL;
        v11 = *(_DWORD *)(384 * v7 + PpmPlatformStates + 108);
        if ( v11 )
        {
          v12 = *(_QWORD *)(384 * v7 + PpmPlatformStates + 112);
          while ( 1 )
          {
            v13 = (unsigned __int64)(unsigned int)v10 << 6;
            v14 = *(_QWORD *)(v13 + v12 + 32);
            if ( v14 )
            {
              if ( InterruptTimePrecise.QuadPart - v14 >= a1 )
                break;
            }
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= v11 )
              goto LABEL_11;
          }
          *a2 = *(_DWORD *)(v13 + v12 + 16);
          *a3 = *(_QWORD *)(PpmIdleVetoList + 16 * (v10 + 1));
        }
LABEL_11:
        KxReleaseSpinLock(&PpmIdleVetoLock);
        result = v8;
        __writecr8(v8);
      }
    }
  }
  return result;
}
