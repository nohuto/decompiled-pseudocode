/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x140003620
 * Callers:
 *     PoGetFrequencyBucket @ 0x1400035F4 (PoGetFrequencyBucket.c)
 *     KiChooseTargetProcessor @ 0x140073900 (KiChooseTargetProcessor.c)
 *     KiStartThreadCycleAccumulation @ 0x14008D5D0 (KiStartThreadCycleAccumulation.c)
 *     KeQueryTotalCycleTimeThread @ 0x14008D6A0 (KeQueryTotalCycleTimeThread.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     PpmPerfGetCurrentState @ 0x140129A10 (PpmPerfGetCurrentState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24176);
  v3 = *(_QWORD *)(a1 + 24184);
  if ( !v2 || !v3 )
    return 100LL;
  if ( *(_BYTE *)(v3 + 100) )
  {
    v4 = *(_DWORD *)(v3 + 116);
    if ( !a2 )
      return v4;
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 72);
  }
  result = *(unsigned int *)(v2 + 368);
  if ( v4 < (unsigned int)result )
    return v4;
  return result;
}
