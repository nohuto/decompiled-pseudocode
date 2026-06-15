/*
 * XREFs of ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000C170
 * Callers:
 *     ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14000F930 (-ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400059AC (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140005A90 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::ResetAPOs(CAudioDeviceGraph *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  CPipeInstance **Next; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)this + 56) )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 17);
    while ( v8 )
    {
      Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v3, &v8);
      CPipeInstance::ResetAPOs(*Next);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 16));
  }
  else
  {
    v2 = -2005139437;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        56LL,
        &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids,
        2289827859LL);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::ResetAPOs", 0x4E7u, -2005139437);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
