/*
 * XREFs of KeQuerySystemAllowedCpuSetAffinity @ 0x1401174F8
 * Callers:
 *     PpmParkSteerInterrupts @ 0x14008FDD0 (PpmParkSteerInterrupts.c)
 *     KeResumeClockTimerFromIdle @ 0x140098E10 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KeQuerySystemAllowedCpuSetAffinity(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v6; // ebp
  unsigned int v7; // r8d
  unsigned __int64 *v8; // r10
  unsigned __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int64 v11; // rdx

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = KiCpuSetSequence;
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
        v8 = (unsigned __int64 *)KiSystemAllowedCpuSets;
        do
        {
          v9 = *v8;
          v10 = 0LL;
          if ( *v8 )
          {
            do
            {
              _BitScanForward64(&v11, v9);
              v10 |= *((_QWORD *)KiCpuSetAffinities + 64 * v7 + (unsigned int)v11);
              v9 &= ~(1LL << v11);
            }
            while ( v9 );
            if ( v10 )
            {
              if ( *(_WORD *)a1 <= (unsigned __int16)v7 )
                *(_WORD *)a1 = v7 + 1;
              *(_QWORD *)&a1[2 * (unsigned __int16)v7 + 2] |= v10;
            }
          }
          ++v7;
          ++v8;
        }
        while ( v7 < v6 );
      }
    }
    else
    {
      KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KeActiveProcessors);
    }
    result = KiCpuSetSequence;
    if ( KiCpuSetSequence == v4 )
    {
      *a2 = v4;
      return result;
    }
  }
  return result;
}
