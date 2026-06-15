/*
 * XREFs of ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002505C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x18008C050 (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x18008F19C (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition(
        __int64 *a1)
{
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( !a1[1] )
    return 0LL;
  v3 = *((_DWORD *)a1 + 4);
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  v5 = *a1;
  while ( !*(_QWORD *)(v5 + 8 * v4) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return 0LL;
  }
  return *(_QWORD *)(v5 + 8 * v4);
}
