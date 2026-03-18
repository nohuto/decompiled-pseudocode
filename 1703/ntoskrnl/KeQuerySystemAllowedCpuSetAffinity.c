/*
 * XREFs of KeQuerySystemAllowedCpuSetAffinity @ 0x140045000
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     KeResumeClockTimerFromIdle @ 0x1400F6D60 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

_UNKNOWN **__fastcall KeQuerySystemAllowedCpuSetAffinity(_DWORD *a1, __int64 *a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // r8d
  _QWORD *v8; // r15
  unsigned __int64 *v9; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = KiCpuSetSequence;
      if ( (KiCpuSetSequence & 1) == 0 )
        break;
      _mm_pause();
    }
    if ( *a2 == KiCpuSetSequence )
      break;
    a1[1] = 0;
    *a1 = 1310721;
    memset(a1 + 2, 0, 0xA0uLL);
    if ( KiRestrictedSystemCpuSetsActive )
    {
      v6 = (unsigned __int16)KiActiveGroups;
      v7 = 0;
      if ( KiActiveGroups )
      {
        v8 = KiCpuSetAffinities;
        v9 = (unsigned __int64 *)KiSystemAllowedCpuSets;
        do
        {
          v10 = *v9;
          v11 = 0LL;
          if ( *v9 )
          {
            do
            {
              _BitScanForward64(&v12, v10);
              v11 |= v8[64 * v7 + (unsigned int)v12];
              v10 &= ~(1LL << v12);
            }
            while ( v10 );
            if ( v11 )
            {
              if ( *(_WORD *)a1 <= (unsigned __int16)v7 )
                *(_WORD *)a1 = v7 + 1;
              *(_QWORD *)&a1[2 * (unsigned __int16)v7 + 2] |= v11;
            }
          }
          ++v7;
          ++v9;
        }
        while ( v7 < v6 );
      }
    }
    else
    {
      KeCopyAffinityEx(a1, &KeActiveProcessors);
    }
    result = (_UNKNOWN **)KiCpuSetSequence;
    if ( KiCpuSetSequence == v5 )
    {
      *a2 = v5;
      return result;
    }
  }
  return result;
}
