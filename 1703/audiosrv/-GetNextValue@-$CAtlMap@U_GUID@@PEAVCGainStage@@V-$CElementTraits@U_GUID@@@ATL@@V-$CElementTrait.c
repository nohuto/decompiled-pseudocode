/*
 * XREFs of ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18008C68C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180015FB0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x18008C050 (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x18008F19C (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  __int64 v5; // rdx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = *(_QWORD *)(v2 + 24);
  if ( !v4 )
  {
    v5 = (unsigned int)(*(_DWORD *)(v2 + 32) % *(_DWORD *)(a1 + 16) + 1);
    do
    {
      if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 16) )
        break;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) )
        v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( !v4 );
  }
  *a2 = v4;
  return v2 + 16;
}
