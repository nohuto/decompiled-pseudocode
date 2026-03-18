/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x14023CC50
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x140202C20 (KeFindFirstSetLeftAffinityEx.c)
 *     PpmUpdateIdleVeto @ 0x14023CA00 (PpmUpdateIdleVeto.c)
 *     PpmEventPlatformVetoRequest @ 0x14024ACD0 (PpmEventPlatformVetoRequest.c)
 */

__int64 __fastcall PpmUpdatePlatformIdleVeto(__int64 a1)
{
  int updated; // ebx
  __int64 v3; // rax
  __int64 v4; // rbp
  KIRQL v5; // si
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  int FirstSetLeftAffinity; // eax
  _DWORD v10[44]; // [rsp+20h] [rbp-C8h] BYREF

  if ( PpmPlatformStates )
  {
    v3 = *(unsigned int *)(a1 + 4);
    if ( (unsigned int)v3 < *(_DWORD *)PpmPlatformStates )
    {
      v4 = PpmPlatformStates + 384 * v3;
      v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      updated = PpmUpdateIdleVeto(*(_BYTE *)(a1 + 12), *(_DWORD *)(a1 + 8), v4 + 80);
      if ( updated < 0
        || (LOBYTE(v6) = *(_BYTE *)(a1 + 12),
            PpmEventPlatformVetoRequest(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v6),
            v7 = (unsigned int)KiProcessorIndexToNumberMappingTable[KeGetCurrentPrcb()->Number],
            ((*(_QWORD *)(v4 + 8 * (v7 >> 6) + 136) >> (v7 & 0x3F)) & 1) != 0) )
      {
        KxReleaseSpinLock(&PpmIdleVetoLock);
        __writecr8(v5);
      }
      else
      {
        KxReleaseSpinLock(&PpmIdleVetoLock);
        __writecr8(v5);
        v10[0] = 1310721;
        memset(&v10[1], 0, 0xA4uLL);
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)(v4 + 128));
        KeAddProcessorAffinityEx(v10, FirstSetLeftAffinity);
        PopExecuteOnTargetProcessors((__int64)v10, (__int64)PsGetHostSilo, 0LL, 0LL);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)updated;
}
